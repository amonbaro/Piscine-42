/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:46:11 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/06 13:32:00 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 'A') || (str[a] > 'Z' && str[a] < 'a') || (str[a] > 'z'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	vrai[] = "AbCdEfGhIjKlMnOpQrStUvWxYzZyXwVuTsR";
	char	faux[] = "AbCdEfGhIjKl)nOpQrStUvWx;zZyXwVuTsR";
	char	vide[] = "";

	printf("%s = %d\n", vrai, ft_str_is_alpha(&vrai[0]));
	printf("%s = %d\n", faux, ft_str_is_alpha(&faux[0]));
	printf("%s = %d\n", vide, ft_str_is_alpha(&vide[0]));
	return (0);
}
*/
