/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:16:26 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/24 14:38:41 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	f;

	if (power < 0)
		return (0);
	f = 1;
	i = -1;
	while (++i < power)
		f *= nb;
	return (f);
}
