/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:16:26 by mghazari          #+#    #+#             */
/*   Updated: 2020/06/26 11:27:31 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i, f;

	if (power < 0)
		return (0);
	f = 1;
	for (i = 0; i < power; i++)
		f *= nb;
	return (f);
}
