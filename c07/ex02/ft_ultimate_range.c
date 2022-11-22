/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:43:38 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 19:46:28 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
	{
		return (-1);
	}
	a = 0;
	while (min < max)
	{
		(*range)[a] = min;
		a++;
		min++;
	}
	return (a);
}
/*
#include<stdio.h>

int	main(void)
{
	int	*range;
	int	size;
	int	a;

	size = ft_ultimate_range(&range, 8, 19);
	a = 0;
	while (a < size)
	{
		printf("%d = %d\n", a, range[a]);
		a++;
	}
	return (0);
}
*/
