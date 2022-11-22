/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:07:01 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/13 17:21:00 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = 1;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			write(1, &argv[a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
