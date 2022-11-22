/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:42:48 by abarras           #+#    #+#             */
/*   Updated: 2022/09/18 17:57:12 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	final_check(int lon, int res, int res2);
int	ft_atoi(char *str);
int	ft_atoi2(int res, int res2, int i, char *str);

int	error_cases(int argc, char **argv)
{
	int	i;
	int	final;

	i = 0;
	if (argc == 2)
	{
		final = ft_atoi(argv[1]);
		if (final < 0)
			return (-1);
		return (1);
	}
	else if (argc == 3)
	{
		return (-2);
	}
	return (-1);
}

// --- Final Check --- //

int	final_check(int lon, int res, int res2)
{
	if (lon > 10)
		return (-1);
	if (lon < 10)
		return (1);
	if (lon == 10)
	{
		if (res == 42949)
		{
			if (res2 < 67296)
				return (1);
			else
				return (-1);
		}
		if (res < 42949)
			return (1);
	}
	return (-1);
}

// --- Plus Vraiment Atoi --- //

int	ft_atoi(char *str)
{
	int	res;
	int	res2;
	int	i;

	res = 0;
	res2 = 0;
	i = 0;
	return (ft_atoi2(res, res2, i, str));
}

int	ft_atoi2(int res, int res2, int i, char *str)
{
	int	lon;

	lon = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9' && lon >= 0 && lon <= 4)
		{
			res = res * 10 + str[i] - '0';
			i++;
			lon++;
		}
		while (str[i] >= '0' && str[i] <= '9' && lon >= 5)
		{
			res2 = res2 * 10 + str[i] - '0';
			i++;
			lon++;
		}
		return (final_check(lon, res, res2));
	}
	return (-1);
}
/*
// --- MAIN_TEST ---//

int main(int argc, char **argv)
{
	printf("%i", error_cases(argc, argv));
	return (0);
//4294967295
}*/
