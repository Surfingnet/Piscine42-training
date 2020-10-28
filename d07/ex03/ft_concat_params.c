/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 09:59:16 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/27 14:22:33 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_params_length(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j++])
			;
		len += j;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int	i;
	int	j;
	int	k;
	int	len;

	len = ft_params_length(argc, argv);
	len = (len == 0) ? 1 : len;
	if (!(str = (char*)malloc(len)))
		return (NULL);
	i = 0;
	k = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[k++] = argv[i][j++];
		str[k++] = (i == (argc - 1)) ? '\0' : '\n';
	}
	return (str);
}
