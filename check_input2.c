/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:53:17 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/27 16:58:45 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(char *argv[])
{
	int	i;

	i = 1;
	while (argv[i] && argv[i +1])
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i +1]))
			return (0);
		i++;
	}
	return (1);
}

int	is_equal(char *argv[])
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while (argv[i])
	{
		temp = ft_atoi(argv[i]);
		j = 1;
		while (argv[j])
		{
			if (j == i)
					j++;
			else if (temp == ft_atoi(argv[j]))
				return (1);
			j++;
		}	
		i++;
	}	
	return (0);
}	

int	check_null(char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}	

int	check_args(char *argv[])
{
	if (ft_isnbr(argv) == 0)
		return (1);
	if (ft_isnbr(argv) == 1)
	{
		if (check_sign(argv) == 0)
			return (1);
		else if (is_max_min_int(argv) == 1)
			return (1);
		else if (is_equal(argv) == 1)
			return (1);
		else if (check_null(argv) == 1)
			return (1);
		else
			return (0);
	}
	return (0);
}	
