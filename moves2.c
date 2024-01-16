/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:34:15 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/28 13:54:57 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *stack_a, int print)
{
	int	temp;
	int	temp_2;
	int	index;
	int	index2;

	if (stack_a == NULL || stack_a->next == NULL)
		return ;
	temp = stack_a -> data;
	index = stack_a -> index;
	temp_2 = stack_a -> next -> data;
	index2 = stack_a -> next -> index;
	stack_a -> data = temp_2;
	stack_a -> index = index2;
	stack_a -> next -> data = temp;
	stack_a -> next -> index = index;
	if (print == 1)
		write(1, "sa\n", 3);
}

void	sb(t_list *stack_b, int print)
{
	int	temp;
	int	temp_2;
	int	index;
	int	index2;

	if (stack_b == NULL || stack_b -> next == NULL)
		return ;
	temp = stack_b -> data;
	index = stack_b -> index;
	temp_2 = stack_b -> next -> data;
	index2 = stack_b -> next -> index;
	stack_b -> data = temp_2;
	stack_b -> index = index2;
	stack_b -> next -> data = temp;
	stack_b -> next -> index = index;
	if (print == 1)
		write(1, "sb\n", 3);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	sa (stack_a, 0);
	sb (stack_b, 0);
	write(1, "ss\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b, int print)
{
	t_list	*aux;
	int		data_b;
	int		index_b;

	aux = *stack_b;
	if (aux == NULL || list_size(stack_b) == 0)
		return ;
	data_b = aux ->data;
	index_b = aux -> index;
	list_push_front (stack_a, data_b, index_b);
	remove_front (stack_b);
	if (print == 1)
		write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b, int print)
{
	t_list	*aux;
	int		data_a;
	int		index_a;

	aux = *stack_a;
	if (aux == NULL || list_size(stack_a) == 0)
		return ;
	data_a = aux ->data;
	index_a = aux -> index;
	list_push_front (stack_b, data_a, index_a);
	remove_front (stack_a);
	if (print == 1)
		write(1, "pb\n", 3);
}
