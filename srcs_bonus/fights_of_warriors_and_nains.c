/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fights_of_warriors_and_nains.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:14:00 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 16:37:57 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_bonus.h"

int	is_the_warrior_of_2_stack(t_stack *t_stack, int nbr)
{
	int	i;

	i = t_stack->size - 1;
	while (i > t_stack->pos_a)
	{
		if (t_stack->stacka[i] < nbr)
			return (0);
		i--;
	}
	i = t_stack->size - 1;
	while (i < t_stack->pos_b)
	{
		if (t_stack->stackb[i] < nbr)
			return (0);
		i--;
	}
	return (1);
}

int	is_the_nain_of_2_stack(t_stack *t_stack, int nbr)
{
	int	i;

	i = t_stack->pos_a;
	while (i < t_stack->size - 1)
	{
		if (t_stack->stacka[i] > nbr)
			return (0);
		i++;
	}
	i = t_stack->pos_b;
	while (i < t_stack->size - 1)
	{
		if (t_stack->stackb[i] > nbr)
			return (0);
		i++;
	}
	return (1);
}
