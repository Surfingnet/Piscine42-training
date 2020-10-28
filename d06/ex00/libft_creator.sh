# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/24 16:58:45 by mghazari          #+#    #+#              #
#    Updated: 2020/10/24 16:59:33 by mghazari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

for i in *.c; do
	gcc -c "$i"
done
compilator="ar rc libft.a"
for i in *.o; do
	compilator="$compilator $i"
done
eval $compilator
for i in *.o; do
	rm "$i"
done
