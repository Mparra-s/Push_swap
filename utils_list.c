/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 09:02:34 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/25 09:29:27 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_listps **lst, t_listps *new)
{
	t_listps	*last;

	last = *lst;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

void	ft_lstadd_frontps(t_listps **lst, t_listps *new)
{
	new->next = *lst;
	*lst = new;
}

t_listps	*ft_lstlast(t_listps *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

t_listps	*ft_lstnew(int content)
{
	t_listps	*sentence;

	sentence = (t_listps *)malloc(sizeof (t_listps));
	if (sentence == NULL)
		return (NULL);
	sentence->content = content;
	sentence->key = 0;
	sentence->next = NULL;
	return (sentence);
}

int	ft_lstsize(t_listps *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
