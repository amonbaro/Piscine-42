/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:52:10 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/11 18:59:08 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	nb;
	int	is_negative;

	a = 0;
	nb = 0;
	is_negative = 1;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == ' ')
	{
		a++;
	}
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
		{
			is_negative *= -1;
		}
		a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		nb = nb * 10 + str[a] - '0';
		a++;
	}
	return (nb * is_negative);
}
/*
#include<stdio.h>

int	main(int argc, char *argv[])
{
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
*/
