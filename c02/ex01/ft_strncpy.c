/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:08:24 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/06 12:23:15 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((src[a] != '\0') && (a < n))
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	source[] = "Source string";
	char	destination[] = "Destination string";
	unsigned int	n;
	
	n = 18;	//Taille de destination, inutile si source +longue
	printf("AVANT\n");
	printf("Source : %s\n", source);
	printf("Destination : %s\n", destination);
	ft_strncpy(destination, source, n);
	printf("APRES\n");
	printf("Source : %s\n", source);
	printf("Destination : %s\n", destination);
	return (0);
}
*/
