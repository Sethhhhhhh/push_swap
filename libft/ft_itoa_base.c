/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yviavant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 13:24:55 by yviavant          #+#    #+#             */
/*   Updated: 2020/01/28 21:33:10 by yviavant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n, int base)
{
	long	i;

	i = 0;
	while (n)
	{
		n /= base;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(long n, int base, int maj)
{
	char	*str;
	int		len;
	long	digit;
	char	letter;

	if (!n)
		return (ft_strdup("0"));
	letter = 'a';
	if (maj)
		letter = 'A';
	len = ft_len(n, base);
	str = (char *)malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (n)
	{
		digit = n % base;
		n /= base;
		if ((digit < 0xA))
			str[len--] = ('0' + digit);
		else
			str[len--] = (letter + digit - 0xA);
	}
	return (str);
}
