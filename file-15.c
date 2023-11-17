#include "monty.h"

/**
 * f_stack - sets the format of the data to a stack LIFO
 * @h: the head
 * @counter: the counter
 *
 * Return: Nothing
 */
void f_stack(stack_t **h, unsigned int counter)
{
	(void)h;
	(void)counter;

	bus.lifi = 0;
}


/**
 * f_queue - sets the format of the data to a stack FIFO
 * @h: the head
 * @counter: the counter
 *
 * return: Nothing
 */
void f_queue(stack_t **h, unsigned int counter)
{
	(void)h;
	(void)counter;

	bus.lifi = 1;
}
