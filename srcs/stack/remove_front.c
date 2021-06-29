#include "../../includes/push_swap.h"
void	stk_remove_front(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack)->next;
	free((*stack));
	if (tmp)
		tmp->prev = NULL;
	(*stack) = tmp;
}
