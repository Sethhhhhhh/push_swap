/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:24:14 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:24:14 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	opr_rrb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;

	first = (*b);
	while (first->next)
		first = first->next;
	last = first->prev;
	last->next = NULL;
	first->prev = NULL;
	first->next = (*b);
	(*b)->prev = first;
	(*b) = first;
	write(1, "rrb\n", 4);
}
