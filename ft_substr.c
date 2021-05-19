/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:36:13 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 19:44:26 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;
	
	res = (char *)malloc(len);
	i = start - 1;
	while (s[++i] && len-- > 0 )
	{
		res[i] = s[i];
	}
	return (res);
}
