/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:26:36 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:26:37 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	stk_get_min(t_stack *st)
{
	int	min;

	if (!st)
		return (-2147483648);
	min = st->data;
	st = st->next;
	while (st)
	{
		if (st->data < min)
			min = st->data;
		st = st->next;
	}
	return (min);
}
