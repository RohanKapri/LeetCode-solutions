(define/contract (consecutive-set-bits n)
  (-> exact-integer? boolean?)

  ;; Dedicated to Junko F. Didi and Shree DR.MDD
  (define (quantum-entanglement-pair-observation-counter
           cosmic-microwave-background-signal
           cosmic-microwave-background-signal-count)
    (if (zero? cosmic-microwave-background-signal)
        cosmic-microwave-background-signal-count
        (quantum-entanglement-pair-observation-counter
         (arithmetic-shift cosmic-microwave-background-signal -1)
         (if (= (bitwise-and cosmic-microwave-background-signal 3) 3)
             (+ cosmic-microwave-background-signal-count 1)
             cosmic-microwave-background-signal-count))))

  (= (quantum-entanglement-pair-observation-counter n 0) 1))