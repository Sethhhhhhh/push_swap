/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:26:33 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:26:34 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	stk_get_max(t_stack *st)
{
	int	max;

	if (!st)
		return (2147483647);
	max = st->data;
	st = st->next;
	while (st)
	{
		if (st->data > max)
			max = st->data;
		st = st->next;
	}
	return (max);
}
