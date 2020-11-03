# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/28 15:06:41 by mghazari          #+#    #+#              #
#    Updated: 2020/11/02 13:44:26 by mghazari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC_DIR = ./srcs/
INCLUDES_DIR = ./includes/

FLAGS= -Wall -Wextra -Werror

FUNCTIONS = ft_atoi

BINS = $(patsubst %,%.o,$(FUNCTIONS))

.PHONY: all clean

all: $(NAME)

$(BINS): 
	gcc -I $(INCLUDES_DIR) $(FLAGS) -c $(patsubst %.o,$(SRC_DIR)%.c,$@)

$(NAME): $(BINS)
	gcc $(FLAGS) $(BINS) -o $(NAME)

clean:
	/bin/rm -f $(BINS)
