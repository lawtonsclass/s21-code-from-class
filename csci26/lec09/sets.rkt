#lang racket

;; let's model sets as lists!

;; removes the duplicates from a list l
;; example (remove-dups '(1 2 2 3 3)) ⇒ '(1 2 3)
(define (remove-dups l)
  (cond
    [(empty? l) l] ;; empty lists have no duplicates!
    [else ;; list is nonempty
     (define fst (first l))
     (define rst (rest l))

     ;; remove all extra occurrences of fst in rst
     ;; we'll *filter* rst to remove all fsts
     (define filtered-rst (filter (lambda (x) (not (= x fst))) rst))

     ;; remove duplicates from the rest of the filtered list now!
     (define new-rst (remove-dups filtered-rst))
     ;; final answer is fst + new-rst
     (cons fst new-rst)]))

(define (make-set l)
  (remove-dups l))

;; returns #t if x ∈ S
(define (∈ x S)
  (if (member x S) #t #f))

(define l '(1 2 2 3 3))
(define l2 '(2 2 3 3 4 4))

;; a union is very similar to appending two lists!
(define (∪ S1 S2)
  (remove-dups (append S1 S2)))

(define (∩ S1 S2)
  (define every-element (∪ S1 S2))

  ;; now, go through every-element and check if it's ∈ both S1 and S2
  ;; if it is, add it to the final output set

  (define in-both (filter (lambda (x) (and (∈ x S1) (∈ x S2))) every-element))
  ;; in-both might have duplicates
  (remove-dups in-both))
