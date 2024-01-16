/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:12:03 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/27 17:00:35 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_index(int *array, int argc)
{
	int	i;
	int	j;
	int	arg;
	int	temp;

	i = 0;
	arg = argc;
	while (i < arg -1)
	{
		j = 0;
		while (j < (arg - i -1))
		{
			if (array[j] > array[j +1])
			{
				temp = array[j];
				array[j] = array[j +1];
				array[j +1] = temp;
			}
		j++;
		}
	i++;
	}
	return (array);
}

int	*get_index(t_list **begin_list)
{
	t_list	*aux;
	int		*out;
	int		i;

	aux = *begin_list;
	out = malloc(sizeof(int) * list_size(begin_list));
	if (!out)
		return (NULL);
	i = 0;
	while (i < list_size(begin_list))
	{
		out[i] = aux -> data;
		i++;
		aux = aux -> next;
	}
	return (out);
}

void	set_index(t_list **begin_list, int *array)
{
	t_list	*aux;
	int		i;
	int		size;

	size = list_size(begin_list);
	aux = *begin_list;
	i = 0;
	if (aux)
	{
		while (i < size && aux)
		{
			if (aux->data == array[i])
			{
				aux -> index = i;
				aux = aux -> next;
				i = -1;
			}
		i++;
		}
	}
}
