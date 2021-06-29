#include "../../includes/push_swap.h"

int	stk_get_max(t_stack *st)
{
	int	max;

	if (!st)
		return (2147483647);
	max = st->data;
	st = st->next;
	while (st)
	{
		if (st->data > max)
			max = st->data;
		st = st->next;
	}
	return (max);
}
