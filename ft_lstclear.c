/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:47:26 by dmuller           #+#    #+#             */
/*   Updated: 2022/11/10 13:47:28 by dmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*tmp;

	if (lst && del)
	{
		curr = *lst;
		while (curr)
		{
			tmp = curr->next;
			ft_lstdelone(curr, del);
			curr = tmp;
		}
		*lst = NULL;
	}
}
