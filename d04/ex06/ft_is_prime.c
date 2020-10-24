/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:55:04 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/24 14:48:08 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	if (nb < 2)
		return (0);
	i = 1;
	while (++i * i <= nb)
	{
		j = i - 1;
		while (++j <= nb / 2)
		{
			if ((i * j) == nb)
				return (0);
			if ((i * j) > nb)
				break ;
		}
	}
	return (1);
}
