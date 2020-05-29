# cpp_practice



# 1 Tower of Hanoi Problem
Tower of Hanoi problem: [Wiki](https://en.wikipedia.org/wiki/Tower_of_Hanoi)

Using two methods to solve it:

(1) Notice the solution is composed of the loop of the set of steps (0,1), (0,2), (1,2) where at each step do the legal move  (put the cube of smaller length onto the cube of larger length). [code](tower_sol1/main.cpp)

(2) Notice the problem can be divided into subproblems. Use divide-and-conquer recurrsive algorithm to solve it. [code](tower_sol1/main.cpp)

Output:
```
Start status: 
Stack[0]: 4 3 2 1 
Stack[1]: 
Stack[2]: 


Stack[0]: 4 3 2 
Stack[1]: 1 
Stack[2]: 


Stack[0]: 4 3 
Stack[1]: 1 
Stack[2]: 2 


Stack[0]: 4 3 
Stack[1]: 
Stack[2]: 2 1 


Stack[0]: 4 
Stack[1]: 3 
Stack[2]: 2 1 


Stack[0]: 4 1 
Stack[1]: 3 
Stack[2]: 2 


Stack[0]: 4 1 
Stack[1]: 3 2 
Stack[2]: 


Stack[0]: 4 
Stack[1]: 3 2 1 
Stack[2]: 


Stack[0]: 
Stack[1]: 3 2 1 
Stack[2]: 4 


Stack[0]: 
Stack[1]: 3 2 
Stack[2]: 4 1 


Stack[0]: 2 
Stack[1]: 3 
Stack[2]: 4 1 


Stack[0]: 2 1 
Stack[1]: 3 
Stack[2]: 4 


Stack[0]: 2 1 
Stack[1]: 
Stack[2]: 4 3 


Stack[0]: 2 
Stack[1]: 1 
Stack[2]: 4 3 


Stack[0]: 
Stack[1]: 1 
Stack[2]: 4 3 2 


Stack[0]: 
Stack[1]: 
Stack[2]: 4 3 2 1 


End status: 
Stack[0]: 
Stack[1]: 
Stack[2]: 4 3 2 1 
```
