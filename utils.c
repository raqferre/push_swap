/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:11:57 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/27 18:31:05 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_push_front(t_list **begin_list, int data, int index)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return ;
	node->data = data;
	node->index = index;
	node->next = *begin_list;
	*begin_list = node;
}

void	remove_front(t_list **begin_list)
{
	t_list	*node;

	node = *begin_list;
	if (node == NULL)
		return ;
	*begin_list = node->next;
	free(node);
}

t_list	*return_last(t_list **begin_list)
{
	t_list	*aux;

	aux = *begin_list;
	while (aux -> next != NULL)
	{
		aux = aux-> next;
	}
	return (aux);
}

void	remove_last(t_list **begin_list)
{
	t_list	*aux;

	aux = *begin_list;
	if (aux == NULL)
		return ;
	if (aux ->next == NULL)
	{
		*begin_list = NULL;
		free(aux);
		return ;
	}
	while (aux -> next -> next != NULL)
	aux = aux -> next;
	free(aux -> next);
	aux -> next = NULL;
}

void	insert_last(t_list **begin_list, int data, int index)
{
	t_list	*node;
	t_list	*aux;

	node = malloc(sizeof(t_list));
	if (!node)
		return ;
	node->data = data;
	node->index = index;
	node->next = NULL;
	if (!*begin_list)
	{
		*begin_list = node;
		return ;
	}	
	aux = *begin_list;
	while (aux -> next != NULL)
	aux = aux -> next;
	aux->next = node;
}
