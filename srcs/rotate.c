/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:53:06 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/22 16:50:53 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_data **stack)
{
	t_data	*head;
	t_data	*middle;

	if (stack && *stack)
	{
		head = *stack;
		middle = head->next;
		while ((*stack)->next)
			*stack = (*stack)->next;
		(*stack)->next = head;
		*stack = middle;
		head->next = NULL;
	}
}

void	ra(t_data **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_data **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_data **stack_a, t_data **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", 1);
}
