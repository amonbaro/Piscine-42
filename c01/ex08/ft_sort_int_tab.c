/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:19:24 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 14:28:04 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	stock;

	stock = *a;
	*a = *b;
	*b = stock;
}

void	quicksort(int arr[], int d, int e)
{
	int	a;
	int	b;
	int	c;

	if (d >= e)
		return ;
	a = arr[e];
	b = d;
	c = d;
	while (c <= e)
	{
		if (arr[c] <= a)
		{
			ft_swap(&arr[b], &arr[c]);
			b++;
		}
		c++;
	}
	quicksort(arr, d, b - 2);
	quicksort(arr, b, e);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	b = size - 1;
	quicksort(tab, a, b);
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
	int	tab[] = {10, 7, 8, 9, 1, 5};
	int	size;

	size = 6;
	printf("Original: ");
	putarr(tab, size);
	ft_sort_int_tab(tab, size);
	printf("Modified: ");
	putarr(tab, size);
}
*/
