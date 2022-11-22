/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:48:57 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/05 11:24:10 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	stock;

	stock = *a;
	*a = *b;
	*b = stock;
}
/*
#include<stdio.h>

int	main(void)
{
	int	a_value;
	int	b_value;

	a_value = 42;
	b_value = 30;

	printf("%d\n", a_value);
	printf("%d\n", b_value);

	ft_swap(&a_value, &b_value);
	
	printf("%d\n", a_value);
	printf("%d\n", b_value);
}
*/
