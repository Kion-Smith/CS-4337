my_range(In,In,[In]).
my_range(Low,High,[Low|List]) :- 
	Low < High, Cur is Low + 1, my_range(Cur,High,List).
	
	