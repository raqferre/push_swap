/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:09:39 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/31 17:24:16 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_smallest_index(t_list **stack_a)
{
	int		temp;
	t_list	*aux;

	aux = *stack_a;
	temp = aux->index;
	while (aux)
	{
		if (aux -> index < temp)
			temp = aux -> index;
		aux = aux -> next;
	}	
	return (temp);
}	

void	sort(int argc, t_list **stack_a, t_list **stack_b)
{
	inicialize_stack(stack_a);
	if (argc == 3)
		sort_2(stack_a);
	else if (argc == 4)
		sort_3(stack_a);
	else if (argc == 5)
		sort_4(stack_a, stack_b);
	else if (argc == 6)
		sort_5(stack_a, stack_b);
	else
		radix(stack_a, stack_b);
}	

void	sort_2(t_list **stack_a)
{
	t_list	*aux;

	aux = *stack_a;
	if (aux->data > aux->next ->data)
	{
		ra(stack_a, 1);
	}
	else
		return ;
}

void	sort_3(t_list **stack_a)
{
	int	temp;

	temp = get_highest_index(stack_a);
	if ((*stack_a)->index == temp)
		ra(stack_a, 1);
	else if ((*stack_a)->next->index == temp)
		rra(stack_a, 1);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(*stack_a, 1);
}

void	sort_4(t_list **stack_a, t_list **stack_b)
{
	int	index;

	index = get_smallest_index(stack_a);
	while ((*stack_a)->index != index)
		ra(stack_a, 1);
	pb(stack_a, stack_b, 1);
	sort_3(stack_a);
	pa(stack_a, stack_b, 1);
}
