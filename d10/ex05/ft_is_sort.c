/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:18:20 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/29 12:33:01 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (length < 2)
		return (1);
	i = 0;
	while ((f(tab[i], tab[i + 1]) >= 0) && (i < length - 1))
		if (i++ == length - 2)
			return (1);
	i = 0;
	while ((f(tab[i], tab[i + 1]) <= 0) && (i < length - 1))
		if (i++ == length - 2)
			return (1);
	return (0);
}
