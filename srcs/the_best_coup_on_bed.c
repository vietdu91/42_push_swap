/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_best_coup_on_bed.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:41:32 by emtran            #+#    #+#             */
/*   Updated: 2021/10/28 11:36:35 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	are_you_the_super_count(t_stack *t_b, int count, int c)
{
	if (count < t_b->super_count)
	{
		t_b->super_count = count;
		t_b->nb_of_super_count = t_b->tab[c];
		t_b->pos_of_super_count = c;
		t_b->count_super_a = t_b->count_a;
		t_b->count_super_b = t_b->count_b;
	}
}

int	the_best_coup_on_stackb(t_stack *t_b, int c)
{
	int	med_b;
	int	count;

	count = 0;
	med_b = ((t_b->size - 1) - ((t_b->size - t_b->pos) / 2));
	if (c < med_b)
		count = c - t_b->pos;
	else
		count = t_b->size - 1 - c;
	t_b->count_b = count;
	return (count);
}

int	to_have_son_count_on_bed(t_stack *t_a, int med_a, int d)
{
	int	count;

	count = 0;
	if (d < med_a)
		count = d - t_a->pos;
	else
		count = t_a->size - d;
	return (count);
}

int	the_best_coup_on_stacka(t_stack *t_a, t_stack *t_b, int d, int c)
{
	int	med_a;
	int	count;

	count = 0;
	med_a = ((t_a->size - 1) - ((t_a->size - t_a->pos) / 2));
	if (t_a->tab[d] > t_b->tab[c] && t_a->tab[d - 1] < t_b->tab[c])
		count += to_have_son_count_on_bed(t_a, med_a, d);
	else if (is_the_warrior_of_stack(t_a, t_b->tab[c]) == 1
		&& t_a->tab[d] == t_a->tab[find_min(t_a)])
		count += to_have_son_count_on_bed(t_a, med_a, d);
	else if (is_the_nain_of_stack(t_a, t_b->tab[c]) == 1
		&& t_a->tab[d] == t_a->tab[find_min(t_a)])
		count += to_have_son_count_on_bed(t_a, med_a, d);
	return (count);
}

void	the_best_coup_on_bed(t_stack *t_a, t_stack *t_b)
{
	int	c;
	int	d;
	int	count;

	c = t_b->pos - 1;
	while (++c < t_b->size - 1)
	{
		count = the_best_coup_on_stackb(t_b, c);
		d = t_a->pos;
		if (t_a->tab[d] > t_b->tab[c]
			&& t_a->tab[t_a->size - 2] < t_b->tab[c])
			count++;
		else
		{
			d++;
			count++;
			t_b->count_a++;
			while (d < t_a->size - 1)
			{
				count += the_best_coup_on_stacka(t_a, t_b, d, c);
				d++;
			}
		}
		are_you_the_super_count(t_b, count, c);
	}
}
