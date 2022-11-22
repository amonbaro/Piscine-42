/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_fizzbuzz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:07:32 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 11:25:36 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_number(int a)
{
	if (a > 9)
		ft_print_number(a / 10);
	write(1, &"0123456789"[a % 10], 1);
}

int	main(void)
{
	int	a;

	a = 1;
	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (a % 3 == 0)
			write(1, "fizz", 4);
		else if (a % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_print_number(a);
		write(1, "\n", 1);
		a++;
	}
}
