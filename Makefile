# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/05 09:47:45 by cstubbin          #+#    #+#              #
#    Updated: 2022/08/31 15:17:55 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS = checker

SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj

SRC = $(shell find src -name '*.c')

BONUS_SRC = $(shell find bonus -name '*.c')

CC = gcc

FLAGS = -Wall -Werror -Wextra -I $(INC_DIR)

RM = rm -rf
MKDIR = mkdir -p

OBJS = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

BONUS_OBJS = $(BONUS_SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

.SILENT:

all: makelibft $(NAME) $(BONUS)
	echo "ready to run"

makelibft:
	$(MAKE) -C libft
	echo "libft made"

$(NAME): $(OBJS)
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(FLAGS) $(OBJS) -L libft -l ft -o $@
	echo "push_swap created"
	
$(BONUS): $(OBJS)
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(FLAGS) $(BONUS_OBJS) -L libft -l ft -o $@
	echo "checker created"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(MKDIR) $(@D)
	$(CC) $(FLAGS) -I $(INC_DIR) -c $< -o $@
	echo "compiling $< to $@"

clean:
		$(MAKE) clean -C ./libft
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(PUSH_NAME) $(CHCEKER_NAME)
		$(RM) $(PUSH_NAME).a $(CHECKER_NAME)
		$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: clean fclean all re