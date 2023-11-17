#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack
 * followed by a new line
 * @h: the head
 * @counter: the counter
 *
 * Return: Nothing
 */
void f_pstr(stack_t **h, unsigned int counter)
{
	stack_t *tmp;
	(void)counter;

	tmp = *h;
	while (tmp)
	{
		if (tmp->n > 127 || tmp->n <= 0)
			break;
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
