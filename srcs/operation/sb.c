#include "../../includes/push_swap.h"

void	opr_sb(t_stack *b)
{
	int	tmp;

	if (b && b->next)
	{
		tmp = b->next->data;
		b->next->data = b->data;
		b->data = tmp;
	}
	write(1, "sb\n", 3);
}
