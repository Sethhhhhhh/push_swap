#include "../../includes/push_swap.h"

/*
* Function: sorting_three
* -----------------
* desc:         sorting the stack a in ascending order.
*
* a:            the sorting stack.
* b:            another stack.
* count:        the count of element in stack a.
*
* return:       NULL.
*/

void	sorting_three(t_stack **a, size_t count)
{
	if (count == 2)
	{
		if ((*a)->data > (*a)->next->data)
			opr_sa(*a);
		return ;
	}
	if ((*a)->data < (*a)->next->data
		&& (*a)->next->data < (*a)->next->next->data)
		return ;
	if (((*a)->data < (*a)->next->next->data)
		|| ((*a)->data > (*a)->next->data
			&& (*a)->next->data > (*a)->next->next->data))
		opr_sa(*a);
	if ((*a)->data > (*a)->next->next->data
		&& (*a)->next->next->data > (*a)->next->data)
		opr_ra(a);
	else if ((*a)->next->next->data < (*a)->data)
		opr_rra(a);
	return ;
}
