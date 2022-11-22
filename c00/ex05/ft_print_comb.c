/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <amonbaro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:10:00 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/01 16:53:40 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_3num(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7' || d != '8' || u != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	centaine;
	char	dizaine;
	char	unite;

	centaine = '0';
	while (centaine <= '7')
	{
		dizaine = centaine + 1;
		while (dizaine <= '8')
		{
			unite = dizaine + 1;
			while (unite <= '9')
			{
				ft_3num(centaine, dizaine, unite);
				unite++;
			}
			dizaine++;
		}
		centaine++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
