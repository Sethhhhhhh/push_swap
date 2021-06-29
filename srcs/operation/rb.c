#include "../../includes/push_swap.h"

void	opr_rb(t_stack **b)
{
	t_stack	*last;
	t_stack	*first;

	last = (*b);
	while (last->next)
		last = last->next;
	first = (*b)->next;
	first->prev = NULL;
	(*b)->prev = last;
	(*b)->next = NULL;
	last->next = (*b);
	(*b) = first;
	write(1, "rb\n", 3);
}
