/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:38:37 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/05 23:08:02 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
    ft_abs(int nbr)
{
    return ((nbr < 0) ? -nbr : nbr);
}

static void
    ft_strrev(char *str)
{
    size_t  lenght;
    size_t  i;
    char    tmp;

    lenght  = ft_strlen(str);
    i = 0;
    while (i < lenght / 2)
    {
        tmp = str[i];
        str[i] = str[lenght - i - 1];
        str[lenght - i - 1] = tmp;
        i++;
    }
}

char    *ft_itoa(int n)
{
    char    *str;
    int     neg;
    size_t  lenght;

    neg = (n < 0);
    if (!(str = ft_calloc(11 + neg, sizeof(*str))))
        return(NULL);
    if (n == 0)
        str[0] = '0';
    lenght = 0;
    while (n != 0)
    {
        str[lenght++] = '0' + ft_abs(n % 10);
        n = (n / 10);
    }
    if (neg)
        str[lenght] = '-';
    ft_strrev(str);
    return (str);
}