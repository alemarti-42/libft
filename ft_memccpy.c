/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:23:14 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/18 14:33:40 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		*(char *)&dst[i] = *(char *)&src[i];
		if (*(char *)&src[i] == (char)c)
			return (&dst[i + 1]);
	}
	return (NULL);
}
