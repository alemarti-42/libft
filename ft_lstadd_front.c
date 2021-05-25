/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:50:32 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/25 17:06:30 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO Añadir banner

#include"libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;		//¿?¿?
	new -> next = *alst;
	*alst = new;
}

