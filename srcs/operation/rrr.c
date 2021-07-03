/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:24:22 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:25:24 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	opr_rrr(t_stack **a, t_stack **b)
{
	opr_rra(a);
	opr_rrb(b);
	write(1, "rrr\n", 4);
}
