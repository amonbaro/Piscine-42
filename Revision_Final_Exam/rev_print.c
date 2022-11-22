/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:04:56 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/23 09:09:23 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_rev_print(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	a--;
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
