/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_the_longue_serie_of_world.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:56:42 by emtran            #+#    #+#             */
/*   Updated: 2021/10/19 09:21:07 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	print_tab_of_longue_serie(t_stack *t_stacka, int pos)
{
	int	tmp;
	int	b;
	int	c;

	c = 1;
	t_stacka->tab_serie[0] = t_stacka->tab[pos];
	tmp = t_stacka->tab[pos];
	b = pos + 1;
	while (b < t_stacka->size - 1)
	{
		while (t_stacka->tab[b + 1] > tmp
			&& t_stacka->tab[b + 1] < t_stacka->tab[b]
			&& b < t_stacka->size - 2)
			b++;
		if (tmp < t_stacka->tab[b])
		{
			tmp = t_stacka->tab[b];
			t_stacka->tab_serie[c] = tmp;		
			c++;
		}
		b++;
		pos++;
	}
}

void	def_the_long_serie(t_stack *t_stacka, int count, int pos)
{
	t_stacka->len_of_long_serie = count;
	t_stacka->first_bien_tried = t_stacka->tab[pos];
	t_stacka->pos_of_first_bien_tried = pos;
	print_tab_of_longue_serie(t_stacka, pos);
}

int	diamant_of_longue_serie(t_stack *t_stacka, int pos, int count)
{
	int	tmp;
	int	b;

	tmp = 0;
	b = pos + 1;
	tmp = t_stacka->tab[pos];
	while (b < t_stacka->size - 1)
	{
		while (t_stacka->tab[b + 1] > tmp
			&& t_stacka->tab[b + 1] < t_stacka->tab[b])
			b++;
		if (tmp < t_stacka->tab[b])
		{
			count++;
			tmp = t_stacka->tab[b];
		}
		b++;
	}
	return (count);
}

void	a_la_recherche_of_longue_serie(t_stack *t_stacka)
{
	int	count;
	int	a;
	int	b;

	count = 1;
	b = 0;
	while (b < t_stacka->size - 1)
	{
		a = 0;
		while (a < t_stacka->size - 1)
		{
			count = diamant_of_longue_serie(t_stacka, a, count);
			if (count > t_stacka->len_of_long_serie)
				def_the_long_serie(t_stacka, count, a);
			count = 1;
			a++;
		}
		rotate_a_sp(t_stacka);
		b++;
	}
}
