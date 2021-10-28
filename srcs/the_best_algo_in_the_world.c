/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_best_algo_in_the_world.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:17:15 by emtran            #+#    #+#             */
/*   Updated: 2021/10/28 15:52:48 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra_or_rra_thats_the_question(t_stack *t_a, t_stack *t_b)
{
	int	a;

	a = t_a->pos;
	if (t_a->tab[a] > t_b->tab[t_b->pos]
		&& t_a->tab[t_a->size - 2] < t_b->tab[t_b->pos])
		t_a->for_rra++;
	else
	{
		a = t_a->pos + 1;
		while (a < t_a->size - 1)
		{
			if (t_a->tab[a] > t_b->tab[t_b->pos]
				&& t_a->tab[a - 1] < t_b->tab[t_b->pos])
				break ;
			if (is_the_warrior_of_stack(t_a, t_b->tab[t_b->pos]) == 1
				&& t_a->tab[a] == t_a->tab[find_min(t_a)])
				break ;
			if (is_the_nain_of_stack(t_a, t_b->tab[t_b->pos]) == 1
				&& t_a->tab[a] == t_a->tab[find_min(t_a)])
				break ;
			a++;
		}
	}
	i_dont_know_choose_between_two_beauties(t_a, a);
	this_is_my_choice(t_a, t_b);
}

void	rb_or_rrb_thats_the_question(t_stack *t_a, t_stack *t_b)
{
	int	i;
	int	med_b;

	t_b->super_count = INT_MAX;
	t_b->nb_of_super_count = 0;
	t_b->pos_of_super_count = 0;
	the_best_coup_on_bed(t_a, t_b);
	med_b = ((t_b->size - 1) - ((t_b->size - t_b->pos) / 2));
	if (t_b->pos_of_super_count > med_b)
		i = t_b->size - 1 - t_b->pos_of_super_count;
	else
		i = t_b->pos_of_super_count - t_b->pos;
	while (i > 0 && t_b->pos < t_b->size - 2)
	{		
		if (t_b->pos_of_super_count < med_b)
		{
			t_b->for_rb++;
			i--;
		}
		else
		{
			t_b->for_rrb++;
			i--;
		}
	}
}

void	push_or_not_push_thats_the_question(t_stack *t_a, t_stack *t_b)
{
	if (is_the_warrior_of_stack(t_a, t_b->tab[t_b->pos]) == 1
		&& t_a->tab[t_a->pos] == t_a->tab[find_min(t_a)])
		push_a(t_a, t_b);
	else if (is_the_nain_of_stack(t_a, t_b->tab[t_b->pos]) == 1
		&& t_a->tab[t_a->size - 2] == t_a->tab[find_max(t_a)])
		push_a(t_a, t_b);
	else if (t_b->tab[t_b->pos] < t_a->tab[t_a->pos]
		&& t_b->tab[t_b->pos] > t_a->tab[t_a->size - 2])
		push_a(t_a, t_b);
	else
		ra_or_rra_thats_the_question(t_a, t_b);
}

void	star_on_the_top(t_stack *t_a)
{
	int	med;

	med = ((t_a->size - 1) - ((t_a->size - t_a->pos) / 2));
	while (find_min(t_a) != 0)
	{
		if (find_min(t_a) <= med)
			rotate_a(t_a);
		else
			renverse_a(t_a);
	}
}

void	insert_inspi_here(t_stack *t_a, t_stack *t_b)
{
	int	a;

	if (t_a->pos < 0)
		t_a->pos = 0;
	while (t_b->pos < t_b->size - 1)
	{
		rb_or_rrb_thats_the_question(t_a, t_b);
		a = t_a->pos;
		while (a == t_a->pos)
			push_or_not_push_thats_the_question(t_a, t_b);
	}
	star_on_the_top(t_a);
}
