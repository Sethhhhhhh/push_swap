/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:25:29 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:25:31 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	opr_sa(t_stack *a)
{
	int	tmp;

	if (a && a->next)
	{
		tmp = a->next->data;
		a->next->data = a->data;
		a->data = tmp;
	}
	write(1, "sa\n", 3);
}
