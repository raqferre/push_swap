/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:40:05 by raqferre          #+#    #+#             */
/*   Updated: 2023/03/31 14:55:29 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list {
	struct s_list	*next;
	int				data;
	int				index;
}				t_list;

void	list_push_front(t_list **begin_list, int data, int index);
void	remove_front(t_list **begin_list);
t_list	*return_last(t_list **begin_list);
void	remove_last(t_list **begin_list);
void	insert_last(t_list **begin_list, int data, int index);
void	ra(t_list **stack_a, int print);
void	rb(t_list **stack_b, int print);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list	**stack_a, int print);
void	rrb(t_list	**stack_b, int print);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sa(t_list *stack_a, int print);
void	sb(t_list *stack_b, int print);
void	ss(t_list *stack_a, t_list *stack_b);
void	pa(t_list **stack_a, t_list **stack_b, int print);
void	pb(t_list **stack_a, t_list **stack_b, int print);
int		*sort_index(int array[], int argc);
int		*get_index(t_list **begin_list);
void	set_index(t_list **begin_list, int array[]);
int		list_size(t_list **begin_list);
int		list_sorted(t_list **begin_list);
int		is_equal(char **argv);
long	int	ft_atoi(const char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *argv);
int		is_max_min_int(char *argv[]);
int		ft_isnbr(char *argv[]);
int		check_sign(char *argv[]);
void	sort_2(t_list **stack_a);
void	sort_3(t_list **stack_a);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);	
void	free_array(int *array);
void	free_stack(t_list **begin_list);
int		check_args(char *argv[]);
int		is_sorted(char *argv[]);
void	sort(int argc, t_list **stack_a, t_list **stack_b);
int		bits(t_list **stack_a);
void	radix(t_list **stack_a, t_list **stack_b);
void	inicialize_stack(t_list **stack_a);
int		get_highest_index(t_list **stack_a);
int		check_null(char *argv[]);
void	imprime_stack(t_list **begin_list);
#endif
