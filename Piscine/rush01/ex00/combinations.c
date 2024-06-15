/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:33:59 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 19:38:40 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_init_array_3d(int array[5][5][7])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			k = 0;
			while (k < 7)
			{
				array[i][j][k] = 0;
				k++;
			}
			j++;
		}
		i++;
	}
}

void	ft_init_comb(int comb[5][5][7])
{
	ft_init_array_3d(comb);
	comb[1][2][0] = 4123;
	comb[1][2][1] = 4213;
	comb[1][3][0] = 4132;
	comb[1][3][1] = 4231;
	comb[1][3][2] = 4312;
	comb[1][4][0] = 4321;
	comb[2][1][0] = 3124;
	comb[2][1][1] = 3214;
	comb[2][2][0] = 1423;
	comb[2][2][1] = 2143;
	comb[2][2][2] = 2413;
	comb[2][2][3] = 3142;
	comb[2][2][4] = 3241;
	comb[2][2][5] = 3412;
	comb[2][3][0] = 1432;
	comb[2][3][1] = 2431;
	comb[2][3][2] = 3421;
	comb[3][1][0] = 1324;
	comb[3][1][1] = 2134;
	comb[3][1][2] = 2314;
	comb[3][2][0] = 1243;
	comb[3][2][1] = 1342;
	comb[3][2][2] = 2341;
	comb[4][1][0] = 1234;
}
