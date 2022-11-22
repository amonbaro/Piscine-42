/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:22:52 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 12:40:55 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	a = nb;
	while (power-- > 1)
	{
		nb *= a;
	}
	return (nb);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d\n\n", ft_iterative_power(3, 3));
	return (0);
}
*/
