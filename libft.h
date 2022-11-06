/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:08:22 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/05 23:28:21 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
    #define LIBFT_H 

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>

    int ft_atoi(const char *str);
    int ft_isalnum(int c);
    int ft_isaplha(int c);
    int ft_isascii(int c);
    int ft_isdigit(int c);
    int ft_isprint(int c);
    int ft_tolower(int c);
    int ft_toupper(int c);

    size_t ft_strlen(const char *s);

    void    *ft_memchr(const void *s, int c, size_t n);
    void    *ft_memset(void *b, int c, size_t len);
    void    ft_bzero(void *s, size_t n);
    void    *ft_calloc(size_t count, size_t size);
    void    ft_putchar_fd(char c, int fd);
    void    ft_putendl_fd(char *s, int fd);
    void    ft_putnbr_fd(int n, int fd);
    void    ft_putstr_fd(char *s, int fd);

    char    *ft_itoa(int n);

#endif