/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:39:41 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/10 15:03:46 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (char) c;
	i = 0;
	while (s[i])
		i++;
	if (s[i] == ch)
		return ((char *) &s[i]);
	while (i > 0)
		if (s[--i] == ch)
			return ((char *) &s[i]);
	return (0);
}
