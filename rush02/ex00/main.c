/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:32:17 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/18 19:42:26 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

#include"ft_putchar.c"
#include"error_cases.c"
#include"zero_twenty.c"
#include"twentyone_ninetynine.c"
#include"ft_argv_to_int.c"
#include"hundred.c"

int	inter_check(int value)
{
	if (value == -1)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	if (value == -2)
	{
		write(1, "fonctionnalite non prise en charge actuellement\n", 49);
		return (-1);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	unsigned int	value;
	int				fd;
	char			base[350];

	value = error_cases(argc, argv);
	if (inter_check(value) < 0)
		return (0);
	value = ft_argv_to_int(&argv[1][0]);
	if (value > 1000)
	{
		write(1, "fonctionnalite non prise en charge actuellement\n", 49);
		return (0);
	}
	fd = open("numbers.dict", O_RDWR);
	read(fd, base, sizeof(char) * 350);
	if (value >= 100 && value <= 999)
		ft_split_trois(value);
	else if (value > 20 && value < 100)
		ft_split(value);
	else if (value >= 0 && value <= 20)
		ft_chose_line(value, &base[0]);
	close(fd);
	return (0);
}
