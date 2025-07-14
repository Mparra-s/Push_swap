/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:02:28 by mparra-s          #+#    #+#             */
/*   Updated: 2025/07/14 16:39:45 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	***parse_arguments(int argc, char **argv, int *nums, int *n_arr)
{
	char	***array;
	int		i;
	int		a;
	int		j;

	i = 1;
	a = 0;
	array = malloc(sizeof(char **) * (argc -1));
	if (!array)
		return (NULL);
	*nums = 0;
	while (argv[i] && val_let(argv[i]))
	{
		array[a] = ft_split(argv[i], ' ');
		j = 0;
		while (array[a][j++])
			(*nums)++;
		i++;
		a++;
	}
	*n_arr = a;
	return (array);
}

int	*convert_to_int_array(char ***array, int n_arrays, int total_nums)
{
	int	*num;
	int	i;
	int	j;
	int	a;

	i = 0;
	a = 0;
	num = malloc(sizeof(int) * total_nums);
	if (!num)
		return (NULL);
	while (i < n_arrays)
	{
		j = 0;
		while (array[i] && array[i][j])
		{
			num[a] = ft_atol(array[i][j]);
			a++;
			j++;
		}
		i++;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	char	***array;
	int		*num;
	int		total_nums;
	int		n_arrays;					

	total_nums = 0;
	n_arrays = 0;
	if (argc <= 1)
		return (0);
	array = parse_arguments(argc, argv, &total_nums, &n_arrays);
	if (!array)
		return (0);
	num = convert_to_int_array(array, n_arrays, total_nums);
	if (!num)
		return (0);
	if (!val_num(num, total_nums))
		ft_out();
	if (!is_sorted(num, total_nums))
		algorithm_sel(num, total_nums);
	free_array(array, n_arrays);
	free(num);
	return (0);
}

t_listps	*create_lists(int *nums, int total_nums)
{
	t_listps	*stack_a;
	t_listps	*node;
	int			i;

	i = 0;
	stack_a = NULL;
	while (i < total_nums)
	{
		node = malloc(sizeof(t_listps));
		if (!node)
		{
			free_list(stack_a);
			return (NULL);
		}
		node->content = nums[i];
		node->next = NULL;
		ft_lstadd_back(&stack_a, node);
		i++;
	}
	return (stack_a);
}

void	algorithm_sel(int *num, int total_nums)
{
	t_listps	*stack_a;					
	t_listps	*stack_b;

	stack_a = create_lists(num, total_nums);
	stack_b = NULL;
	assign_index (stack_a, total_nums);
	if (total_nums > 1 && total_nums <= 5)
		sort_small (&stack_a, &stack_b, total_nums);
	if (total_nums >= 6)
		sort_chunk (&stack_a, &stack_b, total_nums);
	free_list (stack_a);
	free_list (stack_b);
}
