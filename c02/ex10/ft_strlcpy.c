/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:57:29 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 15:01:37 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
		a++;
	if (size != 0)
	{
		while (src[b] != '\0' && b < (size - 1))
		{
			dest[b] = src[b];
			b++;
		}
		dest[b] = '\0';
	}
	return (a);
}
/*
#include<stdio.h>

int	main(void)
{
	char			src[] = "Source";
	char			dest[] = "";
	unsigned int	n;

	n = 4;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);
	n = ft_strlcpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, n);
	return (0);
}
*/
