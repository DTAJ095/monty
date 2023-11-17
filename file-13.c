#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @h: the head
 * @counter: the counter
 *
 * Return: Nothing
 */
void f_rotl(stack_t **h, __attribute((unused)) unsigned int counter)
{
	stack_t *tmp = *h, *aux;

	if (*h == NULL || (*h)->next == NULL)
		return;
	aux = (*h)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *h;
	(*h)->next = NULL;
	(*h)->prev = tmp;
	(*h) = aux;
}
