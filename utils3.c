/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:07:42 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/27 18:58:26 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(const char *str)

{
	long long int	sign;
	long long int	out;
	int				i;

	sign = 1;
	i = 0;
	out = 0;
	while (str[i] != '\0')
	{	
		if (str[i] == '+' && str[i + 1] == '-')
			return (0);
		else if (str[i] == '+')
		i++;
		else if (str[i] == '-')
		{
			sign = sign * -1;
			i++;
		}
		else
		{
			out = out * 10 + str[i] - 48;
			i++;
		}
	}
	return (sign * out);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	i++;
	return (i);
}

void	free_array(int *array)
{
	free(array);
}

void	free_stack(t_list **begin_list)
{
	t_list	*aux;

	while (*begin_list != NULL)
	{
		aux = *begin_list;
		*begin_list = (*begin_list)->next;
		free(aux);
	}
}
