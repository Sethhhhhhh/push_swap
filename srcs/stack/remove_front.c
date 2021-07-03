/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:26:53 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:26:54 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stk_remove_front(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack)->next;
	free((*stack));
	if (tmp)
		tmp->prev = NULL;
	(*stack) = tmp;
}
