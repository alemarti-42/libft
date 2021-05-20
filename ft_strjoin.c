/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:45:03 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/20 15:34:32 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	int		size;
	char	*res;
	int		i;
	int		j;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *)malloc(size);
	i = -1;
	j = 0;
	while(s1[++i])
	{
		res[j] = s1[i];
		j++;
	}
	i = -1;
	while (s2[++i])
	{
		res[j] = s2[i];
		j++;
	}
	res[j] = 0;
	return (res);
}
