/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:41:39 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/21 21:33:43 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)&haystack[0]);
	while (haystack[i] && i < len)
	{
		while (needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == 0)
				return ((char *)&haystack[i]);
		}
		len--;
		i++;
	}
	return (0);
}
