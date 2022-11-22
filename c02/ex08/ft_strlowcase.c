/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:22:02 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/06 13:40:32 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
		{
			str[a] += 'a' - 'A';
		}
		a++;
	}
	return (str);
}
/*
#include<stdio.h>

int	main(void)
{
	char	maj[] = "METTRE EN minuscules TOUT CE TEXT.";
	char	vide[] = "";

	printf("%s\n", maj);
	printf("%s\n", ft_strlowcase(&maj[0]));
	printf("%s\n", ft_strlowcase(&vide[0]));
}
*/
