#include "../../includes/push_swap.h"

void	stk_clear(t_stack **stack)
{
	t_stack	*tmp;

	tmp = NULL;
	while ((*stack))
	{
		tmp = (*stack)->next;
		free((*stack));
		(*stack) = tmp;
	}
	(*stack) = NULL;
}
