/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data_by_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:26:25 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:26:26 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	stk_get_data_by_index(t_stack *stack, size_t index)
{
	size_t	i;

	i = 0;
	while (stack)
	{
		if (i >= index)
			return (stack->data);
		stack = stack->next;
		i++;
	}
	return (stack->data);
}
