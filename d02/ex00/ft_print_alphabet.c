/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 19:32:23 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/23 16:48:28 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
		ft_putchar(a++);
	return ;
}
