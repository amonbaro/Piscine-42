/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:54:23 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/11 17:33:48 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		compteur++;
	}
	return (compteur);
}
/*
#include<stdio.h>

int	main(void)
{
	char	chaine[] = "0123456789";
	
	printf("%s\n", chaine);
	printf("Nombre de caracteres : %d\n", ft_strlen(&chaine[0]));
}
*/
