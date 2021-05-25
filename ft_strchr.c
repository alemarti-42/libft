/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:23:35 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/25 20:58:36 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	if (!s)
		return (NULL);
	while (s[++i] != (char)c)
		if (s[i] == 0)
			return (NULL);
	return ((char *)&s[i]);
}
