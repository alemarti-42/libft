/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:51:06 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/25 17:06:11 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO Añadir banner

#include"libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*res;
	
	res = malloc(sizeof(res));
	if (!res)
		return (NULL);
	res -> content = content;
	res -> next = NULL;
	return (res);
}
