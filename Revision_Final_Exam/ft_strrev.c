/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:28:32 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 19:36:26 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strrev(char *str)
{
	int	a;
	int	len;
	char stock;

	a = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (len > a)
	{
		stock = str[a];
		str[a] = str[len];
		str[len] = stock;
		a++;
		len--;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[1]);
	printf("%s\n", ft_strrev(argv[1]));
	return (0);
}
