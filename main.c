/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:09:10 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/31 16:11:20 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_stack(char *argv[], t_list **stack_a)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		insert_last(stack_a, ft_atoi(argv[i]), 0);
		i++;
	}
	return (*stack_a);
}	

void	inicialize_stack(t_list **stack_a)
{
	int	*a;

	a = get_index(stack_a);
	a = sort_index(a, list_size(stack_a));
	set_index(stack_a, a);
	free_array(a);
}

int	check_one_arg(char *argv[])
{
	if (ft_isnbr(argv) == 1 && check_sign(argv) == 1
		&& is_max_min_int(argv) == 0)
		return (0);
	if (check_null(argv) == 1)
		write(1, "Error!\n", 7);
	write(1, "Error!\n", 7);
	return (1);
}	

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	if (argc == 2)
		check_one_arg(argv);
	if (argc > 2)
	{
		if (check_args(argv) == 1)
		{
			write(1, "Error!\n", 7);
			return (0);
		}	
		if (is_sorted (argv) == 1)
			return (0);
		create_stack(argv, &stack_a);
		sort(argc, &stack_a, &stack_b);
		free_stack(&stack_a);
		free_stack(&stack_b);
	}
	return (0);
}
