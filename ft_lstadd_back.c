#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pl;

	pl = *lst;
	if (!pr)
	{
		*lst = new;
		return ;
	}
	while (pl -> next)
		pl = pl -> next;
	pl -> next = new;
}
