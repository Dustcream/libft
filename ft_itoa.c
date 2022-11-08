/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:38:37 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/08 16:39:21 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int	i;

	i = 1;
	if (n == 0)
		return (2);
	if (n < 0)
	{
		n = n / 10;
		i = i + 2;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			d;
	int			s;
	long long	nu;

	nu = n;
	d = digits(nu);
	s = 0;
	str = malloc(d);
	if (!str)
		return (NULL);
	str[--d] = '\0';
	if (nu < 0)
	{
		nu = nu * -1;
		s = 1;
	}
	while (--d >= s)
	{
		str[d] = nu % 10 + '0';
		nu = nu / 10;
	}
	if (s)
		str[0] = '-';
	return (str);
}
