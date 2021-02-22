; X = 1 and O = 0

; Variable declarations
(declare-fun b11 () Int)
(declare-fun b12 () Int)
(declare-fun b13 () Int)
(declare-fun b21 () Int)
(declare-fun b22 () Int)
(declare-fun b23 () Int)
(declare-fun b31 () Int)
(declare-fun b32 () Int)
(declare-fun b33 () Int)

; helper function for counting Xs
(define-fun countX () Int
  (+ (ite (= b11 1) 1 0)
     (ite (= b12 1) 1 0)
     (ite (= b13 1) 1 0)
     (ite (= b21 1) 1 0)
     (ite (= b22 1) 1 0)
     (ite (= b23 1) 1 0)
     (ite (= b31 1) 1 0)
     (ite (= b32 1) 1 0)
     (ite (= b33 1) 1 0)))

; helper function for counting Os
(define-fun countO () Int
  (+ (ite (= b11 0) 1 0)
     (ite (= b12 0) 1 0)
     (ite (= b13 0) 1 0)
     (ite (= b21 0) 1 0)
     (ite (= b22 0) 1 0)
     (ite (= b23 0) 1 0)
     (ite (= b31 0) 1 0)
     (ite (= b32 0) 1 0)
     (ite (= b33 0) 1 0)))

; helper function for checking if someone won
(define-fun won? ((player Int)) Bool
  (or
    ;; rows
    (and (= b11 player) (= b12 player) (= b13 player))
    (and (= b21 player) (= b22 player) (= b23 player))
    (and (= b31 player) (= b32 player) (= b33 player))
    ;; columns
    (and (= b11 player) (= b21 player) (= b31 player))
    (and (= b12 player) (= b22 player) (= b32 player))
    (and (= b13 player) (= b23 player) (= b33 player))
    ;; diagonals
    (and (= b11 player) (= b22 player) (= b33 player))
    (and (= b13 player) (= b22 player) (= b31 player))))

; Constraints
;; Every square is filled by X or O
(assert (= countX 5))
(assert (= countO 4))
;; There is one more square filled by X
;;; (Already taken care of above)
;; X won
(assert (won? 1))
;; O didn't also win (which is technically possible otherwise)
(assert (not (won? 0)))

; Solve
(check-sat)
(get-model)
