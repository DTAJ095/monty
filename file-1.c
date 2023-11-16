#include "monty.h"

/**
 * f_pint - prints the value at the top of the stack
 * @h: the head of the stack
 * @counter: line counter
 *
 * Return: Nothing
 */

void f_pint(stack_t **h, unsigned int counter)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}
