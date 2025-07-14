/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 11:08:11 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/25 15:06:32 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_listps **stack)
{
	int	temp_content;
	int	temp_key;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	temp_content = (*stack)->content;
	temp_key = (*stack)->key;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = temp_content;
	(*stack)->key = (*stack)->next->key;
	(*stack)->next->key = temp_key;
}

void	sa(t_listps **stack_a, t_listps **stack_b)
{
	(void)(stack_b);
	swap (stack_a);
	ft_printf ("sa\n");
}

void	sb(t_listps **stack_a, t_listps **stack_b)
{
	(void)(stack_a);
	swap (stack_b);
	ft_printf ("sb\n");
}

void	ss(t_listps **stack_a, t_listps **stack_b)
{
	swap (stack_a);
	swap (stack_b);
	ft_printf ("ss\n");
}
