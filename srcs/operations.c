/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:27:58 by emtran            #+#    #+#             */
/*   Updated: 2021/09/20 15:10:09 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

// SA
void	swap_a(t_stack *t_stacka)
{
	int	swapper;

	swapper = t_stacka->tab[t_stacka->pos];
	t_stacka->tab[t_stacka->pos] = t_stacka->tab[t_stacka->pos + 1];
	t_stacka->tab[t_stacka->pos + 1] = swapper;
	ft_putstr("sa\n");
}

// SB
void	swap_b(t_stack *t_stackb)
{
	int	swapper;

	swapper = t_stackb->tab[t_stackb->pos];
	t_stackb->tab[t_stackb->pos] = t_stackb->tab[t_stackb->pos + 1];
	t_stackb->tab[t_stackb->pos + 1] = swapper;
	ft_putstr("sb\n");
}

// SS
void	double_swap(t_stack *t_stacka, t_stack *t_stackb)
{
	int	swapper;

	swapper = t_stacka->tab[t_stacka->pos];
	t_stacka->tab[t_stacka->pos] = t_stacka->tab[t_stacka->pos + 1];
	t_stacka->tab[t_stacka->pos + 1] = swapper;
	swapper = t_stackb->tab[t_stackb->pos];
	t_stackb->tab[t_stackb->pos] = t_stackb->tab[t_stackb->pos + 1];
	t_stackb->tab[1] = swapper;
	ft_putstr("ss\n");
}

// RA
void	rotate_a(t_stack *t_stacka)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stacka->size - 2;
	a = t_stacka->pos + 1;
	swapper = t_stacka->tab[t_stacka->pos];
	while (a <= the_last)
	{
		t_stacka->tab[a - 1] = t_stacka->tab[a];
		a++;
	}
	t_stacka->tab[the_last] = swapper;
	ft_putstr("ra\n");
}

// RB
void	rotate_b(t_stack *t_stackb)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stackb->size - 2;
	a = t_stackb->pos + 1;
	swapper = t_stackb->tab[t_stackb->pos];
	while (a <= the_last)
	{
		t_stackb->tab[a - 1] = t_stackb->tab[a];
		a++;
	}
	t_stackb->tab[the_last] = swapper;
	ft_putstr("rb\n");
}

// RR
void	double_rotate(t_stack *t_stacka, t_stack *t_stackb)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stacka->size - 2;
	a = t_stacka->pos + 1;
	swapper = t_stacka->tab[t_stacka->pos];
	while (a <= the_last)
	{
		t_stacka->tab[a - 1] = t_stacka->tab[a];
		a++;
	}
	t_stacka->tab[the_last] = swapper;
	the_last = t_stackb->size - 2;
	a = t_stackb->pos + 1;
	swapper = t_stackb->tab[t_stackb->pos];
	while (a <= the_last)
	{
		t_stackb->tab[a - 1] = t_stackb->tab[a];
		a++;
	}
	t_stackb->tab[the_last] = swapper;
	ft_putstr("rr\n");
}

// RRA
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
	ft_putstr("rra\n");
}

// RRB
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
	ft_putstr("rrb\n");
}

// RRS
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
	t_stacka->tab[t_stackb->pos] = swapper;
	the_last = t_stackb->size - 2;
	a = the_last;
	swapper = t_stackb->tab[the_last];
	while (a > t_stackb->pos)
	{
		t_stackb->tab[a] = t_stackb->tab[a - 1];
		a--;
	}
	t_stackb->tab[t_stackb->pos] = swapper;
	ft_putstr("rrr\n");
}

// PA
void	push_a(t_stack *t_stacka, t_stack *t_stackb)
{
	int	swapper;

	swapper = t_stackb->tab[t_stackb->pos];
	t_stacka->tab[t_stacka->pos - 1] = swapper;
	t_stackb->tab[t_stackb->pos] = 0;
	t_stackb->pos++;
	t_stacka->pos--;
	ft_putstr("pa\n");
}

// PB
void	push_b(t_stack *t_stacka, t_stack *t_stackb)
{
	int	swapper;

	swapper = t_stacka->tab[t_stacka->pos];
	t_stackb->tab[t_stackb->pos - 1] = swapper;
	t_stacka->tab[t_stacka->pos] = 0;
	t_stacka->pos++;
	t_stackb->pos--;
	ft_putstr("pb\n");
}
