/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:16:22 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/05 11:35:42 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stock;

	if (b != 0)
	{
		stock = *a / *b;
		*b = *a % *b;
		*a = stock;
	}
}
/*
#include<stdio.h>

int	main(void)
{
	int	value_a;
	int	value_b;

	value_a = 38;
	value_b = 6;
	printf("%d\n", value_a);
	printf("%d\n", value_b);
	ft_ultimate_div_mod(&value_a, &value_b);
	printf("%d\n", value_a);
	printf("%d\n", value_b);
}
*/
