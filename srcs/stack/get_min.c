#include "../../includes/push_swap.h"

int	stk_get_min(t_stack *st)
{
	int	min;

	if (!st)
		return (-2147483648);
	min = st->data;
	st = st->next;
	while (st)
	{
		if (st->data < min)
			min = st->data;
		st = st->next;
	}
	return (min);
}
