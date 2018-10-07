;guile 2.0.11
(define lst '(1 2 3 4))
(display (cdr lst))
(display (eq? 2.5 2.5))



;(define inc (lambda (x) (+ x 1))

(define (multList alst) 
  (cond 
   ((null? alst) #t)
      (display "a")
   (else #t)
      (display "z")
 ))

(display "\n")


(display (multList lst))
