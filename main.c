/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:29:46 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/17 22:31:26 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<unistd.h>
#include<stddef.h>
#include "libft.h"

void	test_memset(void);
void	test_bzero(void);
void	print_int_array(int arr[], int n);
void	print_char_array(char arr[], int n);

int	main(void)
{
	test_memset();
	test_bzero();

	return (0);
}

void	test_memset(void)
{
	char	str1[20] = "____________________",
		   	str2[20] = "____________________";
	int		n[] = {0, 3, 5, 8};
	int		i;
	int		x;
	int offset;

	offset = 15;
	x = 41;
	i = -1;
	while (++i < 4)
	{
		puts("\n\n==============================================\n");
		printf("%i caracteres \n%i offset\n", n[i], offset);
		print_char_array(str1, 20);
		puts("\n");
		print_char_array(str2, 20);
		puts("\n\n\n");
		memset(str2 + offset, x, n[i]);
		ft_memset(str1 + offset, x, n[i]);
		print_char_array(str1, 20);
		puts("\n");
		print_char_array(str2, 20);
		x++;
		offset -= 3;
	}
	puts("\n\n##############################################\n");
}

void	test_bzero(void)
{
	char	str1[20] = "____________________",
		   	str2[20] = "____________________";
	int		n[] = {0, 3, 5, 8};
	int		i;
	int		x;
	int offset;

	offset = 15;
	x = 41;
	i = -1;
	while (++i < 4)
	{
		puts("\n\n==============================================\n");
		printf("%i caracteres \n%i offset\n", n[i], offset);
		print_char_array(str1, 20);
		puts("\n");
		print_char_array(str2, 20);
		puts("\n\n\n");
		bzero(str2 + offset, n[i]);
		ft_bzero(str1 + offset, n[i]);
		print_char_array(str1, 20);
		puts("\n");
		print_char_array(str2, 20);
		puts("\n");
		x++;
		offset -= 3;
	}
	puts("\n\n##############################################\n");
}

void	print_int_array(int arr[], int n)
{
	int	i;

	i = -1;
	while (++i < n)
		printf("%d ", arr[i]);
}

void	print_char_array(char arr[], int n)
{
	int	i;
	
	i = -1;
	while (++i < n)
		printf("%c ", arr[i]);
}
