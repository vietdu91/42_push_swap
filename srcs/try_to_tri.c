/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_to_tri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:45:49 by emtran            #+#    #+#             */
/*   Updated: 2021/09/26 14:58:45 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	one_two_three_viva_algerie(t_stack *t_stacka)
{
	renverse_a(t_stacka);
}

void 	two_be_three(t_stack *t_stacka)
{
	int	pos;

	pos = t_stacka->pos;
	if (t_stacka->tab[pos] < t_stacka->tab[pos + 1] 
		&& t_stacka->tab[pos + 1] < t_stacka->tab[pos + 2])
		return ;
	if (t_stacka->tab[pos] < t_stacka->tab[pos + 1])
	{
		renverse_a(t_stacka);
		if (t_stacka->tab[pos] > t_stacka->tab[pos + 1])
			swap_a(t_stacka);
	}
	else if (t_stacka->tab[pos + 1] > t_stacka->tab[pos + 2])
	{
		swap_a(t_stacka);
		renverse_a(t_stacka);
	}
	else
	{
		if (t_stacka->tab[pos] < t_stacka->tab[pos + 2])
			swap_a(t_stacka);
		else
			rotate_a(t_stacka);
	}
}

void	citroen_c4(t_stack *t_stacka, t_stack *t_stackb)
{
	int	pos;

	if (already_try(t_stacka) == 0)
	{
		push_b(t_stacka, t_stackb);
		two_be_three(t_stacka);
	}
	if (t_stacka->no_try != 1)
		push_a(t_stacka, t_stackb);
	pos = t_stacka->pos;
	if (t_stacka->tab[pos] > t_stacka->tab[pos + 1]
		&& t_stacka->tab[pos] < t_stacka->tab[pos + 2])
		swap_a(t_stacka);
	else if (t_stacka->tab[pos] > t_stacka->tab[t_stacka->size - 2])
		rotate_a(t_stacka);
	else if (t_stacka->tab[pos] > t_stacka->tab[pos + 2]
		&& t_stacka->tab[pos] < t_stacka->tab[pos + 3])
	{
		renverse_a(t_stacka);
		swap_a(t_stacka);
		rotate_a(t_stacka);
		rotate_a(t_stacka);
	}
}

void	five_guys_peanuts(t_stack *t_stacka, t_stack *t_stackb)
{	
	int pos;

	if (already_try(t_stacka) == 0)
	{
		push_b(t_stacka, t_stackb);
		citroen_c4(t_stacka, t_stackb);
	}
	if (t_stacka->no_try != 1)
		push_a(t_stacka, t_stackb);
	pos = t_stacka->pos;
	if (t_stacka->tab[pos] > t_stacka->tab[pos + 1]
		&& t_stacka->tab[pos] < t_stacka->tab[pos + 2])
		swap_a(t_stacka);
	else if (t_stacka->tab[pos] > t_stacka->tab[t_stacka->size - 2])
		rotate_a(t_stacka);
	else if (t_stacka->tab[pos] > t_stacka->tab[pos + 2]
		&& t_stacka->tab[pos] < t_stacka->tab[pos + 4])
	{
		renverse_a(t_stacka);
		swap_a(t_stacka);
		if (t_stacka->tab[pos + 1] < t_stacka->tab[t_stacka->size - 2]
			|| ((t_stacka->tab[pos] < t_stacka->tab[t_stacka->size - 2])
				&& (t_stacka->tab[pos] < t_stacka->tab[pos + 1])))
		{
			renverse_a(t_stacka);
			swap_a(t_stacka);
		}
		rotate_a(t_stacka);
		rotate_a(t_stacka);
		if (t_stacka->tab[pos] > t_stacka->tab[t_stacka->size - 2])
			rotate_a(t_stacka);
	}
}
