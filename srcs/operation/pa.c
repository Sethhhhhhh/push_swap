/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:23:41 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:23:42 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	opr_pa(t_stack **a, t_stack **b)
{
	if (*b)
	{
		stk_push_front(a, (*b)->data);
		stk_remove_front(b);
	}
	write(1, "pa\n", 3);
}
