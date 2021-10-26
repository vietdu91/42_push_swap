/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cent_years_of_solitude.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:33:16 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 19:27:29 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	the_decroissance(t_stack *t_stacka)
{
	int	a;

	a = 0;
	while (a < t_stacka->size - 2)
	{
		if (t_stacka->tab[a] < t_stacka->tab[a + 1])
			return (1);
		a++;
	}
	return (0);
}

void	vers_le_stonks(t_stack *t_stacka, t_stack *t_stackb)
{
	int	a;

	a = 0;
	while (t_stacka->pos < t_stacka->size - 1)
	{
		push_b(t_stacka, t_stackb);
		a++;
	}	
	a = 0;
	while (t_stackb->pos < t_stackb->size - 1)
	{
		renverse_b(t_stackb);
		push_a(t_stacka, t_stackb);
		a++;
	}
}

void	chuck_your_wife(t_stack *t_a, t_stack *t_b, t_stack *t_g)
{
	int	med_g;
	int	i;

	i = 0;
	med_g = t_g->tab[(t_a->size - 1) / 2];
	while (i < t_a->size - 1)
	{
		if (t_a->tab[t_a->pos] < med_g)
			push_b(t_a, t_b);
		else
			rotate_a(t_a);
		i++;
	}
	while (t_a->pos <= t_a->size - 5)
		push_b(t_a, t_b);
	two_be_three(t_a);
}

void	ten_belles(t_stack *t_stacka, t_stack *t_stackb, t_stack *t_ghost)
{
	(void)t_stackb;
	sort_ghost(t_ghost);
	if (the_decroissance(t_stacka) == 0)
		vers_le_stonks(t_stacka, t_stackb);
	else
	{
		push_b_only_bads(t_stacka, t_stackb, t_ghost);
		while (t_stackb->pos < t_stackb->size - 1)
			insert_inspi_here(t_stacka, t_stackb);
	}
}
