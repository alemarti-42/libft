/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:02:27 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 16:14:03 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

char	*ft_strdup(const char *s1)
{
	void	*res;

	res = malloc(ft_strlen(s1));
	ft_strlcpy(res, s1, ft_strlen(res));
	return (res);
}
