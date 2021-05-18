/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:29:46 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/18 13:08:12 by alemarti         ###   ########.fr       */
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
void	test_memcpy(void);
void	print_int_array(int arr[], int n);
void	print_char_array(char arr[], int n);

int	main(void)
{
	test_memset();
	test_bzero();
	test_memcpy();

	return (0);
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

void	test_memset(void)
{
	char	str1[20] = "____________________",
		   	str2[20] = "____________________";
	int		n[] = {0, 3, 5, 5};
	int		i;
	int		x;
	int offset;

	offset = 15;
	x = 41;
	i = -1;
	puts("\n\n################# ft_memset ####################\n");
	print_char_array(str1, 20);
	puts("\n");
	print_char_array(str2, 20);
	while (++i < 4)
	{
		puts("\n\n========================================= char\n");
		printf("%i caracteres \n%i offset\n", n[i], offset);
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
	puts("\n\n################### ft_bzero ###################\n");
	print_char_array(str1, 20);
	puts("\n");
	print_char_array(str2, 20);
	puts("\n\n\n");
	while (++i < 4)
	{
		puts("\n\n======================================== char\n");
		printf("%i caracteres \n%i offset\n", n[i], offset);
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

void	test_memcpy(void)
{
	char	*str1, *str2, *str3, *str4;
	int		i;
	int		offset;
	int		x;
	int		n[] = {0, 3, 5, 8};

	str1 = malloc(20);
	str2 = malloc(20);
	str3 = malloc(20);
	str4 = malloc(20);
	i = -1;
	while (++i < 20)
	{
		str1[i] = '-';
		str2[i] = i + 'a';
		str3[i] = '-';
		str4[i] = i + 'a';
	}
	offset = 15;
	x = 41;
	i = -1;
	puts("\n\n################### ft_memcpy ###################\n");
	print_char_array(str1, 20);
	puts("\t");
	print_char_array(str2, 20);
	puts("\n");
	print_char_array(str3, 20);
	puts("\t");
	print_char_array(str4, 20);
	puts("\n\n\n");
	while (++i < 4)
	{
		puts("\n\n======================================== char\n");
		printf("%i caracteres \n%i offset\n", n[i], offset);
		memcpy(str1 + offset, str2 + offset, n[i]);
		ft_memcpy(str3 + offset, str4 + offset, n[i]);
		print_char_array(str1, 20);
		puts("\t");
		print_char_array(str2, 20);
		puts("\n");
		print_char_array(str3, 20);
		puts("\t");
		print_char_array(str4, 20);
		puts("\n");
		x++;
		offset -= 3;
	}
	puts("\n\n##############################################\n");
}
