/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_val.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparra-s <mparra-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:08:12 by mparra-s          #+#    #+#             */
/*   Updated: 2025/06/25 09:26:07 by mparra-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	val_let(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == 32 || str[i] == 9
				|| str[i] == '-' || str[i] == '+'))
			ft_out();
		if ((str[i] == '-' || str[i] == '+') && !(str[i + 1] >= '0'
				&& str[i + 1] <= '9'))
			ft_out();
		if ((str[i] >= '0' && str[i] <= '9')
			&& !((str[i + 1] >= '0' && str[i + 1] <= '9')
				|| str[i + 1] == 32
				|| str[i + 1] == 9 || str[i + 1] == '\0'))
			ft_out();
		i++;
	}
	return (1);
}

int	val_num(int *nums, int size)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (i < size)
	{
		a = 0;
		while (a < i)
		{
			if (nums[a] == nums[i])
				return (0);
			a++;
		}
		i++;
	}
	return (1);
}

int	ft_limit(long num)
{
	long	temp;

	temp = num;
	if (temp < INT_MIN || temp > INT_MAX)
		ft_out();
	return (1);
}

int	ft_atol(const char *nptr)
{
	long	num;
	int		i;
	int		sign;

	sign = 1;
	num = 0;
	i = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr [i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while ((nptr[i] >= '0' && nptr[i] <= '9') && nptr[i] != '\0')
	{
		num = 10 * num + (nptr[i] - '0');
		i++;
	}
	ft_limit (sign * num);
	return (sign * num);
}

void	free_array(char ***array, int n_arrays)
{
	int	i;
	int	j;

	i = 0;
	while (i < n_arrays)
	{
		j = 0;
		while (array[i][j])
			free(array[i][j++]);
		free(array[i]);
		i++;
	}
	free(array);
}
