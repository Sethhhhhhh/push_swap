#include "../../includes/push_swap.h"

void	opr_pa(t_stack **a, t_stack **b)
{
	if (*b)
	{
		stk_push_front(a, (*b)->data);
		stk_remove_front(b);
	}
	write(1, "pa\n", 3);
}
