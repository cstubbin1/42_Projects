# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 10:56:57 by cstubbin          #+#    #+#              #
#    Updated: 2022/03/01 11:59:49 by cstubbin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC	=	gcc

INC_DIR	=	include
SRC_DIR	=	src
OBJS_DIR = objs
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%, $(OBJS_DIR)/%, $(SRC:.c=.o))

FLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJS) 
	ar -rcs $@ $^

$(OBJS_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJS_DIR)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJS_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
