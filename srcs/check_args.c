/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:42:59 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/08 15:23:07 by lbouchon         ###   ########.fr       */
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
		i = 1;
		tab = ft_split(av[1], ' ');
		while (tab[i])
		{
			*stack = ft_add_cell(*stack, ft_atoi(tab[i]));
			i++;
		}
	}
}

char	**ft_more_args(int ac, char **av)
{
	char	**tab;
	
	tab = malloc(sizeof(char) * (ac - 1));
	if (!tab)
		return (NULL);
	tab = av + 1;
	return (tab);
}
