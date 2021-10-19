/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:53:30 by emtran            #+#    #+#             */
/*   Updated: 2021/10/15 14:25:20 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_stack *t_stacka)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stacka->size - 2;
	a = t_stacka->pos + 1;
	swapper = t_stacka->tab[t_stacka->pos];
	while (a <= the_last)
	{
		t_stacka->tab[a - 1] = t_stacka->tab[a];
		a++;
	}
	t_stacka->tab[the_last] = swapper;
	ft_putstr("ra\n", 1);
}

void	rotate_a_sp(t_stack *t_stacka)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stacka->size - 2;
	a = t_stacka->pos + 1;
	swapper = t_stacka->tab[t_stacka->pos];
	while (a <= the_last)
	{
		t_stacka->tab[a - 1] = t_stacka->tab[a];
		a++;
	}
	t_stacka->tab[the_last] = swapper;
}

void	rotate_b(t_stack *t_stackb)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stackb->size - 2;
	a = t_stackb->pos + 1;
	swapper = t_stackb->tab[t_stackb->pos];
	while (a <= the_last)
	{
		t_stackb->tab[a - 1] = t_stackb->tab[a];
		a++;
	}
	t_stackb->tab[the_last] = swapper;
	ft_putstr("rb\n", 1);
}

void	double_rotate(t_stack *t_stacka, t_stack *t_stackb)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = t_stacka->size - 2;
	a = t_stacka->pos + 1;
	swapper = t_stacka->tab[t_stacka->pos];
	while (a <= the_last)
	{
		t_stacka->tab[a - 1] = t_stacka->tab[a];
		a++;
	}
	t_stacka->tab[the_last] = swapper;
	the_last = t_stackb->size - 2;
	a = t_stackb->pos + 1;
	swapper = t_stackb->tab[t_stackb->pos];
	while (a <= the_last)
	{
		t_stackb->tab[a - 1] = t_stackb->tab[a];
		a++;
	}
	t_stackb->tab[the_last] = swapper;
	ft_putstr("rr\n", 1);
}
