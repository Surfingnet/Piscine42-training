/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:42:21 by mghazari          #+#    #+#             */
/*   Updated: 2020/11/03 16:28:56 by mghazari         ###   ########.fr       */
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

int	sort_two(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && b[i] && (a[i] == b[i]))
		i++;
	return (a[i] <= b[i] ? 1 : pswap (a, b));
}

int	array_length(char **tab)
{
	int	len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

void	ft_sort_wordtab(char **tab)
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
			if (!sort_two(tab[i], tab[i + 1]))
				sorted = 0;
			i++;
		}
		len--;
	}
}
