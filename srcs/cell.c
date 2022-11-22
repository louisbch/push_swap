/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cell.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:25:26 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/22 16:45:54 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_data	*ft_add_cell(t_data *cell, int val)
{
	t_data	*tmp;
	t_data	*new;

	tmp = cell;
	if (!tmp)
		tmp = lst_new(val);
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		new = malloc(sizeof(t_data));
		if (new)
		{
			new->value = val;
			new->next = NULL;
			tmp->next = new;
		}
		tmp = cell;
	}
	return (tmp);
}

t_data	*lst_new(int val)
{
	t_data	*tmp;

	tmp = malloc(sizeof(t_data));
	if (!tmp)
		return (NULL);
	tmp->value = val;
	tmp->next = NULL;
	return (tmp);
}

void	ft_print_list(t_data *cell)
{
	while (cell)
	{
		printf("[%p][%d]\n", cell, cell->value);
		cell = cell->next;
		if (!cell)
			printf("[%p]NULL\n", cell);
	}
}
