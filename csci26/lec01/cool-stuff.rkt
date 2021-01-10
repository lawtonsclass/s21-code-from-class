#lang racket

;; there is no main function!

(define pi 3.14)

(define (print-from-1-to n)
  (cond [(= n 1) (printf "1\n")] ;; base case
        [else (print-from-1-to (- n 1))
              (printf "~a\n" n)]))

(struct 2d-point (x y)) ;; makes 2d-point-x 2d-point-y 2d-point?

(define p (2d-point 5 7))

(define l1 (list 1 2 3))
(define l2 '(1 2 3))

;; map applies a function to every element of a list

(define (plus2 x) (+ x 2))

;; (map plus2 l1)

;; lambdas are anonymous functions -- functions without names!
;; (map (lambda (x) (+ x 4)) l1)

;; filter takes all elements for which the given function returns true (#t)
;; (filter (lambda (x) (> x 1)) l2)

