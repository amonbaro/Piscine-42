/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:10:38 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/07 17:05:55 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	destination[20] = "Chaine une"; //Attention a la taille
	char	source[] = " + deux !";

	printf("%s\n", destination);
	printf("%s\n", source);
	ft_strcat(destination, source);
	printf("%s\n", destination);
	return (0);
}
*/
