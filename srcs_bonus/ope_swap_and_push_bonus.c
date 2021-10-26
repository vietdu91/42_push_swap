/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_swap_and_push_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:01:43 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 16:13:27 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_bonus.h"

void	swap_a(t_stack *t_stack)
{
	int	swapper;

	swapper = t_stack->stacka[t_stack->pos_a];
	t_stack->stacka[t_stack->pos_a] = t_stack->stacka[t_stack->pos_a + 1];
	t_stack->stacka[t_stack->pos_a + 1] = swapper;
}

void	swap_b(t_stack *t_stack)
{
	int	swapper;

	swapper = t_stack->stackb[t_stack->pos_b];
	t_stack->stackb[t_stack->pos_b] = t_stack->stackb[t_stack->pos_b + 1];
	t_stack->stackb[t_stack->pos_b + 1] = swapper;
}

void	double_swap(t_stack *t_stack)
{
	int	swapper;

	swapper = t_stack->stacka[t_stack->pos_a];
	t_stack->stacka[t_stack->pos_a] = t_stack->stacka[t_stack->pos_a + 1];
	t_stack->stacka[t_stack->pos_a + 1] = swapper;
	swapper = t_stack->stackb[t_stack->pos_b];
	t_stack->stackb[t_stack->pos_b] = t_stack->stackb[t_stack->pos_b + 1];
	t_stack->stackb[t_stack->pos_b + 1] = swapper;
}

void	push_a(t_stack *t_stack)
{
	int	swapper;

	if (t_stack->pos_b == t_stack->size - 1)
		return ;
	swapper = t_stack->stackb[t_stack->pos_b];
	t_stack->stacka[t_stack->pos_a - 1] = swapper;
	t_stack->stackb[t_stack->pos_b] = 0;
	t_stack->pos_b++;
	t_stack->pos_a--;
}

void	push_b(t_stack *t_stack)
{
	int	swapper;

	if (t_stack->pos_a == t_stack->size - 1)
		return ;
	swapper = t_stack->stacka[t_stack->pos_a];
	t_stack->stackb[t_stack->pos_b - 1] = swapper;
	t_stack->stacka[t_stack->pos_a] = 0;
	t_stack->pos_a++;
	t_stack->pos_b--;
}
