# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/05 09:47:45 by cstubbin          #+#    #+#              #
#    Updated: 2022/08/22 09:19:03 by cstubbin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

MAIN = push_swap.c

FILES =	src/elements/clear_elements.c \
		src/elements/add_element.c \
		src/elements/create_stack.c \
		src/operations/swap.c \
		src/operations/r.c \
		src/operations/rr.c \
		src/operations/push.c \
		src/error/check_alpha.c \
		src/error/check_int.c \
		src/error/check_dups.c \
		src/error/counter.c \
		src/error/exit_error.c \
		src/error/split_and_check_args.c \
		src/error/aug_split.c \
		src/error/check_space.c \
		src/sorting/sort.c \
		src/utils/utils.c \

OBJS = $(FILES:.c=.o)

.c.o:
	@$(CC) -c $(FLAGS) -I push_swap.h $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(MAKE) re -C ./libft
		@cp libft/libft.a ./$(NAME).a
		@ar rcs $(NAME).a $(OBJS)
		@$(CC) $(FLAGS) $(NAME).a $(MAIN) -o $(NAME) -I push_swap.h/
		@echo "push_swap created"

clean:
		@$(MAKE) clean -C ./libft
		@$(RM) $(OBJS)

fclean:	clean
		@$(RM) $(NAME)
		@$(RM) $(NAME).a
		@$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: clean fclean all re