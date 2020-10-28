/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:05:03 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/26 09:57:12 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*array;

	if (min >= max)
		return (0);
	if ((array = (int*)malloc(4 * (max - min))))
	{
		i = min;
		j = 0;
		while (i < max)
			array[j++] = i++;
		*range = array;
		return (j);
	}
	*range = (NULL);
	return (0);
}
