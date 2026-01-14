# 🔢 Push Swap

## Description

Push Swap is a project developed as part of the 42 curriculum.  
The objective is to sort a stack of integers using a limited set of operations and the smallest possible number of moves.

This project focuses on algorithmic thinking, data structures, and optimization under strict constraints.

This project prioritizes correctness and efficiency within the given constraints.
The chunk-based strategy is chosen for its balance between simplicity and performance.
<br/>

## Project Objectives

- Sort a stack of integers using only the allowed operations
- Minimize the number of instructions
- Manage stacks efficiently
- Develop and apply an optimized sorting strategy
- Respect the constraints and norms defined by 42

<br/>

## Program Usage

The program is executed as follows:

```bash
./push_swap <list of integers>
````

Example:
```bash
./push_swap 3 2 5 1 4
````

<br/>

## Allowed Operations

The program is limited to the following operations:

sa, sb — swap the first two elements of a stack

ss — swap the first two elements of both stacks

pa, pb — push the top element from one stack to the other

ra, rb — rotate a stack upwards

rr — rotate both stacks upwards

rra, rrb — rotate a stack downwards

rrr — rotate both stacks downwards

<br/>

## Sorting Strategy

The sorting algorithm is based on a chunk-based approach.
The main idea is to divide the dataset into smaller groups (chunks) and sort them progressively, reducing the complexity of each step.
At a high level, the algorithm works as follows:
- The input values are normalized and indexed
- The stack is divided into chunks based on value ranges
- Elements belonging to the current chunk are pushed to stack B
- Stack B is organized to facilitate efficient reinsertion
- Elements are pushed back to stack A in the correct order

This approach allows efficient handling of large datasets while keeping the number of operations low.

<br/>

## Error Handling

- The program checks for invalid input
- Duplicate values are not allowed
- Non-numeric arguments result in an error

In case of error, the program exits without producing any output

<br/>

## Files Structure

The project is composed of the following files:
- push_swap.c
- operations.c
- sorting.c
- utils.c
- push_swap.h

Each file is designed to keep responsibilities clear and separated.

<br/>

## Compilation

To compile the project, use the provided Makefile:
```bash
make
```
This will generate the push_swap executable.

Additional rules:
```bash
make clean     # Removes object files
make fclean    # Removes object files and the executable
make re        # Recompiles the project
```

<br/>
