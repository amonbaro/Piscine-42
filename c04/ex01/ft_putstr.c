/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:13:28 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/11 17:34:27 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}
/*
#include<stdio.h>

int	main(void)
{
	char	chaine[] = "Chaine de caracteres !";

	printf("%s\n", chaine);
	ft_putstr(&chaine[0]);
}
*/
