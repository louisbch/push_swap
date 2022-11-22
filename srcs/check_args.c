/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:42:59 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/22 16:46:08 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_two_args(int ac, char **av, t_data **stack)
{
	int		i;
	char	**tab;

	tab = NULL;
	if (ac == 2)
	{
		tab = ft_split(av[1], ' ');
		i = 0;
		if (!tab[i])
			exit_error();
		while (tab[i])
		{
			*stack = ft_add_cell(*stack, ft_atoi(tab[i]));
			i++;
		}
	}
}

char	**ft_more_args(int ac, char **av, t_data **stack)
{
	char	**tab;
	int		i;

	tab = malloc(sizeof(char) * (ac - 1));
	if (!tab)
		return (NULL);
	tab = av + 1;
	i = 0;
	while (tab[i])
	{
		*stack = ft_add_cell(*stack, ft_atoi(tab[i]));
		i++;
	}
	return (tab);
}

void	check_doubles(t_data *cell)
{
	t_data	*tmp;

	if (cell)
	{
		while (cell->next)
		{
			tmp = cell->next;
			while (tmp)
			{
				if (cell->value == tmp->value)
				{
					ft_putstr_fd("Error\n", 1);
					exit(EXIT_FAILURE);
				}
				tmp = tmp->next;
			}
			cell = cell->next;
		}
	}
}
