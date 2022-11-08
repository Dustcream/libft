/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:39:50 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/08 17:19:08 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
		len = len + start;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start < len)
		sub = malloc(sizeof(char) * (len - start + 1));
	else
		sub = malloc(sizeof(char));
	if (!sub)
		return (NULL);
	i = start;
	while (i < len && s[i])
	{
		sub[i - start] = s[i];
		i++;
	}
	sub[i - start] = '\0';
	return (sub);
}