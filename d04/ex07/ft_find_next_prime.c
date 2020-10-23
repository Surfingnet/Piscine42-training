/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 07:19:11 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/20 08:00:39 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
	int i, j, x, is_prime;

	is_prime = 0;
	x = nb < 2 ? 1 : nb - 1;

	while (!is_prime)
	{
		x++;
		is_prime = 1;
		for (i = 2; i * i <= x && is_prime; i++)
			for (j = i; j <= x / 2 && is_prime; j++)
			{
				if ((i * j) == x)
					is_prime = 0;
				if ((i * j) > x)
					break;
			}
	}
	return (x);
}
