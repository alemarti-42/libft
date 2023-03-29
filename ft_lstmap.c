/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <alemarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 19:11:36 by alemarti          #+#    #+#             */
/*   Updated: 2023/03/29 19:31:58 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*swap;
	t_list	*aux;

	if (!lst || !f)
		return (NULL);
	res = NULL;
	while (lst)
	{
		aux = (f)(lst -> content);
		swap = ft_lstnew(aux);
		if (!swap)
		{
			(del)(aux);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, swap);
		lst = lst -> next;
		swap = swap -> next;
	}
	return (res);
}
