/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:23:48 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:23:49 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	opr_pb(t_stack **a, t_stack **b)
{
	if (*a)
	{
		stk_push_front(b, (*a)->data);
		stk_remove_front(a);
	}
	write(1, "pb\n", 3);
}
