(define/contract (generate-valid-strings n k)
  (-> exact-integer? exact-integer? (listof string?))

  (define (dfs s cost)
    (cond
      [(> cost k) '()]
      [(= (string-length s) n) (list s)]
      [else
       (append
        (dfs (string-append s "0") cost)
        (if (or (zero? (string-length s))
                (not (char=? (string-ref s (sub1 (string-length s))) #\1)))
            (dfs (string-append s "1")
                 (+ cost (string-length s)))
            '()))]))

  (dfs "" 0))