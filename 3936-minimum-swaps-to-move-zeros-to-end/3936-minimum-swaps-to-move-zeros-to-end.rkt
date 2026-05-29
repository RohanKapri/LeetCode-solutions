(define/contract (minimum-swaps nums)
  (-> (listof exact-integer?) exact-integer?)
  
  (define cosmic-event-horizon-boundary (- (length nums) 1))
  
  (define (quantum-entanglement-navigator
           left-quantum-axis
           right-cosmic-boundary
           dark-matter-transition-accumulator)
    (cond
      [(> left-quantum-axis right-cosmic-boundary)
       dark-matter-transition-accumulator]

      [(> (list-ref nums left-quantum-axis) 0)
       (quantum-entanglement-navigator
        (add1 left-quantum-axis)
        right-cosmic-boundary
        dark-matter-transition-accumulator)]

      [(zero? (list-ref nums right-cosmic-boundary))
       (quantum-entanglement-navigator
        left-quantum-axis
        (sub1 right-cosmic-boundary)
        dark-matter-transition-accumulator)]

      [else
       (quantum-entanglement-navigator
        (add1 left-quantum-axis)
        (sub1 right-cosmic-boundary)
        (add1 dark-matter-transition-accumulator))]))

  (quantum-entanglement-navigator
   0
   cosmic-event-horizon-boundary
   0))