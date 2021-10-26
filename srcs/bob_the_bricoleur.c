/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bob_the_bricoleur.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:56:41 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 18:15:37 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	already_try(t_stack *t_stack)
{
	int	a;

	a = 1;
	while (a <= t_stack->size - 1)
	{
		if (a == t_stack->size - 2)
		{
			if (t_stack->tab[a] < t_stack->tab[a + 1])
			{
				t_stack->no_try = 1;
				return (1);
			}
		}
		else if (t_stack->tab[a] > t_stack->tab[a + 1])
			return (0);
		a++;
	}
	t_stack->no_try = 1;
	return (1);
}

int	find_min(t_stack *t_stack)
{
	int	a;

	a = t_stack->pos + 1;
	t_stack->min = t_stack->tab[t_stack->pos];
	while (a < t_stack->size - 1)
	{
		if (t_stack->tab[a] < t_stack->min)
			t_stack->min = t_stack->tab[a];
		a++;
	}
	a = 0;
	while (t_stack->tab[a] != t_stack->min)
		a++;
	return (a);
}

int	find_max(t_stack *t_stack)
{
	int	a;

	a = t_stack->pos + 1;
	t_stack->max = t_stack->tab[t_stack->pos];
	while (a < t_stack->size - 1)
	{
		if (t_stack->tab[a] > t_stack->max)
			t_stack->max = t_stack->tab[a];
		a++;
	}
	a = 0;
	while (t_stack->tab[a] != t_stack->max)
		a++;
	return (a);
}

int	is_the_warrior_of_stack(t_stack *t_stack, int nbr)
{
	int	a;

	a = t_stack->pos;
	while (a < t_stack->size - 1)
	{
		if (nbr < t_stack->tab[a])
			return (0);
		a++;
	}
	return (1);
}

int	is_the_nain_of_stack(t_stack *t_stack, int nbr)
{
	int	a;

	a = t_stack->pos;
	while (a < t_stack->size - 1)
	{
		if (nbr > t_stack->tab[a])
			return (0);
		a++;
	}
	return (1);
}
