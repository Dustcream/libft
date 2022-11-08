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