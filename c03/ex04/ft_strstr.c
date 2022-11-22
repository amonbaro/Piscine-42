/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:46:29 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/07 18:11:49 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
		{
			if (to_find[b + 1] == '\0')
			{
				return (&str[a]);
			}
			b++;
		}
		a++;
	}
	return (0);
}
/*
#include<stdio.h>

int	main(void)
{
	char	source[] = "Ceci est une chaine de caractere !";
	char	a_trouver[] = "ca";

	printf("Chaine source = %s\n", source);
	printf("A trouver = %s\n", a_trouver);
	printf("%s\n", ft_strstr(source, a_trouver));
	return (0);
}
*/
