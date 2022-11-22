/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:26:27 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/06 12:22:54 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include<stdio.h>

int	main(void)
{
	char	source[] = "Chaine source";
	char	destination[] = "Chaine qui va disparaitre";

	printf("%s\n", source);
	printf("%s\n", destination);
	ft_strcpy(&destination[0], &source[0]);
	printf("%s\n", source);
	printf("%s\n", destination);
}
*/
