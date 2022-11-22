/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:06:07 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/18 19:42:24 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_argv_to_int(char *argv)
{
	unsigned int	value;
	int				a;

	value = 0;
	a = 0;
	while (argv[a] >= '0' && argv[a] <= '9')
	{
		value = value * 10 + argv[a] - '0';
		a++;
	}
	return (value);
}
