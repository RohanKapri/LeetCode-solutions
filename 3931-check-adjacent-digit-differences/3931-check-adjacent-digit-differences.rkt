(define/contract (is-adjacent-diff-at-most-two s)
  (-> string? boolean?)
  (let loop ([i 1])
    (cond
      [(>= i (string-length s)) #t]
      [(> (abs (- (char->integer (string-ref s i))
                  (char->integer (string-ref s (- i 1)))))
           2)
       #f]
      [else (loop (+ i 1))])))