#include "../../../includes/push_swap.h"

static int	push_bottom_values(t_stack **a, t_stack **b,
	t_chunk *chunk, size_t count_push)
{
	size_t	new_chunk_size;
	size_t	count_ra;

	count_ra = 0;
	new_chunk_size = 0;
	while (count_push)
	{
		if ((*a)->data < chunk->value)
		{
			opr_pb(a, b);
			chunk->size--;
			new_chunk_size++;
			count_push--;
		}
		else
		{
			opr_ra(a);
			count_ra++;
		}
	}
	while (count_ra--)
		opr_rra(a);
	return (new_chunk_size);
}

static void	push_chunk_to_b(t_stack **a, t_stack **b, t_chunk *chunk)
{
	size_t	new_chunk_size;
	size_t	count_push;
	t_chunk	*tmp;

	new_chunk_size = 0;
	count_push = 0;
	if (chunk->size == 2 && !is_sorted(*a, 2))
		opr_sa(*a);
	else if (chunk->size > 2)
	{
		chunk->value = get_midpoint(*a, chunk->size);
		count_push = chunk->size / 2;
		new_chunk_size = push_bottom_values(a, b, chunk, count_push);
		push_chunk_to_b(a, b, chunk);
		chunk = create_chunk(*b, chunk, new_chunk_size * 2);
		push_chunk_to_a(a, b, chunk);
		tmp = chunk;
		chunk = chunk->prev;
		free(tmp);
	}
}

static int	push_top_values(t_stack **a, t_stack **b, t_chunk *chunk)
{
	size_t	count_rb;
	size_t	count_push;
	size_t	new_chunk_size;

	count_rb = 0;
	new_chunk_size = 0;
	chunk->value = get_midpoint(*b, chunk->size);
	count_push = chunk->size - (chunk->size / 2 + 1);
	new_chunk_size = count_push;
	while (count_push)
	{
		if ((*b)->data <= chunk->value && ++count_rb)
			opr_rb(b);
		else
		{
			opr_pa(a, b);
			count_push--;
			chunk->size--;
		}
	}
	if (chunk->size >= 3 && chunk->size <= 6 && !is_sorted(*a, 2))
		opr_sa(*a);
	while (count_rb--)
		opr_rrb(b);
	return (new_chunk_size);
}

static void
	not_sorted(t_stack **a, t_stack **b, t_chunk *chunk, size_t new_chunk_size)
{
	t_chunk	*tmp;

	chunk = create_chunk(*a, chunk, new_chunk_size * 2);
	tmp = chunk;
	push_chunk_to_b(a, b, chunk);
	chunk = chunk->prev;
	free(tmp);
}

void	push_chunk_to_a(t_stack **a, t_stack **b, t_chunk *chunk)
{	
	size_t	new_chunk_size;

	if (chunk->size == 1)
		opr_pa(a, b);
	else if (chunk->size == 2)
	{
		if (!is_reverse_sorted(*b, 2))
			opr_sb(*b);
		while (chunk->size)
		{
			opr_pa(a, b);
			chunk->size--;
		}
	}
	else if (chunk->size > 2)
	{
		new_chunk_size = push_top_values(a, b, chunk);
		if (!is_sorted(*a, new_chunk_size))
			not_sorted(a, b, chunk, new_chunk_size);
		push_chunk_to_a(a, b, chunk);
	}
}
