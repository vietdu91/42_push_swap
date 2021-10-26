/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_rotate_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:56:56 by emtran            #+#    #+#             */
/*   Updated: 2021/10/22 17:01:25 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_bonus.h"

void	rotate_a(t_stack *t_stack)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stack->size - 2;
	a = t_stack->pos_a + 1;
	swapper = t_stack->stacka[t_stack->pos_a];
	while (a <= the_last)
	{
		t_stack->stacka[a - 1] = t_stack->stacka[a];
		a++;
	}
	t_stack->stacka[the_last] = swapper;
}

void	rotate_b(t_stack *t_stack)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stack->size - 2;
	a = t_stack->pos_b + 1;
	swapper = t_stack->stackb[t_stack->pos_b];
	while (a <= the_last)
	{
		t_stack->stackb[a - 1] = t_stack->stackb[a];
		a++;
	}
	t_stack->stackb[the_last] = swapper;
}

void	double_rotate(t_stack *t_stack)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stack->size - 2;
	a = t_stack->pos_a + 1;
	swapper = t_stack->stacka[t_stack->pos_a];
	while (a <= the_last)
	{
		t_stack->stacka[a - 1] = t_stack->stacka[a];
		a++;
	}
	t_stack->stacka[the_last] = swapper;
	the_last = t_stack->size - 2;
	a = t_stack->pos_b + 1;
	swapper = t_stack->stackb[t_stack->pos_b];
	while (a <= the_last)
	{
		t_stack->stackb[a - 1] = t_stack->stackb[a];
		a++;
	}
	t_stack->stackb[the_last] = swapper;
}
