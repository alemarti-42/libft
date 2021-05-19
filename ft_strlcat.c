/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:09:26 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 13:22:52 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int j;
	int	dstlen;
	int	max;

	i = -1;
	j = -1;
	while (dst[++i])
		;
	dstlen = i;
	max = dstsize - dstlen - 1;
	while (++j < max && src[j])
	{
		dst[i] = src[j];
		i++;
	}
	dst[i] = 0;
	return (i + ft_strlen(src));
}
