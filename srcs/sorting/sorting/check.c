#include "../../../includes/push_swap.h"

static size_t
	check_top(t_stack **a, t_stack **b, t_chunk *chunk, size_t count)
{
	while (*a && (*a)->next)
	{
		if (count >= chunk->size || (*a)->data >= chunk->value)
			break ;
		opr_pb(a, b);
		count++;
	}
	return (count);
}

static size_t
	check_bottom(t_stack **a, t_stack **b, t_chunk *chunk, size_t count)
{
	t_stack	*first;

	first = *a;
	while ((*a))
		*a = (*a)->next;
	while (*a && (*a)->prev)
	{
		if (count >= chunk->size || (*a)->data >= chunk->value)
			break ;
		opr_rra(a);
		opr_pb(a, b);
		count++;
	}
	*a = first;
	return (count);
}

static size_t
	pull_down(t_stack **a, t_stack **b, t_chunk *chunk, size_t count)
{
	while ((*a) && count < chunk->size)
	{
		if ((*a)->data < chunk->value)
		{
			opr_pb(a, b);
			count++;
		}
		else
			opr_ra(a);
	}
	return (count);
}

size_t	check_stack(t_stack **a, t_stack **b, t_chunk *chunk)
{
	size_t	count;

	count = 0;
	count = check_top(a, b, chunk, count);
	count = check_bottom(a, b, chunk, count);
	count = pull_down(a, b, chunk, count);
	return (count);
}
