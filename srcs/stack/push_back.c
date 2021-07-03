/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:26:43 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:26:44 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stk_push_back(t_stack **stack, int data)
{
	t_stack	*tmp;
	t_stack	*new;

	new = stk_new(data);
	if (!new)
		return ;
	tmp = (*stack);
	if (!(*stack))
	{
		(*stack) = new;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
}
