/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:24:05 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:24:07 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	opr_rr(t_stack **a, t_stack **b)
{
	opr_ra(a);
	opr_rb(b);
	write(1, "rr\n", 3);
}
