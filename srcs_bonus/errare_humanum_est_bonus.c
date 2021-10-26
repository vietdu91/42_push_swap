/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errare_humanum_est_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:38:17 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 16:46:13 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_bonus.h"

int	put_error(void)
{
	ft_putstr("Error\n", 2);
	return (1);
}

int	check_str_nb(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	check_erratum(int argc, char **argv)
{
	int	a;

	a = 1;
	while (a < argc)
	{
		if (check_str_nb(argv[a]) == 1)
			return (put_error());
		a++;
	}
	return (0);
}

int	check_erratum_arg(long int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size - 1)
	{
		b = a + 1;
		if (tab[a] < INT_MIN || tab[a] > INT_MAX)
			return (put_error());
		while (b < size - 1)
		{
			if (tab[a] == tab[b])
				return (put_error());
			b++;
		}
		a++;
	}	
	return (0);
}

int	check_erratum_tab(t_stack *t_stack)
{
	if (check_erratum_arg(t_stack->stacka, t_stack->size) == 1)
	{
		free_and_love(t_stack);
		exit(EXIT_FAILURE);
	}
	return (0);
}
