/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:04:20 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/06 13:27:22 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a') && (str[a] <= 'z'))
		{
			str[a] -= 'a' - 'A';
		}
		a++;
	}
	return (str);
}
/*
#include<stdio.h>

int	main(void)
{
	char	min[] = "mettre en MAJUSCULE tout ce text.";
	char	vide[] = "";

	printf("%s\n\n", min);
	printf("%s\n", ft_strupcase(&min[0]));
	printf("%s\n", ft_strupcase(&vide[0]));
}
*/
