/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:55:35 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 14:05:51 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnb(int vet[], int n)
{
	int	a;

	a = 0;
	while (a < n)
	{
		ft_putchar(vet[a] + '0');
		a++;
	}
}

int	ft_get_index(int combn[], int n)
{
	int	a;
	int	b;

	a = 0;
	b = 10 - n;
	while (a < n)
	{
		if (combn[a] == b)
			return (a - 1);
		if (a == (n - 1) && combn[a] < b)
			return (a);
		a++;
		b++;
	}
	return (-1);
}

void	ft_increment(int nb[], int n, int index)
{
	int	a;

	a = index + 1;
	nb[index]++;
	while (a <= n)
	{
		nb[a] = nb[a - 1] + 1;
		a++;
	}
}

void	ft_print_combn(int n)
{
	int	combn[10];
	int	a;
	int	b;

	if (n >= 10 || n <= 0)
		return ;
	else
	{
		a = 0;
		while (a < n)
		{
			combn[a] = a;
			a++;
		}
		while (ft_get_index(combn, n) != -1)
		{
			b = ft_get_index(combn, n);
			ft_putnb(combn, n);
			ft_increment(combn, n, b);
			write(1, ", ", 2);
		}
		ft_putnb(combn, n);
	}
}
/*
int	main(void)
{
	ft_print_combn(2);
	return (0);
}
*/
