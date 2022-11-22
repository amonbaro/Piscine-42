/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:10:19 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 14:18:47 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;
	int	aux[10];

	c = 0;
	index = size - 1;
	while (index >= 0)
	{
		aux[c] = tab[index];
		index--;
		c++;
	}
	c = 0;
	while (c < size)
	{
		tab[c] = aux[c];
		c++;
	}
}
/*
#include<stdio.h>

void	putarr(int arr[], int size)
{
	int	a;

	a = 0;
	while (a < (size - 1))
	{
		printf("%d, ", arr[a]);
		a++;
	}
	printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int	size;

	size = 4;
	putarr(tab, size);
	ft_rev_int_tab(tab, size);
	putarr(tab, size);
}
*/
