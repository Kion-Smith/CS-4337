warm(pen).
warm(human).

makemilk(pen).
makemilk(human).

havehair(pen).
havehair(human).

mam(X):-
 warm(X),makemilk(X),havehair(X).
