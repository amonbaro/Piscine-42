/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_twenty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:25:39 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/18 19:44:11 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_chose_line(unsigned int value, char *line)
{
	unsigned int	a;
	unsigned int	x;

	a = 0;
	x = 0;
	while (a < value)
	{
		while (line[x] != '\n')
			x++;
		while (line[x] < 'a' || line[x] > 'z')
			x++;
		a++;
	}
	while (line[x] < 'a' || line[x] > 'z')
		x++;
	while (line[x] >= 'a' && line[x] <= 'z')
	{
		ft_putchar(line[x]);
		x++;
	}
	ft_putchar('\n');
}
