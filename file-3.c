#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack
 * @h: the head of the stack
 * @counter: line counter
 *
 * Return: Nothing
 */

void f_swap(stack_t **h, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, aux;

	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	aux = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = aux;
}
