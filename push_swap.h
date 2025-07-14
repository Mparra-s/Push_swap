/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:46:37 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/26 12:53:05 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_listps
{
	struct s_listps	*next;
	int				content;
	int				key;
}	t_listps;
char			***parse_arguments(int argc, char **argv,
					int *nums, int *n_arr);
t_listps		*create_lists(int *nums, int total_nums);
t_listps		*ft_lstlast(t_listps *lst);
t_listps		*ft_lstnew(int content);
int				*convert_to_int_array(char ***array,
					int n_arrays, int total_nums);
int				ft_limit(long num);
int				val_num(int *nums, int size);
int				val_let(char *str);
int				ft_atol(const char *nptr);
int				ft_lstsize(t_listps *lst);
int				is_sorted(int *nums, int total_nums);
int				*array_index(int *array, int total_nums);
int				find_max_pos(t_listps *stack);
int				list_size(t_listps *stack);
void			algorithm_sel(int *num, int total_nums);
void			free_array(char ***array, int n_arrays);
void			ft_lstadd_back(t_listps **lst, t_listps *new);
void			ft_lstadd_frontps(t_listps **lst, t_listps *new);
void			free_list(t_listps *stack);
void			ft_out(void);
void			push(t_listps **dest, t_listps **origin);
void			pa(t_listps **stack_a, t_listps **stack_b);
void			pb(t_listps **stack_a, t_listps **stack_b);
void			reverse(t_listps **stack);
void			rra(t_listps **stack_a, t_listps **stack_b);
void			rrb(t_listps **stack_a, t_listps **stack_b);
void			rrr(t_listps **stack_a, t_listps **stack_b);
void			rotate(t_listps **stack);
void			ra(t_listps **stack_a, t_listps **stack_b);
void			rb(t_listps **stack_a, t_listps **stack_b);
void			rr(t_listps **stack_a, t_listps **stack_b);
void			swap(t_listps **stack);
void			sa(t_listps **stack_a, t_listps **stack_b);
void			sb(t_listps **stack_a, t_listps **stack_b);
void			ss(t_listps **stack_a, t_listps **stack_b);
void			sort_small(t_listps **stack_a, t_listps **stack_b,
					int total_nums);
void			sort_small_3(t_listps **stack_a, t_listps **stack_b);
void			sort_small_4(t_listps **stack_a, t_listps **stack_b);
void			sort_small_5(t_listps **stack_a, t_listps **stack_b);
void			assign_keys(t_listps *stack, int *array, int total_nums);
void			assign_index(t_listps *stack, int total_nums);
void			sort_chunk(t_listps **stack_a, t_listps **stack_b, int size);
void			push_chunk_b(t_listps **stack_a, t_listps **stack_b, int size);
void			push_back(t_listps **stack_a, t_listps **stack_b);
#endif
