/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:17:06 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/19 16:24:24 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
	{
		a++;
	}
	return (a);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = ft_strlen(dest);
	while (src[a] != 0)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = 0;
	return (dest);
}

int	get_size_of_future_str(int size, char **strs, char *sep)
{
	int	a;
	int	b;

	a = -1;
	b = 0;
	while (a++, a < size)
	{
		b += ft_strlen(strs[a]);
	}
	b += (size - 1) * ft_strlen(sep);
	return (b);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	char	*b;
	int		c;

	if (size <= 0)
	{
		b = (char *)malloc(0);
		return (b);
	}
	c = get_size_of_future_str(size, strs, sep);
	b = (char *)malloc(sizeof(char) * (c + 1));
	while (c-- >= 0)
		b[c] = '\0';
	a = -1;
	while (a++, a < size)
	{
		b = ft_strcat(b, strs[a]);
		if (a != size - 1)
			b = ft_strcat(b, sep);
	}
	return (b);
}
/*
#include<stdio.h>

int	main(void)
{
	char	**strs;

	strs = malloc(sizeof(char *) * 3);
	strs[0] = malloc(sizeof(char) * 6);
	strs[0] = "Hello";
	strs[1] = malloc(sizeof(char) * 6);
	strs[1] = "World";
	strs[2] = malloc(sizeof(char) * 3);
	strs[2] = "!!\n";
	printf("%s", ft_strjoin(3, strs, " - "));
}
*/
