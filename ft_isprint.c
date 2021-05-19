/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:38:28 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 14:51:42 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
 * Si el caracter es imprimible devuelve su valor ascii, si no, devuelve 0.
 */
int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (c);
	return (0);
}
