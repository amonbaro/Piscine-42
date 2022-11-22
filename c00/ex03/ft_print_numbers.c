/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <amonbaro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/00/00 00:00:00 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/01 13:22:13 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
