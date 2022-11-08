/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:04:24 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/08 15:24:24 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*char_s;
	size_t			i;

	i = 0;
	char_s = (unsigned char *) s;
	while (i < n)
		char_s[i++] = 0;
}
