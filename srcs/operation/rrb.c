#include "../../includes/push_swap.h"

void	opr_rrb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;

	first = (*b);
	while (first->next)
		first = first->next;
	last = first->prev;
	last->next = NULL;
	first->prev = NULL;
	first->next = (*b);
	(*b)->prev = first;
	(*b) = first;
	write(1, "rrb\n", 4);
}
