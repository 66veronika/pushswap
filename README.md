*This project has been created as part of the 42 curriculum by vskopova.*


## Description

**push_swap** is an algorithmic project from the curriculum of 42.

The goal of the project is to sort a stack of integers in ascending order using a limited set of predefined operations and the smallest possible number of moves.

The program receives a list of integers as arguments and must output a sequence of operations that sorts them using two stacks (`a` and `b`). Only specific stack operations are allowed (swap, push, rotate, reverse rotate), making the challenge focused on algorithm optimization and efficient instruction management. 

The output of the program consists exclusively of the names of the operations performed to sort the stack.
Each instruction is written on a separate line and corresponds to one of the allowed operations: 
``` 
sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr 
```
No additional text or formatting is printed — only the sequence of instructions required to achieve a sorted stack.

Key objectives:
- Parse and validate input arguments
- Detect errors (invalid input, duplicates, overflow)
- Implement stack manipulation using linked lists
- Develop an efficient sorting strategy
- Minimize the number of operations

#### For this project, I chose to implement a Radix sort algorithm.
Radix sort offers predictable time complexity and performs efficiently under the constraints imposed by the push_swap project. Since the allowed operations are limited and comparison-based algorithms can lead to unpredictable instruction counts, Radix provides a stable and reliable solution.

By first compressing the input values into indexes and then sorting that based on binary representation, the algorithm ensures consistent performance regardless of the initial order of the stack.

While more advanced strategies such as chunk-based or cost-based sorting may reduce the total number of operations further, Radix sort provides a strong balance between simplicity, correctness, and guaranteed performance within evaluation thresholds.

---

## Instructions

### Compilation

Compile the project using:

```
make
```
Generate the executable:
```
./push_swap
```

Run the program with integer arguments:
```
./push_swap 2 1 3
```

Or as a quoted string:
```
./push_swap "2 1 3"
```



## RESOURCES
https://www.reddit.com/r/explainlikeimfive/comments/xuzyre/eli5_how_does_radix_sort_work/
https://www.geeksforgeeks.org/dsa/radix-sort/
https://www.geeksforgeeks.org/c/bitwise-operators-in-c-cpp/

AI Usage

Artificial intelligence tools were used during the development of this project in the following ways:

- Debugging memory issues (e.g., invalid free, segmentation faults)

- Reviewing parsing logic and edge cases

- Clarifying undefined behavior in C

- Improving understanding of algorithmic strategies