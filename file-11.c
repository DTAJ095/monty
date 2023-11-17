#include "monty.h"

/**
 * f_pchar - prints the character at the top of the stack;
 * @h: the head
 * @counter: the counter
 *
 * Return: Nothing
 */
void f_pchar(stack_t **h, unsigned int counter)
{
	stack_t *tmp;

	tmp = *h;
	if (!tmp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	if (tmp->n > 127 || tmp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tmp->n);
}
