/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 09:03:05 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/24 14:32:59 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	sorted;
	int	swap;

	if (size < 2)
		return ;
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = -1;
		while (++i < (size - 1))
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				sorted = 0;
			}
	}
}
