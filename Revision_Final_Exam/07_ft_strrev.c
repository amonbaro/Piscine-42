/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_ft_strrev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:54:47 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 16:25:02 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strrev(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	while (str[b] != '\0')
		b++;
	b--;
	while (b > a)
	{
		c = str[a];
		str[a] = str[b];
		str[b] = c;
		a++;
		b--;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[1]);
	ft_strrev(&argv[1][0]);
	printf("%s\n", argv[1]);
}
