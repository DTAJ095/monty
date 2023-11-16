#include "monty.h"

/* TASK_6 */

/**
 * f_sub - subtraction
 * @h: the head
 * @counter: the counter
 *
 * Return: Nothing
 */
void f_sub(stack_t **h, unsigned int counter)
{
	stack_t *tmp;
	int res, nodes;

	tmp = *h;
	for (nodes = 0; tmp != NULL; nodes++)
		tmp = tmp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	res = tmp->next->n - tmp->n;
	tmp->next->n = res;
	*h = tmp->next;
	free(tmp);
}

/* TASK_7 */

/**
 * f_div - divides the top two elements of the stack
 * @h: the head
 * @counter: the counter
 *
 * Return: Nothing
 */
void f_div(stack_t **h, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, res;

	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	res = tmp->next->n / tmp->n;
	tmp->next->n = res;
	*h = tmp->next;
	free(tmp);

}

/* TASK_8 */

/**
 * f_mul - multiplies the 2nd top element with the top element
 * of the stack
 * @h: the head;
 * @counter: the counter
 *
 * Return: Nothing
 */
void f_mul(stack_t **h, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, res;

	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	res = tmp->next->n * tmp->n;
	tmp->next->n = res;
	*h = tmp->next;
	free(tmp);
}

/* TASK_9 */

/**
 * f_mod - computes the rest of the division of the 2nd top element
 * by the top element of the stack
 * @h: the head
 * @counter: the counter
 *
 * Return: Nothing
 */
void f_mod(stack_t **h, unsigned int counter)
{
	stack_t *tmp;
	int len = 0, res;

	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	res = tmp->next->n % tmp->n;
	tmp->next->n = res;
	*h = tmp->next;
	free(tmp);
}
