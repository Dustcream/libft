/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:39:35 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/10 15:11:53 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *to_find, size_t size)
{
	size_t	a;
	size_t	b;
	char	*str;

	str = (char *) haystack;
	a = 0;
	b = 0;
	if (to_find[a] == '\0')
		return (str);
	if (!size)
		return (0);
	while (str[a] && size)
	{
		while (str[a + b] == to_find[b] && str[a + b] && a + b < size)
			b++;
		if (!to_find[b])
			return (str + a);
		a++;
		b = 0;
	}
	return (0);
}
