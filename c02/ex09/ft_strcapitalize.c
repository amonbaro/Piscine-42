/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:32:45 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/20 14:56:10 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (b == 0 && (str[a] >= 'a' && str[a] <= 'z'))
		{
			str[a] -= 'a' - 'A';
			b++;
		}
		else if (b > 0 && (str[a] >= 'A' && str[a] <= 'Z'))
			str[a] += 'a' - 'A';
		else if ((str[a] < '0') || (str[a] > '9' && str[a] < 'A')
			|| (str[a] > 'Z' && str[a] < 'a') || (str[a] > 'z'))
			b = 0;
		else
			b++;
		a++;
	}
	return (str);
}
