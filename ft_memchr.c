/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:38:39 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/02 14:37:07 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *str;
    unsigned char   ch;

    str = (unsigned char *)s;
    ch = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (*str == ch)
            return (str);
        str++;
        i++;
    }
    return(NULL);
}