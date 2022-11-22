/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:55:04 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/22 16:51:11 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_data **stack, char *str)
{
	t_data	*first;
	t_data	*second;
	t_data	*third;

	if (stack && *stack && (*stack)->next)
	{
		first = *stack;
		second = first->next;
		*stack = second;
		if (second->next)
			third = second->next;
		else
			third = NULL;
		first->next = third;
		second->next = first;
		ft_putstr_fd(str, 1);
	}
}

void	ss(t_data **stack_a, t_data **stack_b)
{
	swap(stack_a, "sa\n");
	swap(stack_b, "sb\n");
	ft_putstr_fd("ss\n", 1);
}
