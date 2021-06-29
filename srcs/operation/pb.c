#include "../../includes/push_swap.h"

void	opr_pb(t_stack **a, t_stack **b)
{
	if (*a)
	{
		stk_push_front(b, (*a)->data);
		stk_remove_front(a);
	}
	write(1, "pb\n", 3);
}
