/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 13:29:40 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/25 15:09:41 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_listps **stack)
{
	t_listps	*final;
	t_listps	*first;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	final = ft_lstlast (*stack);
	final->next = first;
}

void	ra(t_listps **stack_a, t_listps **stack_b)
{
	(void) stack_b;
	rotate (stack_a);
	ft_printf ("ra\n");
}

void	rb(t_listps **stack_a, t_listps **stack_b)
{
	(void) stack_a;
	rotate (stack_b);
	ft_printf ("rb\n");
}

void	rr(t_listps **stack_a, t_listps **stack_b)
{
	rotate (stack_a);
	rotate (stack_b);
	ft_printf ("rr\n");
}
