/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:35:39 by mghazari          #+#    #+#             */
/*   Updated: 2020/11/03 16:44:40 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	pswap(char *a, char *b)
{
	char	*c;

	c = a;
	a = b;
	b = c;
	return (0);
}

int	array_length(char **tab)
{
	int	len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	len;
	int	sorted;

	len = array_length(tab);
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < len - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
				sorted = pswap(tab[i], tab[i + 1]);
			i++;
		}
		len--;
	}
}
