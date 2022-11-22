/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:36:59 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 20:48:43 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_nbr(int a)
{
	if (a > 9)
		ft_print_nbr(a / 10);
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
			ft_print_nbr(a);
		a++;
		write(1, "\n", 1);
	}
	return (0);
}
