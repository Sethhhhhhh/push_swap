#include "../../includes/push_swap.h"

void	opr_sa(t_stack *a)
{
	int	tmp;

	if (a && a->next)
	{
		tmp = a->next->data;
		a->next->data = a->data;
		a->data = tmp;
	}
	write(1, "sa\n", 3);
}
