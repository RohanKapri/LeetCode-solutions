(define/contract (maximum-sum nums m l r)
  (-> (listof exact-integer?) exact-integer? exact-integer? exact-integer? exact-integer?)
  
  (define n (length nums))
  (define NEG -2000000000000000000)

  (define psa (make-vector (+ n 1) 0))
  (for ([i (in-range n)])
    (vector-set! psa
                 (+ i 1)
                 (+ (vector-ref psa i)
                    (list-ref nums i))))

  (define cur (make-vector (+ n 1) 0))
  (define ans NEG)

  (for ([step (in-range m)])
    (define nxt (make-vector (+ n 1) NEG))

    (define dq (make-vector (+ n 1) 0))
    (define head 0)
    (define tail -1)

    (for ([i (in-range l (+ n 1))])
      (define pos (- i l))

      (when (not (= (vector-ref cur pos) NEG))
        (let ([v (- (vector-ref cur pos)
                    (vector-ref psa pos))])
          (let loop ()
            (when (and (<= head tail)
                       (<= (- (vector-ref cur (vector-ref dq tail))
                              (vector-ref psa (vector-ref dq tail)))
                           v))
              (set! tail (- tail 1))
              (loop)))
          (set! tail (+ tail 1))
          (vector-set! dq tail pos)))

      (let loop ()
        (when (and (<= head tail)
                   (< (vector-ref dq head)
                      (- i r)))
          (set! head (+ head 1))
          (loop)))

      (when (<= head tail)
        (define idx (vector-ref dq head))
        (define val
          (+ (vector-ref cur idx)
             (- (vector-ref psa i)
                (vector-ref psa idx))))

        (vector-set! nxt i val)
        (set! ans (max ans val))))

    (define best NEG)
    (for ([i (in-range (+ n 1))])
      (set! best (max best (vector-ref nxt i)))
      (vector-set! cur i best)))

  ans)