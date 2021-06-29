#include "../../includes/push_swap.h"

t_stack	*stk_new(int data)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	ft_bzero(new, sizeof(t_stack));
	if (!new)
		return (NULL);
	ft_bzero(new, sizeof(t_stack));
	new->data = data;
	return (new);
}
