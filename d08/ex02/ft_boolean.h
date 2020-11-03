/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:53:57 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/28 13:56:18 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define	TRUE		1
#define	FALSE		0
#define	SUCCESS		0
#define	EVEN_MSG	"I have an even number of arguments.\n"
#define	ODD_MSG		"I have an odd number of arguments.\n"
#define	EVEN(x)		(!(x % 2))

typedef int	t_bool;
