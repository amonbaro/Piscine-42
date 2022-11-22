/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:21:36 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/04 15:16:14 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_putchar.c"

void	line(int x, char start, char mid, char end)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1)
		{
			ft_putchar(start);
		}
		else if (width == x)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(mid);
		}
		width++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	height;

	height = 1;
	if (x >= height && y >= height)
	{
		while (height <= y)
		{
			if (height == 1)
			{
				line(x, '/', '*', '\\');
			}
			else if (height == y)
			{
				line(x, '\\', '*', '/');
			}
			else
			{
				line(x, '*', ' ', '*');
			}
			height++;
		}
	}
}
