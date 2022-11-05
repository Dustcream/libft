/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:04:27 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/05 16:38:16 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
        unsigned char   *char_e;
        size_t             i;

        i = 0;
        char_e = (unsigned char *) b;
        while (i < len)
            char_e[i++] = c;
        return (b); 
}