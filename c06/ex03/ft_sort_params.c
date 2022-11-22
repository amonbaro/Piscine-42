/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:27:15 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/14 12:28:15 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
		}
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

void	ft_swap(char **argv, int a, int b)
{
	char	*stock;

	stock = argv[a];
	argv[a] = argv[b];
	argv[b] = stock;
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	while (a++, a < argc)
	{
		b = a;
		while (b++, b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				ft_swap(argv, a, b);
			}
		}
	}
	a = 0;
	while (a++, a < argc)
	{
		ft_putstr(argv[a]);
		write(1, "\n", 1);
	}
}
