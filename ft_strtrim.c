/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:52:30 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 20:18:36 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		len;
	int		in_set;
	int		increment;
	char	*res;

	i = -1;
	j = -1;
	len = ft_strlen(s1);
	in_set = 0;
	increment = 1;
	res = NULL;
	while (s1[i += increment])
	{
		while (set[++j])
		{
			if (s1[i] == set[j])
			{
				in_set = 1;
				break;
			}
		}
		res = s1[i];
		j = -1;
		if (in_set == 0)
		{
			if (increment == -1)
				break;
			increment = -1;
		}
	}
	return (res);
	/*
	
	i = len;
	while (s1[--i])
	{
		while (set[++j])
		{
			if (s1[i] == set[j])
			{
				in_set = 1;
				break;
			}
		}
		j = -1;
		if (in_set == 0)
			break;
	}
	*/
}