/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:39:03 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/02 14:37:07 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    ch;

    ch = (char) c;
    while (*s)
    {
        if (*s == ch)
            return ((char *)s);
        s++;
    }
    if (*s == ch)
        return ((char *) s);
    return (0);
}