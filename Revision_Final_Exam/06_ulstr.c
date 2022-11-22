/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_ulstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:45:21 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 13:54:15 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	a;

	a = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][a] != '\0')
	{
		if (argv[1][a] >= 'a' && argv[1][a] <= 'z')
			argv[1][a] -= 'a' - 'A';
		else if (argv[1][a] >= 'A' && argv[1][a] <= 'Z')
			argv[1][a] += 'a' - 'A';
		write(1, &argv[1][a], 1);
		a++;
	}
	write(1, "\n", 1);
}
