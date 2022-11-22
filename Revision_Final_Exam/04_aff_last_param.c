/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_aff_last_param.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:49:51 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 11:55:43 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = argc - 1;
	b = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	while (argv[a][b] != '\0')
	{
		write(1, &argv[a][b], 1);
		b++;
	}
	write(1, "\n", 1);
	return (0);
}
