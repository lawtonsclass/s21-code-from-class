#lang racket

(define P '((assign x (integer 1))
            (while (< (var x) (integer 11))
              ((print (var x))
               (assign x (+ (var x) (integer 1)))))))

(define (execute-program P)
  (execute-stmts P (make-hash)))

(define (execute-stmts S state)
  ;; in Racket, either S is a non-empty list or it is an empty list
  (match S
    [(list stmt stmts ...) ;; to execute a seq of statements,
     ;; run the first stmt
     (define new-state (execute-stmt stmt state))
     ;; run the rest of the stmts
     (execute-stmts stmts new-state)]
    [(list) state]))

(define (execute-stmt S state)
  ;; each individual stmt is just another list!
  (match S
    [(list 'assign v exp)
     ;; to run an assignment statment, figure out the value of exp
     (define exp-val (execute-exp exp state))
     ;; then, put the result into the state at variable v
     (hash-set! state v exp-val)
     ;; finally, give back the new state
     state]
    [(list 'print exp)
     ;; to print something, we need to figure out the value of exp
     (define exp-val (execute-exp exp state))
     (printf "~a\n" exp-val)
     state]
    [(list 'while _cond body_stmts)
     ;; figure out if cond is true to see if we can execute the body
     (define cond-val (execute-exp _cond state))
     (cond
       [cond-val
        ;; if the condition is true, execute the body once,
        (let ([new-state (execute-stmts body_stmts state)])
          ;; and then try to execute the loop all over again
          (execute-stmt S new-state))]
       ;; if the condition is false, we're done; do nothing
       [else state])]))

(define (execute-exp exp state)
  (match exp
    [(list 'var v) (hash-ref state v)]
    [(list 'integer i) i]
    [(list '+ e1 e2)
     ;; figure out what e1 and e2's values are so we can add them
     (define e1-val (execute-exp e1 state))
     (define e2-val (execute-exp e2 state))
     (+ e1-val e2-val)]
    [(list '< e1 e2)
     ;; figure out what e1 and e2's values are so we can compare them
     (define e1-val (execute-exp e1 state))
     (define e2-val (execute-exp e2 state))
     (< e1-val e2-val)]))

(execute-program P)
