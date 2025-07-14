/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 10:36:53 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/26 12:51:33 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_chunk(t_listps **stack_a, t_listps **stack_b, int size)
{
	assign_index (*stack_a, size);
	push_chunk_b (stack_a, stack_b, size);
	push_back (stack_a, stack_b);
}

void	push_chunk_b(t_listps **stack_a, t_listps **stack_b, int size)
{
	int	chunk;
	int	push;
	int	i;

	if (size <= 100)
		chunk = 20;
	else
		chunk = 53;
	push = 0;
	i = chunk;
	while (push < size)
	{
		if ((*stack_a)->key < i)
		{
			pb (stack_a, stack_b);
			push++;
			if ((*stack_b)->key < i - (chunk / 2))
				rb (stack_a, stack_b);
		}
		else
			ra (stack_a, stack_b);
		if (push >= i)
			i = i + chunk;
	}
}

void	push_back(t_listps **stack_a, t_listps **stack_b)
{
	int	max_pos;
	int	size_b;

	while (*stack_b)
	{
		max_pos = find_max_pos (*stack_b);
		size_b = list_size (*stack_b);
		if (max_pos <= list_size (*stack_b) / 2)
		{
			while (max_pos > 0)
			{
				rb (stack_a, stack_b);
				max_pos--;
			}
		}
		else
		{
			while (max_pos < size_b)
			{
				rrb (stack_a, stack_b);
				max_pos++;
			}
		}
		pa (stack_a, stack_b);
	}
}

int	find_max_pos(t_listps *stack)
{
	t_listps	*temp;
	int			max;
	int			pos;
	int			i;

	max = stack->key;
	pos = 0;
	i = 0;
	temp = stack;
	while (temp)
	{
		if (temp->key > max)
		{
			max = temp->key;
			pos = i;
		}
		temp = temp->next;
		i++;
	}
	return (pos);
}

int	list_size(t_listps *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
