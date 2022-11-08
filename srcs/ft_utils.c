/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:34:07 by lbouchon          #+#    #+#             */
/*   Updated: 2022/11/08 11:41:30 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_isdigit(char *str)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			j++;
		else if (str[i] < 48 && str[i] > 57)
			return (0);
		i++;
	}
	return (j);
}

int	check_arg(const char *str)
{
	size_t		i;
	long int	res;
	int			sign;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		if (res * sign > INT_MAX)
			return (-1);
		if (res * sign < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	size_t		i;
	long int	res;
	int			sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		if (res * sign > INT_MAX)
			return (-1);
		if (res * sign < INT_MIN)
			return (0);
		i++;
	}
	return (res * sign);
}

void	ft_free_tab(char **strs)
{
	int	i;

	if (strs)
	{
		i = 0;
		while (strs[i++])
		{
			free(strs[i]);
			strs[i] = NULL;
		}
	}
	free(strs);
	strs = NULL;
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
