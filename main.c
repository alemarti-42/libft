/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:29:46 by alemarti          #+#    #+#             */
/*   Updated: 2021/05/18 18:40:40 by alemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<unistd.h>
#include<stddef.h>
#include "libft.h"

void	test_memset(void *str1, void *str2);
void	test_bzero(void *str1, void *str2);
void	test_memcpy(void *str1, void *str2, void *str3, void *str4);
void	test_memccpy(void *str1, void *str2, void *str3, void *str4);
void	test_memmove(void *str1, void *str2, void *str3, void *str4);
void	test_memchr(void *str1, void *str2, void *str3, void *str4);
void	print_int_array(int arr[], int n);
void	print_char_array(char arr[], int n);
void	reset_strs(char *str1, char *str2, char *str3, char *str4);

int	main(void)
{
	char	*str1, *str2, *str3, *str4;
	int		i;

	str1 = malloc(20);
	str2 = malloc(20);
	str3 = malloc(20);
	str4 = malloc(20);
	
	reset_strs(str1, str2, str3, str4);
	test_memset(str1, str2);
	test_bzero(str1, str2);
	test_memcpy(str1, str2, str3, str4);
	reset_strs(str1, str2, str3, str4);
	test_memccpy(str1, str2, str3, str4);
	reset_strs(str1, str2, str3, str4);
	test_memmove(str1, str2, str3, str4);
	reset_strs(str1, str2, str3, str4);
	test_memchr(str1, str2, str3, str4);

//	system("leaks test.out");
	return (0);
}
void	reset_strs(char *str1, char *str2, char *str3, char *str4)
{
	int	i;

	i = -1;
	while (++i < 20)
	{
		str1[i] = '-';
		str2[i] = '-';
		str3[i] = '-';
		str4[i] = i + 'a';
	}
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

void	test_memset(void *str1, void *str2)
{
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

void	test_bzero(void *str1, void *str2)
{
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

void	test_memcpy(void *str1, void *str2, void *str3, void *str4)
{
	int		i;
	int		offset;
	int		x;
	int		n[] = {0, 3, 5, 8};

	offset = 15;
	x = 41;
	i = -1;
	puts("\n\n################### ft_memcpy ###################\n");
	print_char_array(str1, 20);
	puts("\t");
	print_char_array(str2, 20);
	puts("\n");
	print_char_array(str4, 20);
	puts("\n\n\n");
	while (++i < 4)
	{
		puts("\n\n======================================== char\n");
		printf("%i caracteres \n%i offset\n", n[i], offset);
		memcpy(str1 + offset, str4 , n[i]);
		ft_memcpy(str2 + offset, str4 , n[i]);
		print_char_array(str1, 20);
		puts("\t");
		print_char_array(str2, 20);
		puts("\n");
		print_char_array(str4, 20);
		puts("\n");
		x++;
		offset -= 4;
	}
	puts("\n\n##############################################\n");
}


void	test_memccpy(void *str1, void *str2, void *str3, void *str4)
{
	int		i;
	int		offset;
	int		x;
	int		n[] = {0, 3, 5, 8};

	offset = 15;
	x = 41;
	i = -1;
	puts("\n\n################### ft_memccpy ###################\n");
	print_char_array(str1, 20);
	puts("\t");
	print_char_array(str2, 20);
	puts("\n");
	print_char_array(str4, 20);
	puts("\n\n\n");
	while (++i < 4)
	{
		//reset_strs(str1, str2, str3, str4);
		puts("\n\n======================================== char\n");
		printf("%i caracteres \n%i offset\nc= %c\n\n", n[i], offset, 107);
		printf("\n(sys): %s\n", memccpy(str1 + offset, str4 + 5, 107, n[i]));
		printf("\n(usr): %s\n", ft_memccpy(str2 + offset, str4 + 5, 107, n[i]));
		puts("\nSRC: ");
		print_char_array(str4, 20);
		puts("\n\nSYS: ");
		print_char_array(str1, 20);
		puts("\nUSR: ");
		print_char_array(str2, 20);
		puts("\n");
		x++;
		offset -= 4;
	}
	puts("\n\n##############################################\n");
}

void	test_memmove(void *str1, void *str2, void *str3, void *str4)
{
	int		i;
	int		offset;
	int		x;
	int		n[] = {0, 3, 5, 8};

	offset = 0;
	x = 41;
	i = -1;
	puts("\n\n################### ft_memmove ###################\n");
	print_char_array(str1, 20);
	puts("\t");
	print_char_array(str2, 20);
	puts("\n");
	print_char_array(str4, 20);
	puts("\n\n\n");
	while (++i < 4)
	{
		ft_memcpy(str1, str4, 20);
		ft_memcpy(str2, str4, 20);
		//reset_strs(str1, str2, str3, str4);
		puts("\n\n======================================== char\n");
		printf("%i caracteres \n%i offset\nc= %c\n\n", n[i], offset, 107);
		printf("\n(sys): %s\n", memmove(str1 , str1 + offset,20));
		printf("\n(usr): %s\n", ft_memmove(str2 , str2 + offset, 20));
		puts("\nSRC: ");
		print_char_array(str4, 20);
		puts("\n\nSYS: ");
		print_char_array(str1, 20);
		puts("\nUSR: ");
		print_char_array(str2, 20);
		puts("\n");
		x++;
		offset += 2;
	}
	puts("\n\n##############################################\n");
}

void	test_memchr(void *str1, void *str2, void *str3, void *str4)
{
	int		i;
	int		offset;
	int		x;
	int		n[] = {0, 3, 5, 8};

	offset = 0;
	x = 41;
	i = -1;
	puts("\n\n################### ft_memchr ###################\n");
	print_char_array(str1, 20);
	puts("\t");
	print_char_array(str2, 20);
	puts("\n");
	print_char_array(str4, 20);
	puts("\n\n\n");
	while (++i < 4)
	{
		ft_memcpy(str1, str4, 20);
		ft_memcpy(str2, str4, 20);
		//reset_strs(str1, str2, str3, str4);
		puts("\n\n======================================== char\n");
		printf("%i caracteres \n%i offset\nc= %c\n\n", n[i], offset, 107);
		puts("\nSRC: ");
		print_char_array(str4, 20);
		printf("\n\n(sys): %s", memchr(str4 , 'f' , 15));
		puts("\nSYS: ");
		print_char_array(str1, 20);
		printf("\n\n(usr): %s", ft_memchr(str4 , 'f' , 15));
		puts("\nUSR: ");
		print_char_array(str2, 20);
		puts("\n");
		x++;
		offset += 2;
	}
	puts("\n\n##############################################\n");
}
