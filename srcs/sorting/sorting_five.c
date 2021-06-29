#include "../../includes/push_swap.h"

/*
* Function: get_max
* -----------------
* desc:		get the maximal value of the stack st.
*
* st:		stack the stack in which to look for the int max.
*
* return:	the int max of the stack st.
*/

static int	get_max(t_stack *st, int amax, int value, int max)
{
	int		current;

	if (!st)
		return (0);
	current = max;
	while (st)
	{
		if (amax)
		{
			if (st->data > value && st->data <= current)
				current = st->data;
		}
		else
			if (st->data > current)
				current = st->data;
		st = st->next;
	}
	return (current);
}

/*
* Function: stack_alignment
* -----------------
* desc:		align the stack so that the first link has the minimum data.
*
* st:		the stack to align.
* min:		the minimum data of the stack st.
* count:	the count of the stack st. 
*
* return:	NULL.
*/

static void	stack_alignment(t_stack **st, int min, size_t count)
{
	size_t	index;

	if (!st || !(*st))
		return ;
	index = stk_get_index_by_data((*st), min);
	while ((*st) && (*st)->data != min)
	{
		if (index < ((count / 2) + (count % 2)))
			opr_ra(st);
		else
			opr_rra(st);
	}
}

/*
* Function: align_to_insert
* -----------------
* desc:		align the stack a to insert value of stack b.
*
* st:		the stack to align.
* amax:		the maximum value after the value to insert.
* index:	the index of amax value in stack st. 
* count:	the count of element in stack st.
*
* return:	NULL.
*/

static void	align_to_insert(t_stack **st, int amax, size_t index, size_t count)
{
	while ((*st) && (*st)->data != amax)
	{
		if (index < ((count / 2) + (count % 2)))
			opr_ra(st);
		else
			opr_rra(st);
	}
}

/*
* Function: init
* -----------------
* desc:		initialization for sorting five.
*
* a:		the sorting stack.
* b:		another stack.
* count:	the count of element in stack a.
*
* return:	NULL.
*/

static void	init(t_stack **a, t_stack **b, size_t count)
{
	opr_pb(a, b);
	if (count == 5)
		opr_pb(a, b);
	sorting_three(a, count);
}

/*
* Function: sorting_five
* -----------------
* desc:		sorting the stack a in ascending order.
*
* a:		the sorting stack.
* b:		another stack.
* count:	the count of element in stack a.
*
* return:	NULL.
*/

void	sorting_five(t_stack **a, t_stack **b, size_t count)
{
	int		max;
	int		min;
	int		amax;
	int		index;

	init(a, b, count);
	min = (*a)->data;
	max = get_max(*a, 0, 0, 0);
	while ((*b))
	{
		if ((*b)->data < min)
			min = (*b)->data;
		amax = get_max(*a, 1, (*b)->data, max);
		index = stk_get_index_by_data((*a), amax);
		if ((*b)->data > max)
		{
			amax = min;
			index = stk_get_index_by_data((*a), max);
			max = (*b)->data;
		}
		align_to_insert(a, amax, index, count);
		opr_pa(a, b);
	}
	stack_alignment(a, min, count);
}
