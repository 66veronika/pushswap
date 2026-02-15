*This project has been created as part of the 42 curriculum by <vskopova>.*


## Description

**push_swap** is an algorithmic project from the curriculum of 42.

The goal of the project is to sort a stack of integers in ascending order using a limited set of predefined operations and the smallest possible number of moves.

The program receives a list of integers as arguments and must output a sequence of operations that sorts them using two stacks (`a` and `b`). Only specific stack operations are allowed (swap, push, rotate, reverse rotate), making the challenge focused on algorithm optimization and efficient instruction management.

Key objectives:
- Parse and validate input arguments
- Detect errors (invalid input, duplicates, overflow)
- Implement stack manipulation using linked lists
- Develop an efficient sorting strategy
- Minimize the number of operations

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

AI Usage
Artificial intelligence tools were used during the development of this project in the following ways:

Debugging memory issues (e.g., invalid free, segmentation faults)

Reviewing parsing logic and edge cases

Clarifying undefined behavior in C

Improving understanding of algorithmic strategies