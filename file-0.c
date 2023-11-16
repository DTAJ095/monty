#include "monty.h"

/**
 * f_push - adds node to the stack
 * @h: pointer to a pointer to the head of the stack
 * @counter: line counter
 *
 * Return: Nothing
 */

void f_push(stack_t **h, unsigned int counter)
{
	int n, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*h);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(h, n);
	else
		add_queue(h, n);
}

/**
 * f_pall - prints the stack
 * @h: the head of the stack
 * @counter: not used
 *
 * Return: Nothing
 */

void f_pall(stack_t **h, unsigned int counter)
{
	stack_t *tmp;
	(void)counter;

	tmp = *h;
	if (h == NULL)
		return;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
