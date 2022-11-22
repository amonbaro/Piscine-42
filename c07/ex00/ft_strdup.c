/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:17:37 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 16:11:55 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		a;

	ptr = (char *)malloc(ft_strlen(src) + 1);
	a = 0;
	while (src[a] != '\0')
	{
		ptr[a] = src[a];
		a++;
	}
	ptr[a] = 0;
	return (ptr);
}
/*
#include<stdio.h>

int	main(void)
{
	char	*str = "Petit test";
	char	*copy;
   
	copy = ft_strdup(str);

	printf("%s\n", copy);
	return (0);
}
*/
