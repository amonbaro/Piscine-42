/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:24:11 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/06 13:32:46 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'a' || str[a] > 'z')
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
	char	vrai[] = "abcdefghijklmnopqrstuvwxyz";
	char	faux[] = "abc4GejklMndfgoPqr)tuvw.z8";
	char	vide[] = "";

	printf("%s = %d\n", vrai, ft_str_is_lowercase(&vrai[0]));
	printf("%s = %d\n", faux, ft_str_is_lowercase(&faux[0]));
	printf("%s = %d\n", vide, ft_str_is_lowercase(&vide[0]));
	return (0);
}
*/
