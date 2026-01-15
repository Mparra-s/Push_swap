/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoryrthm_big.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:09:24 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/24 16:27:12 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*array_index(int *array, int total_nums)
{
	int	temp;
	int	i;
	int	j;

	temp = 0;
	i = 0;
	j = 0;
	while (i < total_nums - 1)
	{
		j = 0;
		while (j < total_nums - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (array);
}

void	assign_keys(t_listps *stack, int *array, int total_nums)
{
	int	i;

	while (stack)
	{
		i = 0;
		while (i < total_nums)
		{
			if (array[i] == stack->content)
			{
				stack->key = i;
				break ;
			}
			i++;
		}
		stack = stack->next;
	}
}

void	assign_index(t_listps *stack, int total_nums)
{
	t_listps	*tmp;
	int			*array;
	int			i;

	i = 0;
	tmp = stack;
	array = malloc(sizeof(int) * total_nums);
	if (!array)
		return ;
	while (tmp)
	{
		array[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	i = 0;
	array = array_index(array, total_nums);
	assign_keys(stack, array, total_nums);
	free(array);
}
