/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 20:19:09 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/23 22:09:21 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int		count_words(const char *s, char c);
static int		count_letters(const char *s, char c);

char	**ft_split(const char *s, char c)
{
	char	**res;
	//char	*aux;
	int		i;
	int		j;
	int		len;

	res = (char **)malloc(count_words(s, c));
	if (!res)
		return (NULL);
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] && s[i] != c)
		{
			len = count_letters(&s[i], c);
			res[j] = (char *)malloc(len + 1);
			ft_strlcpy(res[j], &s[i], len + 1); 
			//res[j] = ft_substr(&s[i], 0, len);
			j++;
			//i += len;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (res);
}

static int		count_words(const char *s, char c)
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

static int		count_letters(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}
