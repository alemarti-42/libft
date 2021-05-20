/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:32:04 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/20 16:42:19 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copia n bytes de una direccion de memoria en otra. Si las direcciones de
 * memoria se superponen se comportará de manera indefinida.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	while (++i < n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
