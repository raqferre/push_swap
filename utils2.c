/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:59:11 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/27 18:31:51 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	list_size(t_list **begin_list)
{
	t_list	*aux;
	int		i;

	i = 0;
	if (!begin_list)
		return (0);
	aux = *begin_list;
	while (aux)
	{
		i++;
		aux = aux -> next;
	}
	return (i);
}

int	list_sorted(t_list **begin_list)
{
	t_list	*aux;

	aux = *begin_list;
	while (aux -> next != NULL)
	{
		if (aux -> index > aux -> next -> index)
			return (1);
		aux = aux -> next;
	}
	return (0);
}
