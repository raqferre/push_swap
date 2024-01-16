/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:15:56 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/28 13:53:29 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list	**stack_a, int print)
{
	t_list	*aux;
	int		temp;
	int		index;

	aux = return_last(stack_a);
	temp = aux->data;
	index = aux -> index;
	list_push_front(stack_a, temp, index);
	remove_last(stack_a);
	if (print == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_list	**stack_b, int print)
{
	t_list	*aux;
	int		temp;
	int		index;

	aux = return_last(stack_b);
	temp = aux->data;
	index = aux->index;
	list_push_front(stack_b, temp, index);
	remove_last(stack_b);
	if (print == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	write(1, "rrr\n", 4);
}
