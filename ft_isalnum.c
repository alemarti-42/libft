/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:38:28 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 15:27:40 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
 * Si el caracter es alfanumerico devuelve su valor ascii, si no, devuelve 0.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) + ft_isdigit(c));
}
