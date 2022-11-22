/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:04:53 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/22 18:57:44 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_doubles2(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	check_doubles1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *str1, char *str2)
{
	int	a;

	a = 0;
	while (str1[a] != '\0')
	{
		if (check_doubles1(str1, str1[a], a) == 1)
			write(1, &str1[a], 1);
		a++;
	}
	a = 0;
	while (str2[a] != '\0')
	{
		if (check_doubles2(str1, str2[a]) == 1)
		{
			if (check_doubles1(str2, str2[a], a) == 1)
				write(1, &str2[a], 1);
		}
		a++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
