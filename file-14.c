#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @h: the head of the stack
 * @counter: the conuter
 *
 * Return: Nothing
 */
void f_rotr(stack_t **h, __attribute__((unused)) unsigned int counter)
{
	stack_t *cp;

	cp = *h;
	if (*h == NULL || (*h)->next == NULL)
		return;
	while (cp->next)
		cp = cp->next;
	cp->next = *h;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*h)->prev = cp;
	(*h) = cp;
}
