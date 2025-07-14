/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:38:51 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/25 15:09:54 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_listps **stack)
{
	t_listps	*final;
	t_listps	*penultimate;

	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	penultimate = *stack;
	while (penultimate->next->next != NULL)
		penultimate = penultimate->next;
	final = penultimate->next;
	penultimate->next = NULL;
	final->next = *stack;
	*stack = final;
}

void	rra(t_listps **stack_a, t_listps **stack_b)
{
	(void) stack_b;
	reverse (stack_a);
	ft_printf ("rra\n");
}

void	rrb(t_listps **stack_a, t_listps **stack_b)
{
	(void) stack_a;
	reverse (stack_b);
	ft_printf ("rrb\n");
}

void	rrr(t_listps **stack_a, t_listps **stack_b)
{
	reverse (stack_a);
	reverse (stack_b);
	ft_printf ("rrr\n");
}
