/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   y                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:38:33 by emtran            #+#    #+#             */
/*   Updated: 2021/10/22 18:37:06 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_bonus.h"

int	is_the_good_partner(t_stack *t_stack, int nbr, int nbr2)
{
	int	i;

	if ((is_the_warrior_of_2_stack(t_stack, nbr2)
			&& is_the_nain_of_2_stack(t_stack, nbr))
		|| (is_the_warrior_of_2_stack(t_stack, nbr)
			&& is_the_nain_of_2_stack(t_stack, nbr2)))
		return (1);
	if (nbr > nbr2 || nbr == nbr2)
		return (0);
	i = t_stack->pos_a;
	while (i <= t_stack->size - 1)
	{
		if (t_stack->stacka[i] > nbr && t_stack->stacka[i] < nbr2)
			return (0);
		i++;
	}
	i = t_stack->pos_b;
	while (i <= t_stack->size - 1)
	{
		if (t_stack->stackb[i] > nbr && t_stack->stackb[i] < nbr2)
			return (0);
		i++;
	}
	return (1);
}

int	natural_order_of_things(t_stack *t_s)
{
	int	i;

	i = 0;
	if (t_s->size == 2)
		return (0);
	if (is_the_nain_of_2_stack(t_s, t_s->stacka[t_s->size - 2]) == 1)
		return (0);
	if (is_the_warrior_of_2_stack(t_s, t_s->stacka[t_s->pos_a]) == 1)
		return (0);
	while (i < t_s->size - 1)
	{
		if (is_the_good_partner(t_s, t_s->stacka[i + 1], t_s->stacka[i]) == 1)
			return (0);
		i++;
	}
	return (1);
}

void	dont_respect_the_ope(t_stack *t_stack)
{
	if (t_stack->res == -1)
	{
		ft_putstr("Error\n", 1);
		free_and_love(t_stack);
		exit(EXIT_FAILURE);
	}
}
