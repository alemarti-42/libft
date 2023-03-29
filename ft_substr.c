/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <alemarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:36:13 by alemarti          #+#    #+#             */
/*   Updated: 2023/03/29 19:41:47 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	size = len;
	if (start > ft_strlen(s))
		size = 0;
	else if (ft_strlen(s) - start < size)
		size = ft_strlen(s) - start;
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	while (s[i] && i < start)
		i++;
	j--;
	i--;
	while (++j < size && s[++i])
		res[j] = s[i];
	res[j] = 0;
	return (res);
}
