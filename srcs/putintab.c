/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putintab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:00:43 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 20:10:27 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void	putintab(t_stack *t_s, char **tab)
{
	int	a;

	a = 0;
	t_s->tab = malloc(sizeof(long int) * t_s->size - 1);
	if (!t_s->tab)
		return ;
	while (a < t_s->size - 1)
	{
		t_s->tab[a] = ft_atoi(tab[a + 1], t_s);
		a++;
	}
}

void	init_tab(t_stack *t_stack)
{
	int			a;

	a = 0;
	t_stack->tab = malloc(sizeof(long int) * t_stack->size - 1);
	if (!t_stack->tab)
		return ;
	while (a < t_stack->size - 1)
	{
		t_stack->tab[a] = 0;
		a++;
	}
}

void	init_tab_serie(t_stack *t_stack)
{
	int			a;

	a = 0;
	t_stack->tab_serie = malloc(sizeof(long int) * t_stack->size - 1);
	if (!t_stack->tab_serie)
		return ;
	while (a < t_stack->size - 1)
	{
		t_stack->tab_serie[a] = 0;
		a++;
	}
}

void	free_the_tablettes(t_stack *t_a, t_stack *t_b, t_stack *t_g)
{
	free(t_a->tab);
	free(t_b->tab);
	free(t_g->tab);
}
