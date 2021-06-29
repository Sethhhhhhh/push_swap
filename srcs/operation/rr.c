#include "../../includes/push_swap.h"

void	opr_rr(t_stack **a, t_stack **b)
{
	opr_ra(a);
	opr_rb(b);
	write(1, "rr\n", 3);
}
