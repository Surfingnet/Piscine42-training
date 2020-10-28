/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:51:51 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/25 19:00:11 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	len;
	int	i;
	char	*new;

	len = 0;
	while (src[len])
		len++;
	if ((new = (char*)malloc(len + 1)))
	{
		i = 0;
		while (i <= len)
			new[i] = src[i++];
		return (new);
	}
	return (NULL);
}
