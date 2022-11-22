/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:15:29 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/05 11:37:30 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include<stdio.h>

int	main(void)
{
	int	res_div;
	int	res_mod;

	ft_div_mod(30, 7, &res_div, &res_mod);

	printf("%d  /  ", res_div);
    printf("%d\n", res_mod);
	printf("\n");
}
*/
