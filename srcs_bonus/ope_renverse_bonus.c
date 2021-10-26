/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_renverse_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:48:54 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 16:15:56 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_bonus.h"

void	renverse_a(t_stack *t_stack)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stack->size - 2;
	a = the_last;
	swapper = t_stack->stacka[the_last];
	while (a > t_stack->pos_a)
	{
		t_stack->stacka[a] = t_stack->stacka[a - 1];
		a--;
	}
	t_stack->stacka[t_stack->pos_a] = swapper;
}

void	renverse_b(t_stack *t_stack)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stack->size - 2;
	a = the_last;
	swapper = t_stack->stackb[the_last];
	while (a > t_stack->pos_b)
	{
		t_stack->stackb[a] = t_stack->stackb[a - 1];
		a--;
	}
	t_stack->stackb[t_stack->pos_b] = swapper;
}

void	double_renverse(t_stack *t_stack)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stack->size - 2;
	a = the_last;
	swapper = t_stack->stacka[the_last];
	while (a > t_stack->pos_a)
	{
		t_stack->stacka[a] = t_stack->stacka[a - 1];
		a--;
	}
	t_stack->stacka[t_stack->pos_a] = swapper;
	the_last = t_stack->size - 2;
	a = the_last;
	swapper = t_stack->stackb[the_last];
	while (a > t_stack->pos_b)
	{
		t_stack->stackb[a] = t_stack->stackb[a - 1];
		a--;
	}
	t_stack->stackb[t_stack->pos_b] = swapper;
}
