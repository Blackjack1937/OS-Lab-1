## Answers to the lab exercises

# Question I :

## Question I.1 :

    The three variables a, b and c that the function take as parameters are stored in the stack, they should only be stored until the end of the function. The tmp_min is also stored in the stackn we didn't explicitely manage it with free or malloc even if its returned by the function (thus used outside).
    The four variables memory is released after the function returns and stops its execution.

## Question I.2 :

    r is a pointer for size * integers, same size of the vectors, it contains the memory address of that array. This segment of memory is stored in the stack (it's a variable, a fix value, the memory pointed by that pointer is in the heap).

## Question I.3 :

    The exact meaning of that assignement is that we take the values that are stored in the memory addresses v1 and v2 (pointers), add those values and replace the value at the address given by r with that result, for each i. That writing operation happens in the heap (we're manipulating the allocated memory)

## Question I.4 :

    We would need to allocate the result array r on the stack instead of the heap. This requires modifying the function to allocate the array within main() and pass it to vect_sum() as a parameter.

## Question I.5:

    Stack-allocated variables have an automatic, fixed lifetime, tied to the function or block scope. When the function/block exits, they are automatically destroyed.

    Heap-allocated variables have a flexible, manually managed lifetime. They remain allocated until explicitly freed, potentially persisting across multiple function calls or even the entire runtime of the program.

# Exercice II:

## Question II.1 :

    In the first line, there is a case of illegal memory access, as we cannot directly allocate an integer value to a pointer.

    In the fourth line, it is legal to initialize the *pc pointer that way, but it is called a "wild" pointer and dangerous coding-wise, that it might raise a compilation warning. It's better to initialize it using a NULL value or the pointer value of an existing variable using &.

    In the 10th line, we try to print a %d argument which represents an int, we should use %p to print a pointer like pc.

    In the last line, pc is a pointer, and we cannot attribute a direct integer value like -4. We replace it with something else (check code).

# Exercise III :

## Exercise III.1 :

    Convert the addresses:
    0x7ffc2cce6990 in decimal: 140723595583120
    0x7ffc2cce6988 in decimal: 140723595583112


    140723595583120 - 140723595583112 = 8
