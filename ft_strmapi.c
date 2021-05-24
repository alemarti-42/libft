/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:29:05 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/24 15:35:40 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (f*)(unsigned int, char))
{
	int		len;
	int		i;
	char	*res;

	len = ft_strlen (s);
	i  = 0;
	res = (char *)malloc(len);
	if (!s || !res)
		return (NULL);
	while (s[i])
	{
		res = f(i, s[i]);
		i++;
	}
	return (res);
}
