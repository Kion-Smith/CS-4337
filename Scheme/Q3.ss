
;create function to reverse list
(define (reverse list)
;check to see if the list is null
  (cond ((null? list) '() ) 
;get the first character then gettinf the reverse of the list
  (else (cons (car list) (append (reverse (cdr list)) (cons (car list) '())   ) ))))

(reverse '(1 2 3 4 5))
