(define/contract (max-score nums maxVal)
  (-> (listof exact-integer?) exact-integer? exact-integer?)
  
  (define max-element
    (max maxVal
         (if (null? nums) 0 (apply max nums))))

  (define freq-map (make-hash))
  (for ([x nums])
    (hash-set! freq-map x (add1 (hash-ref freq-map x 0))))

  ;; SPF
  (define spf (make-vector (add1 max-element)))
  (for ([i (in-range (add1 max-element))])
    (vector-set! spf i i))

  (for ([i (in-range 2 (add1 max-element))]
        #:when (= (vector-ref spf i) i))
    (let loop ([j (* i i)])
      (when (<= j max-element)
        (when (= (vector-ref spf j) j)
          (vector-set! spf j i))
        (loop (+ j i)))))

  ;; freq
  (define freq (make-vector (add1 max-element) 0))

  (for ([i (in-range 2 (add1 max-element))])
    (define cnt 0)
    (let loop ([j i])
      (when (<= j max-element)
        (set! cnt (+ cnt (hash-ref freq-map j 0)))
        (loop (+ j i))))
    (vector-set! freq i cnt))

  (define score 0)

  (for ([num (in-range 1 (add1 max-element))])

    (define facs '())
    (let ([tmp num])
      (let loop ([x tmp])
        (when (> x 1)
          (define factor (vector-ref spf x))
          (set! facs (cons factor facs))
          (let remove ([y x])
            (if (= (remainder y factor) 0)
                (remove (quotient y factor))
                (loop y))))))

    (set! facs (reverse facs))

    (define sz (length facs))
    (define total-dependent 0)

    (for ([mask (in-range 1 (arithmetic-shift 1 sz))])
      (define product 1)
      (define parity 0)

      (for ([idx (in-range sz)])
        (when (not (= 0 (bitwise-and mask
                                     (arithmetic-shift 1 idx))))
          (set! product (* product (list-ref facs idx)))
          (set! parity (bitwise-xor parity 1))))

      (if (= parity 1)
          (set! total-dependent
                (+ total-dependent
                   (vector-ref freq product)))
          (set! total-dependent
                (- total-dependent
                   (vector-ref freq product)))))

    (cond
      [(hash-has-key? freq-map num)
       (if (= num 1)
           (set! score (max score 1))
           (set! score
                 (max score
                      (- num (- total-dependent 1)))))]
      [(<= num maxVal)
       (if (= num 1)
           (set! score (max score 0))
           (set! score
                 (max score
                      (- num
                         (max 1 total-dependent)))))]))

  score)