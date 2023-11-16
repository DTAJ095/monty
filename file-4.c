#include "monty.h"

/**
 * f_add - adds the top two elements of the stack
 * @h: the head
 * @counter: the counter
 *
 * Return: Nothing
 */
void f_add(stack_t **h, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	aux = tmp->n + tmp->next->n;
	tmp->next->n = aux;
	*h = tmp->next;
	free(tmp);
}
