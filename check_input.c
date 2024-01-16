/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:57:07 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/29 18:01:22 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_isnbr(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 0 && is_sign(argv[i][j]) == 0)
				return (0);
			if (ft_isdigit(argv[i][j]) == 0 && is_sign(argv[i][j]) == 1)
				return (1);
			j++;
		}
	i++;
	}
	return (1);
}

int	check_sign(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (is_sign(argv[i][j]) == 1 && argv[i][j +1] == '0')
				return (0);
			if (is_sign(argv[i][j]) == 1 && is_sign(argv[1][j +1]) == 1)
				return (0);
			else if (is_sign(argv[i][j]) == 1 && argv[i][j +1] == '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_max_min_int(char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[1]) > 11)
			return (1);
		else if (ft_atoi(argv[i]) > 2147483647)
			return (1);
		else if (ft_atoi(argv[i]) < -2147483648)
			return (1);
		i++;
	}
	return (0);
}
