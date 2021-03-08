#lang racket

(define (f n)
  (+ (- (* 2 (expt n 3)) (* 4 (expt n 2))) 7))

(define (g n)
  (* 3 (expt n 3)))

(define (loop)
  (for ([i (in-range 1 1000)])
    (printf "f(~a) = ~a, g(~a) = ~a\n" i (f i) i (g i))))
