/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:38:13 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/25 11:46:18 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i])
		ft_putchar(i++);
	return (argc);
}
