/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:15:02 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/14 12:20:50 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	a;

	(void) argc;
	a = 0;
	while (argv[0][a] != 0)
	{
		write(1, &argv[0][a], 1);
		a++;
	}
	write(1, "\n", 1);
	return (0);
}
