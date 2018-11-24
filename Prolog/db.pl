reverse(list, Q):-
	%call the reverse function 
	reverse(list,Q, []).
	
%For Empty list
reverse([],list,list).
%adding head to end of the list
reverse([Head|Tail], list, Q):-
	reverse(Tail,list,[Head|Q]).
	