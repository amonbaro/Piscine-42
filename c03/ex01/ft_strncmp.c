/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:54:12 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/07 18:09:45 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;
	int				size;

	a = 0;
	size = 0;
	while ((a < n) && !size && (s1[a] != '\0') && (s2[a] != '\0'))
	{
		size = (unsigned char)s1[a] - (unsigned char)s2[a];
		a++;
	}
	if (a < n && !size && (s1[a] == '\0' || s2[a] == '\0'))
	{
		size = (unsigned char)s1[a] - (unsigned char)s2[a];
	}
	return (size);
}
/*
#include<stdio.h>

int	main(void)
{
	char	ch1[] = "ABCdef";
	char	ch2[] = "ABDdee";

	printf("%s\n", ch1);
	printf("%s\n", ch2);
	printf("%d\n", ft_strncmp(&ch1[0], &ch2[0], 3));
}
*/
