/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 06:08:44 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/23 16:50:33 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_reverse_alphabet(void)
{
	char z;

	z = 'z';
	while (z >= 'a')
		ft_putchar(z--);
	return ;
}
