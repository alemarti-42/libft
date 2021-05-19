/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:38:28 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 14:52:06 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
 * Si el caracter es ASCII devuelve su valor ascii, si no, devuelve 0.
 */
int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (c);
	return (0);
}
