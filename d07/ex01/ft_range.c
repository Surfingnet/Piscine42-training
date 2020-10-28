/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 12:32:32 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/25 12:45:03 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	array[];

	if (min >= max)
		return (NULL);
	array = (int*)malloc(4 * (max - min));
	i = 0;
	j = min;
	while (j < max)
		array[i++] = j++;
	return (array);
}
