;Create the factorial function
(define (factorial n)
;if n is equal to 0 set n equal to 1
  (cond ((= n 0) 1)
;recusively mult n * n-1 until n = 0
  (else (* n (factorial(- n 1))))))

(factorial 4)
