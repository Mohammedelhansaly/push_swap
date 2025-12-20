*This project has been created as part of the 42 curriculum by moel-han*

<h1 align="center">
  push_swap
<h1>


## Description
Push_swap is a project designed to introduce sorting algorithms and optimization techniques. The objective is to sort a stack of integers using a restricted set of operations—such as push, swap, and rotate—while minimizing the total number of moves.

Initially, all numbers are stored in a single stack, called stack A, where they are placed consecutively. By applying the allowed operations, the program must eventually sort all the integers in stack A in ascending order.

## Instructions

### Compilation

Compile the project by running :

```bash
make
```
This will generate the `push_swap` excutable.
To compile the bonus `checker` program :
```bash
make bonus
```

### Execution

Run `push_swap` with list of integers :

```bash
./push_swap 2 1 3
```

To verify the result using the checker :

```bash
./push_swap 2 1 3 | ./checker 2 1 3
```
## Resources

- [42 Push_swap Subject](https://cdn.intra.42.fr/pdf/pdf/189063/en.subject.pdf) – official project description.
- [Sorting Algorithms](https://www.geeksforgeeks.org/sorting-algorithms/) – tutorials and explanations for sorting strategies.
- [tldraw](https://tldraw.com/) – used to create visual diagrams of stack operations and sorting flows.

### AI Assistance

AI (ChatGPT) was used to assist in understanding and improving certain aspects of the project, including:

- **Memory Management:** Guidance was provided on how to properly allocate and free memory in stack operations to avoid memory leaks. 

- **Algorithm Explanation:** AI helped explain sorting strategies such as the **chunk sort , radix sort** algorithm.

No AI-generated code was used directly; all final code and testing were done manually.

## Usage Examples

Run the program with a list of integers as arguments:

```bash
./push_swap 3 2 1
```
to verify :
```bash
./push_swap 3 2 1 | ./checker 3 2 1
```

Expected output:
```bash
OK
```
## Features

- Sorts a stack of integers using a limited set of operations

- Handles input errors (duplicates, non-integers, overflow)

    - Optimized sorting for:

    - Small stacks (≤ 5 elements)

    - Large stacks using chunk-based sorting

- Compatible with the official 42 checker

## Technical Choices

- Language: C

- Data Structure: Linked lists to represent stacks

- Sorting Strategy:

    - Simple hard-coded logic for small stacks

    - Chunk-based algorithm for large inputs to minimize operations
