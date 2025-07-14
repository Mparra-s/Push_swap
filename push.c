/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:59:48 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/25 15:10:04 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_listps **dest, t_listps **origin)
{
	t_listps	*tmp;

	if (!origin || !*origin)
		return ;
	tmp = *origin;
	*origin = (*origin)->next;
	tmp->next = NULL;
	ft_lstadd_frontps (dest, tmp);
}

void	pa(t_listps **stack_a, t_listps **stack_b)
{
	push (stack_a, stack_b);
	ft_printf ("pa\n");
}

void	pb(t_listps **stack_a, t_listps **stack_b)
{
	push (stack_b, stack_a);
	ft_printf ("pb\n");
}
