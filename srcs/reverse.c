/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:50:03 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/22 16:50:04 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
tmp -> temporaire de liste
end -> dernier element a mettre au debut
beforelast -> avant dernier element

Placer le dernier element en premier.
*/

void	reverse_rotate(t_data **stack)
{
	t_data	*tmp;
	t_data	*end;
	t_data	*beforelast;

	if (stack && *stack)
	{
		tmp = *stack;
		while (tmp->next->next)
			tmp = tmp->next;
		beforelast = tmp;
		end = tmp->next;
		end->next = *stack;
		*stack = end;
		beforelast->next = NULL;
	}
}

void	rra(t_data **stack)
{
	reverse_rotate(stack);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_data **stack)
{
	reverse_rotate(stack);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_data **stack_a, t_data **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
