/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:09:17 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/08 17:09:28 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	size;

	size = ft_strlen(src) + 1;
	dest = malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest = ft_memcpy(dest, src, size);
	return (dest);
}
