/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evelyne_thomas.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:22:54 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 20:25:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	i_dont_know_choose_between_two_beauties(t_stack *t_a, int a)
{
	int	med;

	med = ((t_a->size - 1) - ((t_a->size - t_a->pos) / 2));
	if (a < med)
		t_a->for_ra++;
	else
		t_a->for_rra++;
}

void	this_is_my_choice(t_stack *t_a, t_stack *t_b)
{
	while (t_a->for_ra > 0 && t_b->for_rb > 0)
	{
		double_rotate(t_a, t_b);
		t_a->for_ra--;
		t_b->for_rb--;
	}
	while (t_a->for_rra > 0 && t_b->for_rrb > 0)
	{
		double_renverse(t_a, t_b);
		t_a->for_rra--;
		t_b->for_rrb--;
	}
	i_love_rotate_you(t_a, t_b);
	i_love_renverse_you(t_a, t_b);
}

void	i_love_rotate_you(t_stack *t_a, t_stack *t_b)
{
	while (t_a->for_ra > 0 && t_b->for_rb <= 0)
	{
		rotate_a(t_a);
		t_a->for_ra--;
	}
	while (t_a->for_ra <= 0 && t_b->for_rb > 0)
	{	
		rotate_b(t_b);
		t_b->for_rb--;
	}
}

void	i_love_renverse_you(t_stack *t_a, t_stack *t_b)
{
	while (t_a->for_rra > 0 && t_b->for_rrb <= 0)
	{
		renverse_a(t_a);
		t_a->for_rra--;
	}
	while (t_a->for_rra <= 0 && t_b->for_rrb > 0)
	{
		renverse_b(t_b);
		t_b->for_rrb--;
	}
}
