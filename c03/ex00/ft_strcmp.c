/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:46:23 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/13 15:51:29 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while ((s1[a] == s2[a]) && (s1[a] != '\0') && (s2[a] != '\0'))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	ch1[] = "asdsdzzzzzzz";
	char	ch2[] = "asdsdfdhhdfh";

	printf("%s\n", ch1);
	printf("%s\n", ch2);
	printf("%d\n", ft_strcmp(&ch1[0], &ch2[0]));
}
*/
