/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      :::::::: cl  */
/*   testlist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:31:38 by cstubbin          #+#    #+#             */
/*   Updated: 2022/07/15 14:02:14 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void	display(t_stack *head) 	// Displays inputed list
{
	t_stack	*p;					// Intiate list 'p'

	p = head;					// Set list p to equal inputed list
	while (p != NULL)			// While p DOES NOT EQUAL NULL
	{
		printf("\n%d\n", p->value);		// Print current node's value
		p = p->next;					// Iterate to next node
	}
	printf("\nStack\n");		// Print 'Stack'
}

t_stack	*createlinklist1(int n, char **argv)	// Turns inputed arguments into nodes
{
	int		i;					// Intiate 'i'
	int		j;					// Intiate 'j'
	t_stack	*head;				// Intiate list 'head'
	t_stack	*tmp;				// Intiate list 'tmp'
	t_stack	*p;					// Intiate list 'p'

	i = 0;						// Set value of i to 0
	j = 1;						// Set value of j to 1
	head = NULL;				// Set head to NULL
	tmp = NULL;					// Set tmp to NULL
	p = NULL;					// Set p to NULL
	while (i < n)				// While 'i is LESS THEN 'n'
	{
		tmp = (t_stack *)malloc(sizeof(t_stack));		// Malloc tmp
		tmp->value = ft_atol(argv[j]);					// Set node (value) as the current argument
		j++;											// Incriment j by 1
		tmp->next = NULL;
		if (head == NULL)
		{
			head = tmp;
		}
		else
		{
			p = head;
			while (p->next != NULL)
			{
				p = p->next;
			}
			p->next = tmp;
		}
		i++;
	}
	return (head);
}

int	main(int argc, char **argv)
{
	t_stack	*head;
	int		n;

	head = NULL;
	n = argc -1;
	head = createlinklist1(n, argv);
	display(head);
	return (0);
}
