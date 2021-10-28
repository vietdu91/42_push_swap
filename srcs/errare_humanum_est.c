/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errare_humanum_est.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:22:11 by emtran            #+#    #+#             */
/*   Updated: 2021/10/28 11:30:27 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

int	check_erratum_tab(t_stack *t_a, t_stack *t_b, t_stack *t_g)
{
	int	a;

	if (check_erratum_arg(t_a->tab, t_a->size) == 1)
	{
		free_the_tablettes(t_a, t_b, t_g);
		exit(EXIT_FAILURE);
	}
	a = 0;
	while (a < t_a->size - 3)
	{
		if (a == t_a->size - 3)
		{
			if (t_a->tab[a] < t_a->tab[a + 1])
				return (1);
		}
		else if (t_a->tab[a] > t_a->tab[a + 1])
			return (0);
		a++;
	}
	return (1);
}
