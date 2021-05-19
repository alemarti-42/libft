/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 20:55:49 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/19 21:54:17 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*recursive(unsigned int n, int size, char *str, int sign)
{
	char	nb;

	nb = n % 10;
	if (n > 10)
	{
		str = recursive(n / 10, size++, str++, sign);
	}
	else
		str = (char *)malloc(size);				// quizas ¿? size + 1 ¿?
	return (nb);

}
char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*str;

	size = -1;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		size++;
	}
	recursive(n / 10, ++size, str, sign);	
	str = (char *)malloc(size);
}

