;function that calls both max and min
(define ( minAndMax list) 
  (append (cons 'Min=  (cons (getMin list) '() )) (cons 'Max=  (cons (getMax list) '() ))))

;geting min num
(define (getMin list)
  ;check to make sure that list is not null
  (cond ((null? list) '())
  ;check to see that the rest of the nums are not null
  ((null? (cdr list)) (car list))
  ;check current car against recusive call of the rest of the list
  ((< (car list) (getMin (cdr list))) (car list))
  ;else loop through the list
  (else (getMin (cdr list)))))

;getting max num
(define (getMax list)
;check to make sure that list is not null
  (cond ((null? list) '())
  ;check to see that the rest of the nums are not null
  ((null? (cdr list)) (car list))
  ;check current car against recusive call of the rest of the list
  ((> (car list) (getMax (cdr list))) (car list))
  ;else loop through the list
  (else (getMax (cdr list)))))

(minAndMax '( 8 9 10 30 1 20 100))