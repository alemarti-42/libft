/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:41:39 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 16:30:26 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (&haystack[++i])
	{
		while (needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == 0)
				return ((char *)&haystack[i]);
		}
	}
	j = 0;
	return (NULL);
}
