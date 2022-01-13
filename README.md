# 0x19. C - Stacks, Queues - LIFO, FIFO
![Alt text](https://pbs.twimg.com/media/CFYYWy6UEAE9Ow-.png)
***
## This is a README.md for the repository 0x19. C - Stacks, Queues - LIFO, FIFO
```
For Holberton School
Cohort 16.
```
### General
* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables

### More Info


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 **/
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;```

```

```
/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
**/
       typedef struct instruction_s
       {
               char *opcode;
               void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```

## Files included

| File                 | Details                                    |
|--------------------- | ------------------------------------------ |
| [](./a) |	       |
| [](./b) |	       |
| [](./c) |	       |
| [](./)  |	       |
| [](./)  |	       |

### Author
***
*Holberton School Student*

Juan Sebastian Posada  - [Github](https://github.com/Juansepo13) - [Twiter](https://twitter.com/@JuanSeb35904130)
