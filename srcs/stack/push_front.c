/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_front.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:26:48 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:26:49 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stk_push_front(t_stack **stack, int data)
{
	t_stack	*new;

	new = stk_new(data);
	if (!new)
		return ;
	if (!(*stack))
	{
		(*stack) = new;
		return ;
	}
	(*stack)->prev = new;
	new->next = (*stack);
	(*stack) = new;
}
