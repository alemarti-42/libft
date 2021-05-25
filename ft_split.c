/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 20:19:09 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/25 17:41:38 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int		count_words(const char *s, char c);

char	**ft_split(const char *s, char c)
{
	char		**res;
	size_t		i;
	size_t		j;
	int			count;

	i = 0;
	j = 0;
	count = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < ft_strlen(s) && count < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j] && (i + j) < ft_strlen(s))
			j++;
		if ((i + j) > ft_strlen(s))
			break ;
		res[count] = (char *)malloc(j + 1);
		if (!res[count])
			return (NULL);
		res[count] = ft_substr(s, i, j);
		i += j ;
		count++;
	}
	res[count] = NULL;
	return (res);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	is_space;
	int	i;

	count = 0;
	is_space = 1;
	i = 0;
	while (s[i])
	{
		if (is_space == 0 && s[i] == c)
			is_space = 1;
		if (is_space == 1 && s[i] != c)
		{
			is_space = 0;
			count++;
		}
		i++;
	}
	return (count);
}
