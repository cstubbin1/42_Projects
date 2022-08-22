/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:19:10 by cstubbin          #+#    #+#             */
/*   Updated: 2022/08/05 09:46:49 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit (1);
}

int	check_alpha(int argc, char **argv)
{
	int		c_count;
	int		v_index;

	c_count = 0;
	v_index = 0;
	while (c_count < argc)
	{
		while (argv[c_count][v_index] != '\0')
		{
			if (ft_isalpha(argv[c_count][v_index]))
			{
				exit_error();
			}
			v_index++;
		}
		v_index = 0;
		c_count++;
	}
	return (1);
}

int	counter(char **argv)
{
	int	i;

	i = 1;
	while (argv[i + 1])
	{
		i++;
	}
	return (i);
}

char	**split_and_check_args(int argc, char **argv)
{
	int	count;

	count = 1;
	if (argc == 1)
	{
		count = argc;
		argv = ft_split(argv[0], ' ');
		while (argv[count + 1])
			count++;
		argc = count + 1;
	}
	check_int(argc, argv);
	check_alpha(argc, argv);
	return (argv);
}

int	check_int(int argc, char **argv)
{
	int		c_count;
	int		v_index;

	c_count = 0;
	v_index = 0;
	while (c_count < argc)
	{
		while (argv[c_count][v_index] != '\0')
		{
			if (argv[c_count][v_index] == '-' && v_index == 0)
			{
				v_index++;
			}
			v_index++;
		}
		if ((ft_atol(argv[c_count])) > MAX || (ft_atol(argv[c_count])) < MIN)
		{
			exit_error();
		}
		v_index = 0;
		c_count++;
	}
	return (1);
}

void	clear_elements(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_a)
	{
		while (*stack_a)
		{
			tmp = (*stack_a)->next;
			free(*stack_a);
			*stack_a = tmp;
		}
		*stack_a = NULL;
	}
	if (*stack_b)
	{
		tmp = *stack_b;
		if (!tmp)
			return ;
		while (*stack_b)
		{
			tmp = (*stack_b)->next;
			free(*stack_b);
			*stack_b = tmp;
		}
		*stack_b = NULL;
	}
}

void	display(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*a;
	t_stack	*b;

	a = stack_a;
	b = stack_b;
	while (a || b)
	{
		if (a)
			ft_putnbr_fd(a->value, 1);
		else
			ft_putstr_fd(" ", 1);
		ft_putstr_fd("	", 1);
		if (b)
			ft_putnbr_fd(b->value, 1);
		else
			ft_putstr_fd(" ", 1);
		ft_putchar_fd('\n', 1);
		if (a)
			a = a->next;
		if (b)
			b = b->next;
	}
	ft_putstr_fd("_	_\na	b\n", 1);
}

t_stack	*add_element(int value, t_stack *next)
{
	t_stack	*element;

	element = malloc(sizeof(t_stack));
	if (!element)
		return (NULL);
	element->value = value;
	element->next = next;
	return (element);
}

void	create_stack(t_stack **lst, char **arg, int argc)
{
	int	count;

	count = argc;
	while (count >= 0)
	{
		*lst = add_element(ft_atol(arg[count]), *lst);
		count--;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	argv++;
	argc--;
	stack_b = NULL;
	argv = split_and_check_args(argc, argv);
	argc = counter(argv);
	create_stack(&stack_a, &argv[0], argc);
	display(stack_a, stack_b);
	/* SORT */
	clear_elements(&stack_a, &stack_b);
	return (0);
}
