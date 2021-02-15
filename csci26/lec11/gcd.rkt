#lang racket

(define (gcd x y)
  (cond [(= x 0) y]
        [else (gcd (modulo y x) x)]))
