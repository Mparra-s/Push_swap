/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythm_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 10:57:30 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/26 12:58:42 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small(t_listps **stack_a, t_listps **stack_b, int total_nums)
{
	int	num_1;
	int	num_2;

	num_1 = (*stack_a)->content;
	num_2 = (*stack_a)->next->content;
	if (total_nums == 2 && (num_1 > num_2))
		sa(stack_a, stack_b);
	if (total_nums == 3)
		sort_small_3 (stack_a, stack_b);
	if (total_nums == 4)
		sort_small_4 (stack_a, stack_b);
	if (total_nums == 5)
		sort_small_5 (stack_a, stack_b);
}

void	sort_small_3(t_listps **stack_a, t_listps **stack_b)
{
	int	num_1;
	int	num_2;
	int	num_3;

	num_1 = (*stack_a)->content;
	num_2 = (*stack_a)->next->content;
	num_3 = (*stack_a)->next->next->content;
	if ((num_1 > num_2) && (num_2 > num_3))
	{
		sa (stack_a, stack_b);
		rra (stack_a, stack_b);
	}
	if ((num_1 > num_3) && (num_3 > num_2))
		ra (stack_a, stack_b);
	if ((num_2 > num_1) && (num_1 > num_3))
		rra (stack_a, stack_b);
	if ((num_2 > num_3) && (num_3 > num_1))
	{
		sa (stack_a, stack_b);
		ra (stack_a, stack_b);
	}
	if ((num_3 > num_1) && (num_1 > num_2))
		sa(stack_a, stack_b);
}

void	sort_small_4(t_listps **stack_a, t_listps **stack_b)
{
	while ((*stack_a)->key != 0)
		ra(stack_a, stack_b);
	pb(stack_a, stack_b);
	sort_small_3(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_small_5(t_listps **stack_a, t_listps **stack_b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*stack_a)->key == 0 || (*stack_a)->key == 1)
		{
			pb (stack_a, stack_b);
			i++;
		}
		else
			ra (stack_a, stack_b);
	}
	if ((*stack_b)->key < (*stack_b)->next->key)
		sb (stack_a, stack_b);
	sort_small_3(stack_a, stack_b);
	pa (stack_a, stack_b);
	pa (stack_a, stack_b);
}
