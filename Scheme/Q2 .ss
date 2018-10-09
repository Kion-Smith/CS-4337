;Create the recrusive method to multiply the list
(define (listMult list)
  ;if the list is null set the num to 1
  (cond ((null? list) 1)
  ;else multiply the start of the list to the rest of the list (in the recrusive function)
  (else (* (car list) (listMult (cdr list))))))

;run the method
(listMult '(1 2 3 4 5))