#include "monty.h"

/**
 * add_node - add node to the head stack
 * @h: the head of the stack
 * @n: the new value
 *
 * Return: Nothing
 */

void add_node(stack_t **h, int n)
{
	stack_t *new_node, *tmp;

	tmp = *h;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (tmp)
		tmp->prev = new_node;
	new_node->n = n;
	new_node->next = *h;
	new_node->prev = NULL;
	*h = new_node;
}

/**
 * add_queue - add node to the tail of the stack
 * @h: the head of the stack
 * @n : the new value
 *
 * Return: Nothing
 */

void add_queue(stack_t **h, int n)
{
	stack_t *new_node, *tmp;

	tmp = *h;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmp->next = new_node;
		new_node->prev = tmp;
	}
}

/**
 * free_stack - free doubly linked list
 * @head: the first node of stack
 *
 * Return: Nothing
 */

void free_stack(stack_t *h)
{
	stack_t *tmp;

	tmp = h;
	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}
}
