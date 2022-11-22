/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:32:13 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/07 15:58:20 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < nb)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*
#include<stdio.h>

int	main(void)
{
	char			destination[20] = "ABCD";
	char			source[] = "sdifuhs";
	unsigned int	nombre = 2;

	printf("%s\n", destination);
	printf("%s\n", source);
	ft_strncat(destination, source, nombre);
	printf("%s\n", destination);
	return (0);
}
*/
