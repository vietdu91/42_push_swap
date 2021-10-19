/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_renverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:52:45 by emtran            #+#    #+#             */
/*   Updated: 2021/10/18 14:43:35 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	renverse_a(t_stack *t_stacka)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stacka->size - 2;
	a = the_last;
	swapper = t_stacka->tab[the_last];
	while (a > t_stacka->pos)
	{
		t_stacka->tab[a] = t_stacka->tab[a - 1];
		a--;
	}
	t_stacka->tab[t_stacka->pos] = swapper;
	ft_putstr("rra\n", 1);
}

void	renverse_b(t_stack *t_stackb)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stackb->size - 2;
	a = the_last;
	swapper = t_stackb->tab[the_last];
	while (a > t_stackb->pos)
	{
		t_stackb->tab[a] = t_stackb->tab[a - 1];
		a--;
	}
	t_stackb->tab[t_stackb->pos] = swapper;
	ft_putstr("rrb\n", 1);
}

void	double_renverse(t_stack *t_stacka, t_stack *t_stackb)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stacka->size - 2;
	a = the_last;
	swapper = t_stacka->tab[the_last];
	while (a > t_stacka->pos)
	{
		t_stacka->tab[a] = t_stacka->tab[a - 1];
		a--;
	}
	t_stacka->tab[t_stacka->pos] = swapper;
	the_last = t_stackb->size - 2;
	a = the_last;
	swapper = t_stackb->tab[the_last];
	while (a > t_stackb->pos)
	{
		t_stackb->tab[a] = t_stackb->tab[a - 1];
		a--;
	}
	t_stackb->tab[t_stackb->pos] = swapper;
	ft_putstr("rrr\n", 1);
}
