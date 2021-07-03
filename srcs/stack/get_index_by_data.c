/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_by_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:26:30 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:26:30 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
* Function: stk_get_index_by_data
* -----------------
* desc:     get index of the corresponding data.
*
* stack:    the stack in which to look for the data.
* data:     the data we are looking for.
*
* return:   index of the corresponding data.
*/

int	stk_get_index_by_data(t_stack *stack, int data)
{
	int	index;

	if (!stack)
		return (-1);
	index = 0;
	while (stack)
	{
		if (stack->data == data)
			return (index);
		stack = stack->next;
		index++;
	}
	return (index);
}
