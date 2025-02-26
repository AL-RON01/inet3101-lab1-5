# INET3101 - Lab 1.5

This repository contains my solutions and implementations for Lab 1.5, focusing on dynamic memory allocation in C and object-oriented concepts.

## Overview

This lab explores various approaches to memory management, including:
- Dynamic memory allocation and reallocation in C
- Object-oriented programming concepts
- Linked lists as an alternative data structure

## Contents

This repository includes:
1. Modified C code implementing dynamic array resizing
2. Documentation with analyses and explanations
3. Implementation of linked list concepts

## Dynamic Memory Allocation Solution

My approach implements a dynamic resizing strategy using `realloc()` that doubles the array's capacity when needed. Key features:

1. Tracks both current number of elements (`size`) and total capacity
2. Uses `realloc()` to double capacity when necessary
3. Uses temporary pointers to safely handle reallocation failures
4. Implements error handling to prevent memory leaks
5. Grows arrays geometrically (doubling) for efficiency

This approach is memory-safe, efficient, and provides a seamless user experience.

## Object-Oriented Programming Concepts

In Object-Oriented Programming (OOP), objects are self-enclosed units combining data (attributes) and behavior (methods) into a single entity. Classes serve as blueprints for objects.

Python Lists demonstrate these OOP principles by:
- Encapsulating both data elements and methods (`append()`, `insert()`, `sort()`, etc.)
- Hiding implementation details (like dynamic memory allocation)
- Providing a clean interface for data manipulation
- Handling complex operations without requiring manual memory management

## Linked Lists

The linked list implementation demonstrates an alternative approach to managing collections of data. Advantages include:
- Dynamic growth without reallocation of entire blocks
- Efficient insertions and deletions
- Flexibility in memory usage

Linked lists solve similar problems to dynamic arrays but with different trade-offs in terms of memory overhead, access patterns, and cache locality.

## Requirements

- GCC compiler for C programs
- Standard C libraries

## Usage

Compile the dynamic memory example:
```bash
gcc -o dynamic_memory dynamic_memory.c
./dynamic_memory 5
