/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:11:41 by mghazari          #+#    #+#             */
/*   Updated: 2020/11/03 15:37:27 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATORS_H
# define OPERATORS_H

# define DIV_ZERO "Stop : division by zero"
# define MOD_ZERO "Stop : modulo by zero"

typedef struct	s_operators
{
	int	*plus(int x, int y);
	int	*minus(int x, int y);
	int	*mult(int x, int y);
	int	*div(int x, int y);
	int	*mod(int x, int y);
}		t_operators;

#endif
