(define/contract (max-total nums s)
  (-> (listof exact-integer?) string? exact-integer?)
  (let* ([v (list->vector nums)]
         [n (string-length s)])
    (let loop ([i 0] [ans 0])
      (if (>= i n)
          ans
          (if (char=? (string-ref s i) #\0)
              (loop (add1 i) ans)
              (let* ([start i]
                     [init-sum (if (> i 0) (vector-ref v (sub1 i)) 0)]
                     [init-min (if (> i 0) (vector-ref v (sub1 i)) +inf.0)])
                (let scan ([j i]
                           [cur-sum init-sum]
                           [cur-min init-min])
                  (if (and (< j n)
                           (char=? (string-ref s j) #\1))
                      (scan (add1 j)
                            (+ cur-sum (vector-ref v j))
                            (min cur-min (vector-ref v j)))
                      (loop j
                            (+ ans
                               (if (> start 0)
                                   (- cur-sum cur-min)
                                   cur-sum)))))))))))