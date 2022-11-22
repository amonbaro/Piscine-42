/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:13:16 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/06 13:32:29 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < '0') || str[a] > '9')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*
#include<stdio.h>

int	main(void)
{
	char	vrai[] = "01234567899876543210";
	char	faux[] = "01A1233354gdf6879)f;";
	char	vide[] = "";

	printf("%s = %d\n", vrai, ft_str_is_numeric(&vrai[0]));
	printf("%s = %d\n", faux, ft_str_is_numeric(&faux[0]));
	printf("%s = %d\n", vide, ft_str_is_numeric(&vide[0]));
	return (0);
}
*/
