/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_ft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:25:08 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 17:04:45 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(const char *str)
{
	int	a;
	int	is_negative;
	int	final;

	a = 0;
	is_negative = 1;
	final = 0;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == 32)
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			is_negative *= -1;
		a++;
	}
	while (str[a] != '\0' && str[a] >= '0' && str[a] <= '9')
	{
		final = final * 10 + str[a] - '0';
		a++;
	}
	return (final * is_negative);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
