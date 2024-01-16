/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:32:59 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/31 17:26:08 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_highest_index(t_list **stack_a)
{
	int		temp;
	t_list	*aux;

	aux = *stack_a;
	temp = aux -> index;
	while (aux)
	{
		if (aux -> index > temp)
			temp = aux -> index;
		aux = aux -> next;
	}
	return (temp);
}

int	bits(t_list **stack_a)
{
	int	max_index;
	int	max_bits;

	max_bits = 0;
	max_index = list_size(stack_a) - 1;
	while (max_index != 0)
	{
		max_index = max_index / 2;
		max_bits++;
	}
	return (max_bits);
}

void	radix(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	aux = *stack_a;
	size = list_size(stack_a);
	max_bits = bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			aux = *stack_a;
			if (((aux->index >> i) & 1) == 1)
				ra(stack_a, 1);
			else
				pb(stack_a, stack_b, 1);
		}
		while (list_size(stack_b) != 0)
			pa(stack_a, stack_b, 1);
		i++;
	}
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)-> next -> next -> next -> next -> index == 0)
		rra(stack_a, 1);
	while ((*stack_a)->index != 0)
		ra(stack_a, 1);
	pb(stack_a, stack_b, 1);
	while ((*stack_a)-> index != 1)
		ra(stack_a, 1);
	pb(stack_a, stack_b, 1);
	sort_3(stack_a);
	if ((*stack_b)-> index < (*stack_b)-> next -> index)
		sb(*stack_b, 1);
	pa(stack_a, stack_b, 1);
	pa(stack_a, stack_b, 1);
}
