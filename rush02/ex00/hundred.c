/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:19:58 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/18 19:45:04 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_chose_triple_line(unsigned int value, char *line)
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
	while (line[x] < 'a' | line[x] > 'z')
		x++;
	while (line [x] >= 'a' && line[x] <= 'z')
	{
		ft_putchar(line[x]);
		x++;
	}
}

void	ft_print_dizaine_only(int value, char *line)
{
	int	a;
	int	x;

	a = 0;
	x = 0;
	ft_putchar(' ');
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

int	ft_print_cdu(int dizaine, int unite)
{
	char	base[350];
	int		chiffre;

	chiffre = 0;
	if (((dizaine * 10) + unite) < 20)
	{
		chiffre = (dizaine * 10) + unite;
		ft_print_dizaine_only(chiffre, &base[0]);
		return (0);
	}
	dizaine += 18;
	if (dizaine != 18)
	{
		ft_putchar(' ');
		ft_chose_triple_line(dizaine, &base[0]);
	}
	if (unite != 0)
	{
		ft_putchar(' ');
		ft_chose_triple_line(unite, &base[0]);
	}
	ft_putchar('\n');
	return (0);
}

int	ft_print_centaine(int centaine, int dizaine, int unite)
{
	char	base[350];
	int		hundred;

	hundred = 28;
	if (centaine == 1 && dizaine == 18 && unite == 0)
	{
		ft_chose_triple_line(hundred, &base[0]);
		ft_putchar('\n');
		return (0);
	}
	ft_chose_triple_line(centaine, &base[0]);
	ft_putchar(' ');
	ft_chose_triple_line(hundred, &base[0]);
	return (0);
}

void	ft_split_trois(unsigned int value)
{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = (value / 10) / 10;
	dizaine = (value / 10) % 10;
	unite = value % 10;
	ft_print_centaine(centaine, dizaine, unite);
	ft_print_cdu(dizaine, unite);
}
