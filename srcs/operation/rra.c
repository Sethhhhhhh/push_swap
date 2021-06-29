#include "../../includes/push_swap.h"

void	opr_rra(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	first = (*a);
	while (first->next)
		first = first->next;
	last = first->prev;
	last->next = NULL;
	first->prev = NULL;
	first->next = (*a);
	(*a)->prev = first;
	(*a) = first;
	write(1, "rra\n", 4);
}
