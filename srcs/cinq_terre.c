/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cinq_terre.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:32:03 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 19:29:05 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	one_two_three_viva_algerie(t_stack *t_stacka)
{
	renverse_a(t_stacka);
}

void	two_be_three(t_stack *t_stacka)
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
	while (t_stacka->pos < 2)
	{
		while (find_min(t_stacka) >= 2)
			renverse_a(t_stacka);
		if (find_min(t_stacka) == t_stacka->pos + 1)
			swap_a(t_stacka);
		push_b(t_stacka, t_stackb);
	}	
	two_be_three(t_stacka);
	while (t_stacka->pos > 0)
		push_a(t_stacka, t_stackb);
}
