/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:59:59 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 16:53:56 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

void	*calloc(size_t count, size_t size)
{
	int		i;
	int		sizebytes;
	void	*res;

	i = -1;
	sizebytes = size * count;
	res = malloc(sizebytes);
	while (++i < sizebytes)
		res[i] = 0;
	return (res);
}
