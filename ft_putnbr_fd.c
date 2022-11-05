/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:38:55 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/05 23:21:05 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == - 2147483648)
        ft_putstr_fd("-2147483648", fd);
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(-n, fd);
    }
    else if(n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(n % 10 + '0', fd);
    }
    else
    {
        ft_putchar_fd(n + '0', fd);
    }
}