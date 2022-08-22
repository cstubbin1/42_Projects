/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:55:16 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/22 09:21:53 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/include/libft.h"
# include "libft/include/get_next_line.h"

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
	struct s_stack		*prev;
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
void	r(t_stack **stack, char stack_letter);
void	r2(t_stack **stack);
void	rr(t_stack **stack, char stack_letter);
void	rr2(t_stack **stack);
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

#endif