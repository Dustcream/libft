/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:38:44 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/02 14:37:07 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t len)
{
    unsigned char   *ptr_dest;
    unsigned char   *ptr_src;

    if ((!dst && !src) || !len)
        return (dst);
    ptr_dest = (unsigned char *)dst;
    ptr_src = (unsigned char *)src;
    while (len--)
        *ptr_dest++ = *ptr_src++;
    return (dst);
}