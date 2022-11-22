/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:10:45 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 20:16:02 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str  *ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	char		**strs;
	int			cur;
	t_stock_str	*result_arr = ft_strs_to_tab(3, strs);
	
	cur = 0;
	strs = (char **)malloc(sizeof(char *) * 3);
	strs[0] = (char *)malloc(sizeof(char) * 6);
	strs[0] = "Hello";
	strs[1] = (char *)malloc(sizeof(char) * 6);
	strs[1] = "World";
	strs[2] = (char *)malloc(sizeof(char) * 3);
	strs[2] = "!!";
	while (cur < 4)
	{
		printf("%d => size : %d, str : %s, copy : %s\n", cur, result_arr[cur].size, result_arr[cur].str, result_arr[cur].copy);
		cur++;
	}
}
