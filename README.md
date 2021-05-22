# Push_Swap
The least amount of moves with two stacks
<br>
Push_Swap is one of the algorithm projects in __42_Network__. The idea of this project is simple, You have two stacks called Stack A and Stack B. Stack A is given a random list of unorganized numbers. You must take the random list of numbers in Stack A and sort them so that Stack A is organized from smallest to largest. There are only a few moves you’re allowed to used to manipulate the stacks that we’re going to call “Instructions”. The main goal of this project is to organize Stack A in as few actions as possible.

### The Project
Create two programs: `checker` and `push_swap`.
<br>
The checker program reads a random list of integers from the stdin, stores them, and checks to see if they are sorted.
<br>
The push_swap program calculates the moves to sort the integers – pushing, popping, swapping and rotating them between stack a and stack b – and displays those directions on the stdout.
<br>
You can pipe `push_swap` into checker, and `checker` will verify that `push_swap`'s instructions were successful.
Both programs must mandatorily parse input for errors, including empty strings, no parameters, non-numeric parameters, duplicates, and invalid/non-existent instructions.

### Instructions:
- __`sa`__ (*swap a*) : swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- __`sb`__ : (*swap b*) : swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- __`ss`__ `sa` and `sb` at the same time.
- __`pa`__ (*push a*) : take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- __`pb`__ (*push b*) : take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- __`ra`__ (*rotate a*) : shift up all elements of stack a by 1. The first element becomes the last one.
- __`rb`__ (*rotate b*) : shift up all elements of stack b by 1. The first element becomes the last one.
- __`rr`__ : `ra` and `rb` at the same time.
- __`rra`__ (*reverse rotate a*) : shift down all elements of stack a by 1. The last element becomes the first one.
- __`rrb`__ (*reverse rotate b*) : shift down all elements of stack b by 1. The last element becomes the first one.
- __`rrr`__ : `rra` and `rrb` at the same time.
