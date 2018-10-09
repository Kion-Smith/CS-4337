 ; Get the number of nested parantehsis
 (define (EXP_DEPTH list)
 ;Check to make sure the list is not null set to 1(this complier does not suport doing 'a, so only value possible is 1 )
  (cond ((null? list) 1 )  
  ; check to see if the fisrt element is a list or not , and then recurisvely get the rest of the list         
  ((not (list? (car list))) (EXP_DEPTH (cdr list)))
  ;add the result of the brakets and do a recursion on the first elent and rest of list
  (else (+ 1 (EXP_DEPTH (car list) (EXP_DEPTH (cdr list)))))))
  
;calling the funciton
(EXP_DEPTH '(I J ((K) L) M))      