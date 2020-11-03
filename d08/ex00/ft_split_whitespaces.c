/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:23:35 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/28 10:17:37 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*str_alloc(int len)
{
	char	*str;

	while (!(str = (char*)malloc(len)))
		;
	return (str);
}

int	count_words(char *str)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (1)
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!(str[i]))
			return (words);
		while (!(str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\0'))
			i++;
		words++;
	}
}

char	*get_word(char *str, int n)
{
	int	i;
	int	j;
	int	k;
	char	*word;

	i = 0;
	j = 0;
	while (j != n)
	{
		while (!(str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\0'))
			i++;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		j++;
	}
	k = i;
	while (!(str[k] == ' ' || str[k] == '\t'
		|| str[k] == '\n' || str[k] == '\0'))
		k++;
	word = str_alloc(k - i);
	j = 0;
	while (i < k)
		word[j++] = str[i++];
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int	i;
	int	n;
	char	**array;

	n = count_words(str);
	while (!(array = (char**)malloc(n + 1)))
		;
	i = 0;
	while (i < n)
		array[i] = get_word[i++];
	array[n] = (NULL);
	return (array);
}
