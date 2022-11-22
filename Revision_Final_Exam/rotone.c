/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:36:42 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 20:11:38 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char *argv[])
{
	int		a;
	char	*chaine;

	a = 0;
	chaine = argv[1];
	if (argc == 2)
	{
		while(*chaine)
		{
			if ((*chaine >= 'a' && *chaine <= 'y') || (*chaine >= 'A' && *chaine <= 'Y'))
				ft_putchar(*chaine + 1);
			else if (*chaine == 'z' || *chaine == 'Z')
				ft_putchar(*chaine - 25);
			else
				ft_putchar(*chaine);
			++chaine;
		}
	}
	write(1, "\n", 1);
	return (0);
}
