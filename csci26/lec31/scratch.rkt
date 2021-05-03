#lang racket

((lambda (x) (lambda (y) (+ x y))) 4) ;; gives back (lambda (y) (+ 4 y))

(((lambda (x) (lambda (y) (+ x y))) 4) 2)

(define true_lambda (lambda (x) (lambda (y) x)))
(define false_lambda (lambda (x) (lambda (y) y)))

(define or_lambda (lambda (p) (lambda (q) ((p p) q))))

((or_lambda true_lambda) false_lambda)
((or_lambda false_lambda) false_lambda)
