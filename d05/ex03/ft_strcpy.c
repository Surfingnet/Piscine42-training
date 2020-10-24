/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:56:43 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/24 16:36:11 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	dest_len;
	int	src_len;

	dest_len = 0;
	while (dest[dest_len++])
		continue;
	src_len = 0;
	while (src[src_len++])
		continue;
	if (src_len > dest_len)
		return ("");
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
