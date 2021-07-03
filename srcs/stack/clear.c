/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:26:20 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:26:20 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stk_clear(t_stack **stack)
{
	t_stack	*tmp;

	tmp = NULL;
	while ((*stack))
	{
		tmp = (*stack)->next;
		free((*stack));
		(*stack) = tmp;
	}
	(*stack) = NULL;
}
