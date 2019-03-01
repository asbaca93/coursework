/*******************************************************************************************************************
*
* Andrew Baca
* November 16th, 2018
* 
* pro.fun
* purpose: this program tests the prolog programming language in the swipl environment. given a list representing
*	   a binary tree, we need to check if a target is a member of a list.  We also made functions to print out 
*	   unique elements and the depth of a TREE
*
*******************************************************************************************************************/



mem(X, [X|_ ]) :- atom(X).			/*if the list is a single atom, return*/				
mem(X, [ _|T]) :- mem(X,T).			/*call mem recursively to traverse list*/

uniq([], []).					/*Uniq of an empty list does nothing*/
uniq([H|T], Z):- mem(H,T), !, uniq(T,Z).	/*check for members of one list, if exist, do nothing*/
uniq([H|T], [H|Z]) :- uniq(T,Z).		/*if not, add to target list*/

append([],L, L).				/*Takes two list and puts them together: Kurein*/
append([H|T], L, [H|R]) :- append(T, L, R).

flatten(X,[X]) :- atom(X).			/*dont flatten if there is an atom*/
flatten([],[]).					/*base case for empty*/
flatten([H|T], R) :- flatten(H, R1), flatten(T, R2), append(R1,R2,R). 	/*flatten the list and concatenate*/

flattenThenUnique(H, T) :- flatten(H, X), uniq(X, T).		/*call flatten then unique*/

depth([], -1).					/*Base case depth of an empty tree is 1*/ 
depth(X, 0) :- atom(X).				/*base case for single atom*/
depth([H|T], Z) :- depth(H,X1), depth(T,X2), X3 is X2 + 1, Z is max(X1,X3). 	/*traverse and increment*/
