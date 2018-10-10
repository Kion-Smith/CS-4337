;change from infix to prefix
(define (prefix l)
;list is not empty
  (if (list? l)
    ;rest of list is not null
    (if (null? (cdr l)) 
    ;get character at start of list to convert prefix
    (prefix (car l))
    ;create list from recrusive call
    (list (cadr l)(prefix (car l)) (prefix (cddr l))) ) 
    ;outprint list
    l))

;get the current sign from swithc statement
(define (getSign s)
  (case s
    (( + ) +)
    (( - ) -)
    (( * ) *)
    (( / ) /)
    ))
    
;check to makesure that list is not empty and can still do calculations
(define (canStilCalc list)
  (if (list? list)
  (calc list)list))
;recusively traverse list while doing calculations
(define (calc list)
  (if (= (length list) 3 )
  ;get the top most sign then get the numbers to calculate then finally combine and recuisvely calc again
  ((getSign (car list)) (canStilCalc (cadr list)) (canStilCalc (caddr list)))(calc (cons (calc (list (car list) (cadr list) (caddr list) (cadddr list)))))))
  
;use prefix notation to calc
(define (EXP-EVAL list)
  (calc(prefix list)))
  
;call the main function
(EXP-EVAL '(2 + (3 * 5) ))      