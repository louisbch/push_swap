/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:37:26 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/08 15:12:37 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_data
{
	int				value;
	struct s_data	*next;
}	t_data;

void	ft_two_args(int ac, char **av, t_data **stack);
char	**ft_more_args(int ac, char **av);
char	**ft_split(char const *s, char c);
void	ft_free_tab(char **strs);
int		ft_atoi(char *str);
size_t	ft_strlen(const char *str);
t_data	*ft_add_cell(t_data *cell, int val);
void	ft_print_list(t_data *cell);

#endif