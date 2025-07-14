/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:57:37 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/26 10:14:18 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_listps *stack)
{
	t_listps	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

int	is_sorted(int *nums, int total_nums)
{
	int	i;

	i = 0;
	while (i < total_nums -1)
	{
		if (nums[i] > nums[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_out(void)
{
	ft_printf("Error\n");
	exit(1);
}
