#include "../../includes/push_swap.h"

void	opr_rrr(t_stack **a, t_stack **b)
{
	opr_rra(a);
	opr_rrb(b);
	write(1, "rrr\n", 4);
}
