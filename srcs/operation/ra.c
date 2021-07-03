/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:23:53 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:23:54 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	opr_ra(t_stack **a)
{
	t_stack	*last;
	t_stack	*first;

	last = (*a);
	while (last->next)
		last = last->next;
	first = (*a)->next;
	first->prev = NULL;
	(*a)->prev = last;
	(*a)->next = NULL;
	last->next = (*a);
	(*a) = first;
	write(1, "ra\n", 3);
}
