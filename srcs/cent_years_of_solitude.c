/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cent_years_of_solitude.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:33:16 by emtran            #+#    #+#             */
/*   Updated: 2021/10/18 15:17:53 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

int	la_decroissance(t_stack *t_stacka)
{
	int a;

	a = 0;
	while (a < t_stacka->size - 2)
	{
		if (t_stacka->tab[a] < t_stacka->tab[a + 1])
			return (1);
		a++;
	}
	return (0);
}

void	vers_le_stonks(t_stack *t_stacka, t_stack *t_stackb)
{
	int	a;

	a = 0;
	while (t_stacka->pos < t_stacka->size - 1)
	{
		push_b(t_stacka, t_stackb);
		a++;
	}	
	a = 0;
	while (t_stackb->pos < t_stackb->size - 1)
	{
		renverse_b(t_stackb);
		push_a(t_stacka, t_stackb);
		a++;
	}
}

void	push_b_only_bads(t_stack *t_stacka, t_stack *t_stackb)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (t_stacka->tab[t_stacka->pos] != t_stacka->tab_serie[0])
		rotate_a(t_stacka);
	while (j < t_stacka->len_of_long_serie)
	{
		while (t_stacka->tab[t_stacka->pos] != t_stacka->tab_serie[j])
		{
			push_b(t_stacka, t_stackb);	
			count++;
		}
		if (t_stacka->tab[t_stacka->pos] == t_stacka->tab_serie[j])
		{
			rotate_a(t_stacka);
			j++;
		}
	}
	while (j + count < t_stacka->size - 1)
	{
		push_b(t_stacka, t_stackb);
		count++;
	}
}

void	swap_ou_pas_swap(t_stack *t_a, t_stack *t_b)
{
	int	c;
	int	d;
	int	count;
	int	med_a;
	int	med_b;

	c = t_b->pos;
	while (c < t_b->size - 1)
	{
		med_b = ((t_b->size - 1) - ((t_b->size - t_b->pos) / 2));
		if (c <= med_b)
			count = c - t_b->pos;
		else
			count = t_b->size - 1 - c;
		d = t_a->pos;
		// si le nb checké dans la stack B peut se mettre directement sur la stack A
		if (t_a->tab[d] > t_b->tab[c]
			&& t_a->tab[t_a->size - 2] < t_b->tab[c])
			count++;
		else
		{
			d++;
			while (d < t_a->size - 1)
			{
				med_a = ((t_a->size - 1) - ((t_a->size - t_a->pos) / 2));
				if (t_a->tab[d] > t_b->tab[c]
					&& t_a->tab[d - 1] < t_b->tab[c])
				{
					if (d <= med_a)
						count += d - t_a->pos;
					else
						count += t_a->size - 1 - d;
				}
				d++;
			}
		}
		if (c <= med_b)
			count += c - t_b->pos;
		else
			count += t_b->size - 1 - c;
	//	printf("COUNT FINAL : %d\n", count);
		if (count < t_b->super_count)
		{
			t_b->super_count = count;
			t_b->nb_of_super_count = t_b->tab[c];
			t_b->pos_of_super_count = c;
		}
		c++;
	}
}

void	this_is_my_choice(t_stack *t_a, t_stack *t_b)
{
	while (t_a->for_ra > 0 && t_b->for_rb > 0)
	{
//		ft_putstr("RA :", 1);
//		ft_putnbr(t_a->for_ra);
//		ft_putchar('\n');
//		ft_putstr("RB :", 1);
//		ft_putnbr(t_b->for_rb);
//		ft_putchar('\n');
		double_rotate(t_a, t_b);
		t_a->for_ra--;
		t_b->for_rb--;
	}
	while (t_a->for_rra > 0 && t_b->for_rrb > 0)
	{
//		ft_putstr("RRA :", 1);
//		ft_putnbr(t_a->for_rra);
//		ft_putchar('\n');
//		ft_putstr("RRB :", 1);
//		ft_putnbr(t_a->for_rrb);
//		ft_putchar('\n');
		double_renverse(t_a, t_b);
		t_a->for_rra--;
		t_b->for_rrb--;
	}
	while (t_a->for_ra > 0 && t_b->for_rb <= 0)
	{
//		ft_putstr("RA :", 1);
//		ft_putnbr(t_a->for_ra);
//		ft_putchar('\n');
//		ft_putstr("RB :", 1);
//		ft_putnbr(t_b->for_rb);
//		ft_putchar('\n');
		rotate_a(t_a);
		t_a->for_ra--;
	}
	while (t_a->for_rra > 0 && t_b->for_rrb <= 0)
	{
//		ft_putstr("RRA :", 1);
//		ft_putnbr(t_a->for_rra);
//		ft_putchar('\n');
//		ft_putstr("RRB :", 1);
//		ft_putnbr(t_a->for_rrb);
//		ft_putchar('\n');
		renverse_a(t_a);
		t_a->for_rra--;
	}
	while (t_a->for_ra <= 0 && t_b->for_rb > 0)
	{	
//		ft_putstr("RA :", 1);
//		ft_putnbr(t_a->for_ra);
//		ft_putchar('\n');
//		ft_putstr("RB :", 1);
//		ft_putnbr(t_b->for_rb);
//		ft_putchar('\n');
		rotate_b(t_b);
		t_b->for_rb--;
	}
	while (t_a->for_rra <= 0 && t_b->for_rrb > 0)
	{	
//		ft_putstr("RRA :", 1);
//		ft_putnbr(t_a->for_rra);
//		ft_putchar('\n');
//		ft_putstr("RRB :", 1);
//		ft_putnbr(t_a->for_rrb);
//		ft_putchar('\n');
		renverse_b(t_b);
		t_b->for_rrb--;
	}
}

void	ra_or_rra_thats_the_question(t_stack *t_a, t_stack *t_b)
{
	int	med;
	int	a;

	a = t_a->pos;
	med = (t_a->size - 1) / 2;
	if (t_a->tab[a] > t_b->tab[t_b->pos]
		&& t_a->tab[t_a->size - 2] < t_b->tab[t_b->pos])
		renverse_a(t_a);
	else
	{
		a = t_a->pos + 1;
		while (a < t_a->size - 1)
		{
			if (t_a->tab[a] > t_b->tab[t_b->pos]
				&& t_a->tab[a - 1] < t_b->tab[t_b->pos])
				break ;
			a++;
		}
	}
	if (a < med)
		t_a->for_ra++;
	else
		t_a->for_rra++;
	this_is_my_choice(t_a, t_b);
}

void	insert_inspi_here(t_stack *t_a, t_stack *t_b)
{
	int	a;
	int i;
	int med_b;

	if (t_a->pos < 0)
		t_a->pos = 0;
	while (t_b->pos < t_b->size - 1)
	{
		t_b->super_count = INT_MAX;
		t_b->nb_of_super_count = 0;
		t_b->pos_of_super_count = 0;
		swap_ou_pas_swap(t_a, t_b);
		med_b = ((t_b->size - 1) - ((t_b->size - t_b->pos) / 2));
//		ft_putstr("--------------------\n", 1);
//		ft_affichage(t_a->size, t_a->tab, t_b->tab, t_a->tab_serie);
//		ft_putstr("POS SUPER COUNT :", 1);
//		ft_putnbr(t_b->pos_of_super_count);
//		ft_putchar('\n');
		if (t_b->pos_of_super_count > med_b)
			i = t_b->size - 1 - t_b->pos_of_super_count;
		else
			i = t_b->pos_of_super_count - t_b->pos;
//		ft_putstr("I :", 1);
//		ft_putnbr(i);
//		ft_putchar('\n');
//		ft_affichage(t_a->size, t_a->tab, t_b->tab, t_a->tab_serie);
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
//		ft_putstr("---------------\n", 1);
//		ft_putstr("I :", 1);
//		ft_putnbr(i);
//		ft_putchar('\n');
//		ft_putstr("RB :", 1);
//		ft_putnbr(t_b->for_rb);
//		ft_putchar('\n');
//		ft_putstr("RRB :", 1);
//		ft_putnbr(t_b->for_rrb);
//		ft_putchar('\n');
//		ft_putstr("---------------\n", 1);
//		ft_affichage(t_a->size, t_a->tab, t_b->tab, t_a->tab_serie);
		a = t_a->pos;
		while (a == t_a->pos)
		{
			swap_ou_pas_swap(t_a, t_b);
			if (is_the_warrior_of_stack(t_a, t_b->tab[t_b->pos]) == 1
				&& t_a->tab[t_a->pos] == t_a->tab[find_min(t_a)])
				push_a(t_a, t_b);
			else if (is_the_nain_of_stack(t_a, t_b->tab[t_b->pos]) == 1
				&& t_a->tab[t_a->size - 2] == t_a->tab[find_max(t_a)])
				push_a(t_a, t_b);
			else if (t_b->tab[t_b->pos] < t_a->tab[t_a->pos]
				&& t_b->tab[t_b->pos] > t_a->tab[t_a->size - 2])
				push_a(t_a, t_b);
			else if (t_a->pos == t_a->size - 3)
				push_a(t_a, t_b);
			else
				ra_or_rra_thats_the_question(t_a, t_b);
//			ft_affichage(t_a->size, t_a->tab, t_b->tab, t_a->tab_serie);
		}
	}
	while (find_min(t_a) != 0)
		renverse_a(t_a);
}

void	ten_belles(t_stack *t_stacka, t_stack *t_stackb, t_stack *t_ghost)
{
	(void)t_stackb;
	sort_ghost(t_ghost);
	if (la_decroissance(t_stacka) == 0)
		vers_le_stonks(t_stacka, t_stackb);
	else
	{
		a_la_recherche_of_longue_serie(t_stacka);
		push_b_only_bads(t_stacka, t_stackb);
		while (t_stackb->pos < t_stackb->size - 1)
			insert_inspi_here(t_stacka, t_stackb);
	}
}

/*
void	ten_belles(t_stack *t_stacka, t_stack *t_stackb, t_stack *t_ghost)
{
	int pos;
	int med;

	(void)t_stacka;
	(void)t_stackb;
	sort_ghost(t_ghost);
	pos = t_stacka->pos;
	med = t_ghost->tab[(t_ghost->size - 1) / 2];
	while (t_stacka->tab[pos++] < med)
		push_b(t_stacka, t_stackb);
	while (t_stacka->tab[t_ghost->size-- - 3] > t_stacka->pos)
	{
		printf("SIZE : %d\n", t_ghost->size - 3);
		printf("MED : %d\n", med);
		printf("POS : %d\n", t_stacka->pos);
		renverse_a(t_stacka);
		if (t_stacka->tab[pos] < med)
			push_b(t_stacka, t_stackb);
	}
}
*/
