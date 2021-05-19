/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:38:28 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 14:41:58 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
 * Si el caracter es alfabetico devuelve su valor ascii, si no, devuelve 0.
 */
int	ft_isalpha(int c)
{
	if ((c > 101 && c < 132) || (c > 141 && c < 172))
		return (c);
	return (0);
}
