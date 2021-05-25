//TODO Añadir banner

#include"libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*res;
	
	res = malloc(sizeof(res));
	if (!res)
		return (NULL);
	lst -> content = content;
	ls -> next = NULL;
	return (res);
}
