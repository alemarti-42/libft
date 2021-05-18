/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:51:50 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/18 16:57:54 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
 * Misma funcionalidad que ft_memcpy pero puede ser usado en direcciones de 
 * memoria que se superponen.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*swap;

	swap = malloc(len);
	ft_memcpy(swap, src, len);
	ft_memcpy(dst, swap, len);
	free(swap);
	return (dst);
}
