/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:37:26 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/22 16:45:01 by lbouchon         ###   ########.fr       */
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
	int				index;
	struct s_data	*next;
}	t_data;

/*--CHECK_ARGS.C--*/

void	ft_two_args(int ac, char **av, t_data **stack);
char	**ft_more_args(int ac, char **av, t_data **stack);
void	check_doubles(t_data *cell);

/*--FT_SPLIT.C--*/

char	**ft_split(char const *s, char c);

/*--PUSH.C--*/

void	pa(t_data **stack_a, t_data **stack_b);
void	pb(t_data **stack_a, t_data **stack_b);
void	push(t_data **src, t_data **dest);

/*--SWAP.C--*/

void	swap(t_data **stack, char *str);
void	ss(t_data **stack_a, t_data **stack_b);

/*--CELL.C--*/

t_data	*ft_add_cell(t_data *cell, int val);
t_data	*lst_new(int val);
void	ft_print_list(t_data *cell);

/*--ROTATE.C--*/

void	rotate(t_data **stack);
void	ra(t_data **stack_a);
void	rb(t_data **stack_b);
void	rr(t_data **stack_a, t_data **stack_b);

/*--REVERSE.C--*/

void	reverse_rotate(t_data **stack);
void	rra(t_data **stack);
void	rrb(t_data **stack);
void	rrr(t_data **stack_a, t_data **stack_b);

/*--FT_UTILS.C--*/

void	ft_free_tab(char **strs);
int		ft_atoi(char *str);
void	ft_print_list(t_data *cell);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(const char *s, int fd);
void	exit_error(void);

#endif