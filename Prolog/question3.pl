%Making sure that N is not 0 and then go to next recusrive call
delete_list(List, Num, Q) :-
    Num > 0,delete_list(List, Num, Num, Q), !.   
    
%List is empty   
delete_list([], _, _, []).   

%Reset the counter once num is hit and remove head
delete_list([_|Tail], 1, Num, Q) :-           
    delete_list(Tail, Num, Num, Q). 
	
%Decrement counter and keep checking to remove elements in X
delete_list([Head|X], Count, Num, [Head|Y]) :- 
    DecCount is Count - 1,delete_list(X, DecCount, Num, Y).