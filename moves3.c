/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:36:52 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/28 13:50:28 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **stack_b, int print)
{
	t_list	*aux;
	int		first;
	int		index;

	aux = *stack_b;
	first = aux-> data;
	index = aux -> index;
	insert_last(stack_b, first, index);
	remove_front(stack_b);
	if (print == 1)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
}

void	ra(t_list **stack_a, int print)
{
	t_list	*aux;
	int		first;
	int		index;

	aux = *stack_a;
	first = aux-> data;
	index = aux -> index;
	insert_last(stack_a, first, index);
	remove_front(stack_a);
	if (print == 1)
		write(1, "ra\n", 3);
}
