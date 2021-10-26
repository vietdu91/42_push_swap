/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_only_bads.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:11:17 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 20:08:55 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	secure_the_crime(int nbr, t_stack *t_a)
{
	int	i;

	i = 0;
	while (i < t_a->len_of_long_serie)
	{
		if (t_a->tab_serie[i] == nbr)
			return (0);
		i++;
	}
	return (1);
}

void	where_is_bad_cops(t_stack *t_a, t_stack *t_b)
{
	int	i;
	int	med;

	(void) t_b;
	i = 0;
	med = ((t_a->size - 1) - ((t_a->size - t_a->pos) / 2));
	while (i < t_a->size - 1)
	{
		if (t_a->tab[i] == t_a->tab_serie[0])
			break ;
		i++;
	}
	while (t_a->tab[t_a->pos] != t_a->tab_serie[0])
	{	
		if (i <= med)
			rotate_a(t_a);
		else
			renverse_a(t_a);
	}
}

void	push_b_only_bads(t_stack *t_a, t_stack *t_b, t_stack *t_g)
{
	int	j;
	int	med_g;

	j = 0;
	med_g = t_g->tab[(t_a->size - 1) - ((t_a->size - t_a->pos) / 2)];
	while (j < t_a->size - 3)
	{
		push_b(t_a, t_b);
		if (t_b->tab[t_b->pos] < med_g)
			rotate_b(t_b);
		j++;
	}
}
