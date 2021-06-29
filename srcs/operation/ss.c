#include "../../includes/push_swap.h"

void	opr_ss(t_stack *a, t_stack *b)
{
	opr_sa(a);
	opr_sb(b);
	write(1, "ss\n", 3);
}
