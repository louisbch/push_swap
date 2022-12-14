/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:17:27 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/22 16:48:40 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_data	*stack_a;
	t_data	*stack_b;
	char	**tab;

	stack_a = NULL;
	if (ac > 2)
	{
		tab = ft_more_args(ac, av, &stack_a);
		check_doubles(stack_a);
		reverse_rotate(&stack_a);
		ft_print_list(stack_a);
	}
	else if (ac == 2)
	{
		ft_two_args(ac, av, &stack_a);
		check_doubles(stack_a);
		ft_print_list(stack_a);
	}
	return (0);
}
