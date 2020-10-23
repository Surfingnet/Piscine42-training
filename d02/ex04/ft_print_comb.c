/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 06:54:07 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/23 17:16:33 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;
	int	i;

	i = -1;
	while (++i < 790)
	{
		c = (i / 100);
		d = ((i - (c * 100)) / 10);
		u = (i - (c * 100)) - (d * 10);
		if ((c < d) && (d < u))
		{
			ft_putchar('0' + c);
			ft_putchar('0' + d);
			ft_putchar('0' + u);
			if (i < 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
