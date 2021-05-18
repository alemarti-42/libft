/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:07:30 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/18 17:21:53 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
 * Busca la primera ocurrencia de c en los primeros n bytes de str.
 * Devuelve un puntero al byte encontrado o NULL si no se ha encontrado ninguno
 */
void	*ft_memchr(const void *str, int c, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
		if ((unsigned char)&str[i] == (unsigned char)c)
			return (&str[i]);
	return (NULL);
}
