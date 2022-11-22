/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:09:25 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 14:09:48 by amonbaro         ###   ########.fr       */
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
