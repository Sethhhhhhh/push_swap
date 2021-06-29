#include "../../../includes/push_swap.h"

void	free_stack_chunk(t_stack **a, t_stack **b)
{
	stk_clear(a);
	stk_clear(b);
}

int	is_sorted(t_stack *stack, size_t count)
{
	int	old;

	old = stack->data;
	stack = stack->next;
	while (stack && count)
	{
		if (stack->data < old)
			return (0);
		old = stack->data;
		stack = stack->next;
		count--;
	}
	return (1);
}

int	is_reverse_sorted(t_stack *stack, size_t count)
{
	int	old;

	if (!stack)
		return (1);
	old = stack->data;
	stack = stack->next;
	while (stack && count)
	{
		if (stack->data > old)
			return (0);
		old = stack->data;
		stack = stack->next;
		count--;
	}
	return (1);
}

void	sorting(t_stack **a, t_stack **b, size_t count)
{
	t_chunk	*chunk;
	t_chunk	*tmp;

	chunk = NULL;
	while (*a && !is_sorted(*a, count))
	{
		if (count == 2 && !is_sorted(*a, count))
		{
			opr_sa(*a);
			break ;
		}
		chunk = create_chunk(*a, chunk, count);
		count -= check_stack(a, b, chunk);
	}
	while (*b && chunk)
	{
		push_chunk_to_a(a, b, chunk);
		tmp = chunk;
		chunk = chunk->prev;
		free(tmp);
	}
}
