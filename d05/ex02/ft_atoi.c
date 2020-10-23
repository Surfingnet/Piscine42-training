/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:29:50 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/20 13:42:26 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i, negative, total;

	i = -1;
	total = 0;
	negative = 0;
	while ((str[++i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'));
	if (str[i] == 45 || str[i] == 43)
		negative = (str[i++] == 45 ? 1 : 0);
	while (str[i] >= 48 && str[i] <= 57)
		total = total * 10 + (int)str[i++] - 48;
	return (negative ? -total : total);
}
