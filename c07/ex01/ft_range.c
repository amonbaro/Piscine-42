/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:34:27 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 16:12:26 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	static int	*tab;
	int			a;
	int			b;

	if (min >= max)
	{
		return (0);
	}
	tab = (int *)malloc((max - min) * sizeof(int));
	b = min;
	a = 0;
	while (b < max)
	{
		tab[a] = b;
		a++;
		b++;
	}
	return (tab);
}
/*
#include<stdio.h>

int	main(void)
{
	int	a;

	int	*range = ft_range(0, 21);
	a = 0;
	while (a < 21)
	{
		printf("%d = %d\n", a, range[a]);
		a++;
	}
	return (0);
}
*/
