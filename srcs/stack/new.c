/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:26:40 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 14:26:40 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*stk_new(int data)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	ft_bzero(new, sizeof(t_stack));
	if (!new)
		return (NULL);
	ft_bzero(new, sizeof(t_stack));
	new->data = data;
	return (new);
}
