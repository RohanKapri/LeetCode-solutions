(define/contract (max-ratings units)
  (-> (listof (listof exact-integer?)) exact-integer?)
  (let* ([m (length units)]
         [n (length (car units))])
    (if (= n 1)
        (apply + (map car units))
        (let-values ([(total mini-f mini-s)
                      (for/fold ([total 0]
                                 [mini-f 1000000000]
                                 [mini-s 1000000000])
                                ([row units])
                        (let-values ([(fir-min sec-min)
                                      (for/fold ([fir-min 1000000000]
                                                 [sec-min 1000000000])
                                                ([val row])
                                        (cond
                                          [(< val fir-min)
                                           (values val fir-min)]
                                          [(< val sec-min)
                                           (values fir-min val)]
                                          [else
                                           (values fir-min sec-min)]))])
                          (values (+ total sec-min)
                                  (min mini-f fir-min)
                                  (min mini-s sec-min))))])
          (- (+ total mini-f) mini-s)))))