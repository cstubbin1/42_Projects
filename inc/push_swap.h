/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:55:16 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/31 16:28:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/include/libft.h"
# include "../libft/include/get_next_line.h"

# define MAX 2147483647
# define MIN -2147483648

/*
**	-------
**	STRUCTS
**	-------
*/

typedef struct s_stack
{
	int					value;
	int					index;
	struct s_stack		*next;
}						t_stack;

/*
**	--------
**	ELEMENTS
**	--------
*/

void	clear_elements(t_stack **stack_a, t_stack **stack_b);
void	create_stack(t_stack **lst, char **argv, int argc);
t_stack	*add_element(int value, t_stack *next);

/*
**	-----
**	ERROR
**	-----
*/

int		check_int(int argc, char **argv);
void	exit_error(void);
int		check_alpha(int argc, char **argv);
int		counter(char **argv);
char	**split_and_check_args(int argc, char **argv);
int		check_dups(int argc, char **argv);
char	**split(const char *s, char c);
int		check_space(int argc, char **argv);
char	**aug_split(int argc, char **argv);

/*
**	----------
**	OPERATIONS
**	----------
*/

void	swap(t_stack **stack, char stack_letter);
void	swap_2(t_stack  **stack);
void	swap_both(t_stack  **stack_a, t_stack  **stack_b);
void	rotate(t_stack **stack, char stack_letter);
void	rotate_2(t_stack **stack);
void	rotate_both(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate(t_stack **stack, char stack_letter);
void	reverse_rotate_2(t_stack **stack);
void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b);
void	push(t_stack **from, t_stack **to, char letter);

/*
**	----
**	SORT
**	----
*/

void	sort(t_stack **stack_a, t_stack **stack_b);
void	sort3(t_stack **stack_a);
void	sort5(t_stack **stack_a, t_stack **stack_b);
void	optimise(t_stack **a, int i);
void	pre_sort(t_stack **stack);
void	sort_bigger(t_stack **stack_a, t_stack **stack_b);

/*
**	-----
**	UTILS
**	-----
*/

void	display(t_stack *stack_a, t_stack *stack_b);
int		issorted(t_stack *stack);
size_t	stack_size(t_stack *lst);
t_stack	*get_lowest(t_stack *stack);
void	get_lowest_top(t_stack **a, int index, int i);
void	int_index(t_stack *stack);
void	give_index(t_stack	*tmp, t_stack **stack);
t_stack	*get_by_index(t_stack *stack, int index);
int		get_next_index(t_stack **stack, int previous);
t_stack	*get_by_value(t_stack *stack, int value);

/*
**	-------
**	CHECKER
**	-------
*/

void	print_checker_res(t_stack **stack_a, t_stack **stack_b);
int		stack_is_sorted(t_stack *stack_a);
int		return_errors(char **line, t_stack **stack_a, t_stack **stack_b);
int		do_commands(char *line, t_stack **stack_a, t_stack **stack_b);

#endif