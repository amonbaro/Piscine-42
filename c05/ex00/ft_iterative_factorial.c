/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:41:49 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 12:40:28 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	resultat;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	a = 0;
	resultat = 1;
	while (a++ < nb)
	{
		resultat *= a;
	}
	return (resultat);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d\n\n", ft_iterative_factorial(5));
	return (0);
}
*/
