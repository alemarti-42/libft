/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:43:02 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 15:19:56 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
 * memcmp compara los primeros n bytes de las areas de memoria str1 y str2.
 * 		Si	str1 > str2 	->	>0
 * 		Si	str1 < str2		->	<0
 * 		Si	str1 == str2	->	=0
 */
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		if (*(unsigned char *)&str1[i] != *(unsigned char *)&str2[i])
			return (*(unsigned char *)&str1[i] - *(unsigned char *)&str2[i]);
	}
	return (0);
}
