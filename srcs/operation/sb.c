/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:25:35 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:25:35 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	opr_sb(t_stack *b)
{
	int	tmp;

	if (b && b->next)
	{
		tmp = b->next->data;
		b->next->data = b->data;
		b->data = tmp;
	}
	write(1, "sb\n", 3);
}
