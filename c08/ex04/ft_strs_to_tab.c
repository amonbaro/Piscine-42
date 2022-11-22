/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:56:50 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 20:16:12 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
		a++;
	return (a);
}

void	strcopy(char *src, char *s1, char *s2)
{
	int		a;

	a = 0;
	while (src[a] != 0)
	{
		s1[a] = src[a];
		s2[a] = src[a];
		a++;
	}
	s1[a] = 0;
	s2[a] = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				a;
	int				b;
	unsigned long	ms;
	t_stock_str		*c;

	c = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (c == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = ft_strlen(av[a]);
		ms = sizeof(char) * (b + 1);
		c[a].size = b;
		c[a].str = (char *)malloc(ms);
		if (c[a].str == NULL)
			return (NULL);
		c[a].copy = (char *)malloc(ms);
		if (c[a].copy == NULL)
			return (NULL);
		strcopy(av[a], c[a].str, c[a].copy);
		a++;
	}
	c[a].str = 0;
	return (c);
}
