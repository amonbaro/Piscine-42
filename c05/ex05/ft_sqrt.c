/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:29:16 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 12:41:34 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	while (a * a < nb && a < nb / 2)
	{
		a++;
	}
	if (a * a == nb)
	{
		return (a);
	}
	return (0);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d\n\n", ft_sqrt(9));
	return (0);
}
*/
