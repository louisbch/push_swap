/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cell.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:25:26 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/08 16:06:58 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_add_cell(t_data **cell, int val)
{
	t_data	*tmp;
	t_data	*new;

	tmp = malloc(sizeof(t_data));
	
	while (tmp)
	{
		
	}
	return (tmp);
}

void	lst_new(int val)
{
	t_data *tmp;
	
	tmp = malloc(sizeof(t_data));
	if (!tmp)
		return ;
	tmp->next = NULL;
	tmp->value = val;
	return (tmp)
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