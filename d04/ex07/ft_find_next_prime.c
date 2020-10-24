/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 07:19:11 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/24 14:51:47 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;
	int	x;
	int	is_prime;

	is_prime = 0;
	x = nb < 2 ? 1 : nb - 1;
	while (!is_prime)
	{
		x++;
		is_prime = 1;
		i = 1;
		while ((++i * i <= x / 2) && is_prime)
		{
			j = i - 1;
			while ((++j <= x / 2) && is_prime)
			{
				if ((i * j) == x)
					is_prime = 0;
				if ((i * j) > x)
					break ;
			}
		}
	}
	return (x);
}
