/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:24:10 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:24:11 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	opr_rra(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	first = (*a);
	while (first->next)
		first = first->next;
	last = first->prev;
	last->next = NULL;
	first->prev = NULL;
	first->next = (*a);
	(*a)->prev = first;
	(*a) = first;
	write(1, "rra\n", 4);
}
