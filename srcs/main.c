/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:27:00 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 16:16:31 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (0);
}

static int	sorted(t_stack **a, t_stack **b)
{
	free_stack_chunk(a, b);
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	size_t	count;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	count = parse(&a, av, ac);
	if (!count)
	{
		free_stack_chunk(&a, &b);
		return (error());
	}
	else if (is_sorted(a, count))
		return (sorted(&a, &b));
	else if (count > 1 && count <= 3)
		sorting_three(&a, count);
	else if (count > 3 && count <= 5)
		sorting_five(&a, &b, count);
	else if (count > 5 && count != 1)
		sorting(&a, &b, count);
	free_stack_chunk(&a, &b);
	return (0);
}
