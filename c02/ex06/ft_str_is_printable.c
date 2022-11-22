/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:41:19 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/06 13:33:16 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] > 126)
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
	char	vrai[] = "ABC4GejklmnoPqr)tuvw.z8XYZ";
	char	faux[] = "Ab6;)GHIJ \t (tab),1&s7XYZ";
	char	vide[] = "";

	printf("%s = %d\n", vrai, ft_str_is_printable(&vrai[0]));
	printf("%s = %d\n", faux, ft_str_is_printable(&faux[0]));
	printf("%s = %d\n", vide, ft_str_is_printable(&vide[0]));
	return (0);
}
*/
