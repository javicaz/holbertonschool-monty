#include "monty.h"

/**
 * push - pushes an element to the stack.
 *
 * @stack: pointer to the double linked list (stack)
 * @line_number: Line number of the monty file
 */
void push(stack_t **stack, unsigned int line_number)
{
	/*insert_dnodeint_at_index(stack, line_number, value);*/
	stack_t *node = NULL;
	(void) line_number;
	if (stack == NULL)
		return;

	node = malloc(sizeof(stack_t)); /*error Malloc*/
	/**
	 * if n is not an integer or if there is no argument given to push
	 * print the error message
	 */

	if (!node)
	{
		fprintf(stderr, "Error: Can't malloc\n");
		return;
	}
	node->n = value;
	node->next = *stack;
	node->prev = NULL;
	if (*stack)
		(*stack)->prev = node;
	*stack = node;
}
/**
 * pall - Pprints all the values on the stack,
 * starting from the top of the stack.
 *
 * @stack: pointer to the double linked list (stack)
 * @line_number: Line number of the monty file
 */
void pall(stack_t **stack, _uu_ unsigned int line_number)
{
	/*If the stack is empty, don’t print anything*/
	if (stack == NULL)
	{
		return;
	}
	if (*stack)
	{
		printf("%d\n", (*stack)->n);
		pall(&((*stack)->next), line_number);
	}
}
