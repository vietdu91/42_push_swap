/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putintab_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:28:48 by emtran            #+#    #+#             */
/*   Updated: 2021/10/22 16:42:22 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_bonus.h"

void	putintab(t_stack *t_s, char **tab)
{
	int	a;

	a = 0;
	t_s->stacka = malloc(sizeof(long int) * t_s->size - 1);
	if (!t_s->stacka)
		return ;
	while (a < t_s->size - 1)
	{
		t_s->stacka[a] = ft_atoi(tab[a + 1]);
		a++;
	}
}

void	init_tab(t_stack *t_stack)
{
	int			a;

	a = 0;
	t_stack->stackb = malloc(sizeof(long int) * t_stack->size - 1);
	if (!t_stack->stackb)
		return ;
	while (a < t_stack->size - 1)
	{
		t_stack->stackb[a] = 0;
		a++;
	}
}
