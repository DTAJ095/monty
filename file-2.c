#include "monty.h"

/**
 * f_pop - removes the element at the top of the stack
 * @h: the head of the stack
 * @counter: line counter
 *
 * Return: Nothing
 */

void f_pop(stack_t **h, unsigned int counter)
{
	stack_t *tmp;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	*h = tmp->next;
	free(tmp);
}
