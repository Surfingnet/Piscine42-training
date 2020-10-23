/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 12:09:37 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/23 17:37:38 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	int	i;

	i = 0;
	while (++i < 9900)
	{
		if ((i % 100) > (i / 100))
		{
			ft_putchar ((i / 1000) + '0');
			ft_putchar (((i % 1000) / 100) + '0');
			ft_putchar (' ');
			ft_putchar (((i % 100) / 10) + '0');
			ft_putchar ((i % 10) + '0');
			if (i < 9899)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}