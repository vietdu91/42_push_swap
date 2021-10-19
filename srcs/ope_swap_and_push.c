/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_swap_and_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:51:56 by emtran            #+#    #+#             */
/*   Updated: 2021/10/15 14:21:15 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_stack *t_stacka)
{
	int	swapper;

	swapper = t_stacka->tab[t_stacka->pos];
	t_stacka->tab[t_stacka->pos] = t_stacka->tab[t_stacka->pos + 1];
	t_stacka->tab[t_stacka->pos + 1] = swapper;
	ft_putstr("sa\n", 1);
}

void	swap_b(t_stack *t_stackb)
{
	int	swapper;

	swapper = t_stackb->tab[t_stackb->pos];
	t_stackb->tab[t_stackb->pos] = t_stackb->tab[t_stackb->pos + 1];
	t_stackb->tab[t_stackb->pos + 1] = swapper;
	ft_putstr("sb\n", 1);
}

void	double_swap(t_stack *t_stacka, t_stack *t_stackb)
{
	int	swapper;

	swapper = t_stacka->tab[t_stacka->pos];
	t_stacka->tab[t_stacka->pos] = t_stacka->tab[t_stacka->pos + 1];
	t_stacka->tab[t_stacka->pos + 1] = swapper;
	swapper = t_stackb->tab[t_stackb->pos];
	t_stackb->tab[t_stackb->pos] = t_stackb->tab[t_stackb->pos + 1];
	t_stackb->tab[1] = swapper;
	ft_putstr("ss\n", 1);
}

void	push_a(t_stack *t_stacka, t_stack *t_stackb)
{
	int	swapper;

	swapper = t_stackb->tab[t_stackb->pos];
	t_stacka->tab[t_stacka->pos - 1] = swapper;
	t_stackb->tab[t_stackb->pos] = 0;
	t_stackb->pos++;
	t_stacka->pos--;
	ft_putstr("pa\n", 1);
}

void	push_b(t_stack *t_stacka, t_stack *t_stackb)
{
	int	swapper;

	swapper = t_stacka->tab[t_stacka->pos];
	t_stackb->tab[t_stackb->pos - 1] = swapper;
	t_stacka->tab[t_stacka->pos] = 0;
	t_stacka->pos++;
	t_stackb->pos--;
	ft_putstr("pb\n", 1);
}
