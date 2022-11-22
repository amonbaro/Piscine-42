/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:09:44 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/23 09:13:20 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = 0;
	b = argc - 1;
	if (argc > 1)
	{
		while (argv[b][a] != '\0')
		{
			write(1, &argv[b][a], 1);
			a++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
