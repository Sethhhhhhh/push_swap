/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <yviavant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:25:45 by yviavant          #+#    #+#             */
/*   Updated: 2021/07/03 16:13:43 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
* Function: add
* -----------------
* desc:         converts the string to int and adds it to the stack a.
*
* a:            the sorting stack.
* str:          string to convert in int.
*
* return:       only 1.
*/

static int	add(t_stack **a, char *str)
{
	long	n;

	n = ft_atoi(str);
	if (n < -2147483648 || n > 2147483647)
		return (0);
	stk_push_back(a, (int)n);
	return (1);
}

/*
* Function: check_duplicate
* -----------------
* desc:         check the duplicate number in stack a.
*
* a:            the sorting stack.
*
* return:       1 if there are no duplicates, 0 if there is an error.
*/

static int	check_duplicate(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->data == tmp->data)
				return (0);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (1);
}

/*
* Function: check
* -----------------
* desc:         check if is an allowed character.
*
* str:          the string to get character.
* i:       		line index.
* j:       		character index.
*
* return:       1 if the character is allowed or 0 if not.
*/

static int	is_allowed_char(char **str, int i, int j)
{
	if (!str || !str[i])
		return (0);
	if (ft_isdigit(str[i][j]))
		return (1);
	if (ft_isspace(str[i][j]))
		return (1);
	if (str[i][j] == '-')
		if (((j - 1) >= 0 && ft_isspace(str[i][j - 1])) || j == 0)
			if ((j + 1) < (int)ft_strlen(str[i]) && ft_isdigit(str[i][j + 1]))
				return (1);
	return (0);
}

/*
* Function: check
* -----------------
* desc:         check args of av params in main function.
*
* a:            the sorting stack.
* str:          a string that contains one or more int.
*
* return:       count of int in string str.
*/

static int	check(t_stack **a, char *str)
{
	char	**split;
	size_t	i;
	size_t	j;

	split = ft_split(str, ' ');
	i = -1;
	while (split[++i])
	{
		j = -1;
		while (split[i][++j])
		{
			if (!is_allowed_char(split, i, j))
			{
				ft_free_array(split);
				return (0);
			}
		}
		if (!add(a, split[i]))
		{
			ft_free_array(split);
			return (0);
		}
	}
	ft_free_array(split);
	return (i);
}

/*
* Function: parse
* -----------------
* desc:         get arguments of the main function and add a 
*				list of int in stack a.
*
* a:            the sorting stack.
* av:         	table of string that contains the arguments of main.
* ac:         	arguments count of main function.
*
* return:       1 if there no errors or 0.
*/

int	parse(t_stack **a, char **av, int ac)
{
	int		i;
	size_t	ret;
	size_t	count;

	i = 1;
	count = 0;
	while (i < ac)
	{
		ret = check(a, av[i]);
		if (!ret)
			return (0);
		count += ret;
		i++;
	}
	if (!check_duplicate(*a))
		return (0);
	return (count);
}
