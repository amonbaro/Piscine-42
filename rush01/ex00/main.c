/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonbaro <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:59:41 by amonbaro          #+#    #+#             */
/*   Updated: 2022/09/11 19:27:45 by amonbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	main(int argc, char *argv[])
{
	int map[6][6];
//	Ajoute les conditions a la map
    map[1][0] = (argv[1][0] - 48);
    map[2][0] = (argv[1][2] - 48);
    map[3][0] = (argv[1][4] - 48);
    map[4][0] = (argv[1][6] - 48);

    map[1][5] = (argv[1][8] - 48);
    map[2][5] = (argv[1][10] - 48);
    map[3][5] = (argv[1][12] - 48);
    map[4][5] = (argv[1][14] - 48);

    map[0][1] = (argv[1][16] - 48);
    map[0][2] = (argv[1][18] - 48);
    map[0][3] = (argv[1][20] - 48);
    map[0][4] = (argv[1][22] - 48);

    map[5][1] = (argv[1][24] - 48);
    map[5][2] = (argv[1][26] - 48);
    map[5][3] = (argv[1][28] - 48);
    map[5][4] = (argv[1][30] - 48);

	if (argc > 2)
	{
		return (1);
	}
	else
//	Visuel des conditions de vision choisie (useless)
/*
	printf("  %d ", map[1][0]);
	printf("%d ", map[2][0]);
	printf("%d ", map[3][0]);
	printf("%d\n", map[4][0]);
	printf("%d         ", map[0][1]);
	printf("%d\n", map[5][1]);
	printf("%d         ", map[0][2]);
	printf("%d\n", map[5][2]);
	printf("%d         ", map[0][3]);
	printf("%d\n", map[5][3]);
	printf("%d         ", map[0][4]);
	printf("%d\n", map[5][4]);
	printf("  %d ", map[5][1]);
	printf("%d ", map[5][2]);
	printf("%d ", map[5][3]);
	printf("%d\n", map[5][4]);
*/
	return (0);
}
