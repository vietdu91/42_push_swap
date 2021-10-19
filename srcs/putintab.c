/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putintab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:00:43 by emtran            #+#    #+#             */
/*   Updated: 2021/10/19 10:40:48 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	sort_ghost(t_stack *t_ghost)
{
	int	strong;
	int	permut;
	int	a;
	int	tmp;

	strong = -1;
	permut = 0;
	while (permut == 0)
	{
		permut = 1;
		strong++;
		a = 0;
		while (a < t_ghost->size - 2 - strong)
		{
			if (t_ghost->tab[a] > t_ghost->tab[a + 1])
			{
				permut = 0;
				tmp = t_ghost->tab[a];
				t_ghost->tab[a] = t_ghost->tab[a + 1];
				t_ghost->tab[a + 1] = tmp;
			}
			a++;
		}
	}
}

long int	*putintab(int size, char **old_tab)
{
	long int	*tab;
	int			a;

	a = 0;
	tab = (long int *)malloc(sizeof(long int) * size - 1);
	if (!tab)
		return (0);
	while (a < size - 1)
	{
		tab[a] = ft_atoi(old_tab[a + 1]);
		a++;
	}
	return (tab);
}

long int	*init_tab(int size)
{
	long int	*tab;
	int			a;

	a = 0;
	tab = (long int *)malloc(sizeof(long int) * size - 1);
	if (!tab)
		return (0);
	while (a < size - 1)
	{
		tab[a] = 0;
		a++;
	}
	return (tab);
}
