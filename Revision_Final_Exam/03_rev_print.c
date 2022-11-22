/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:25:41 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 11:49:45 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur] != '\0')
		compteur++;
	compteur--;
	return (compteur);
}

char	*ft_rev_print(char *str)
{
	int	a;

	a = ft_strlen(str);
	while (a >= 0)
	{
		write(1, &str[a], 1);
		a--;
	}
	write(1, "\n", 1);
	return (str);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	ft_rev_print(&argv[1][0]);
	return (0);
}
