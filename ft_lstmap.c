/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 19:11:36 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/25 19:21:07 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*swap;
	t_list	*i;

	if (!lst || !f)
		return (NULL);
	swap = NULL;
	while (lst)
	{
		if (!(i = ft_lstnew((f)(lst->content))))
		{
			ft_lstclear(&swap, del);
			return (NULL);
		}
		ft_lstadd_back(&swap, i);
		lst = lst->next;
		i = i->next;
	}
	return (swap);
}
