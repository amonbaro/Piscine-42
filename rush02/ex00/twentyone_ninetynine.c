/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twentyone_ninetynine.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:46:38 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/18 19:44:28 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_chose_double_line(unsigned int value, char *line)
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
}

void	ft_print_dizaine_unite(int dizaine, int unite)
{
	char	base[350];

	dizaine += 18;
	ft_chose_double_line(dizaine, &base[0]);
	if (unite != 0)
	{
		ft_putchar(' ');
		ft_chose_double_line(unite, &base[0]);
	}
	ft_putchar('\n');
}

void	ft_split(unsigned int value)
{
	int	dizaine;
	int	unite;

	dizaine = value / 10;
	unite = value % 10;
	ft_print_dizaine_unite(dizaine, unite);
}
