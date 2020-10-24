/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 18:29:12 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/24 14:25:26 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	char	swap;

	len = -1;
	while (str[++len])
		continue;
	if (len < 2)
		return (str);
	i = -1;
	while (--len > ++i)
	{
		swap = str[len];
		str[len] = str[i];
		str[i] = swap;
	}
	return (str);
}
