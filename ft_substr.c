/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:36:13 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/22 19:18:51 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	res = malloc(len + 1);
	if (!res || !s)
		return (res);
	while (s[i] && i < start)
	{
		i++;
	}
	while (j < len && s[i])
	{
		res[j] = s[i];
		j++;
		i++;
	}
	res[j] = 0;
	return (res);
}
