#include "../../includes/push_swap.h"

void	stk_push_front(t_stack **stack, int data)
{
	t_stack	*new;

	new = stk_new(data);
	if (!new)
		return ;
	if (!(*stack))
	{
		(*stack) = new;
		return ;
	}
	(*stack)->prev = new;
	new->next = (*stack);
	(*stack) = new;
}
