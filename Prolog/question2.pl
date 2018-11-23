%Empty	
simplelist([],[]).
%Check to see if the list is not a list
simplelist(X,[X]) :- 
	\+ is_list(X).
%For the other cases get the combined versions of the head and tail recusrively then append to Q, the new list	
simplelist([Head|Tail], Q):-
	simplelist(Head, X),simplelist(Tail, Y),append(X, Y, Q).
