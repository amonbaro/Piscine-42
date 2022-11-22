/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:36:00 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/06 13:33:01 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'A' || str[a] > 'Z')
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
	char	vrai[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	faux[] = "ABC4GejklMnoPqr)turw.z8XYZ";
	char	vide[] = "";

	printf("%s = %d\n", vrai, ft_str_is_uppercase(&vrai[0]));
	printf("%s = %d\n", faux, ft_str_is_uppercase(&faux[0]));
	printf("%s = %d\n", vide, ft_str_is_uppercase(&vide[0]));
	return (0);
}
*/
