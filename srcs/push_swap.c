/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:57:54 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 20:10:31 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	checker_argc(int nb_elem, t_stack *t_a, t_stack *t_b, t_stack *t_g)
{	
	if (nb_elem == 2)
		one_two_three_viva_algerie(t_a);
	else if (nb_elem == 3)
		two_be_three(t_a);
	else if (nb_elem == 4)
		citroen_c4(t_a, t_b);
	else if (nb_elem == 5)
		five_guys_peanuts(t_a, t_b);
	else if (nb_elem > 5)
		ten_belles(t_a, t_b, t_g);
}

void	back_to_birth_a(t_stack *t_stacka, int argc)
{
	t_stacka->size = argc;
	t_stacka->pos = 0;
	t_stacka->max = 0;
	t_stacka->min = 0;
	t_stacka->no_try = 0;
	t_stacka->first_bien_tried = 0;
	t_stacka->len_of_long_serie = 1;
	t_stacka->for_ra = 0;
	t_stacka->for_rra = 0;
}

void	back_to_birth_b(t_stack *t_stackb, int argc)
{
	t_stackb->size = argc;
	t_stackb->pos = argc - 1;
	t_stackb->max = 0;
	t_stackb->min = 0;
	t_stackb->no_try = 0;
	t_stackb->for_rb = 0;
	t_stackb->for_rrb = 0;
}

void	back_to_birth_ghost(t_stack *t_ghost, int argc)
{
	t_ghost->size = argc;
	t_ghost->pos = 0;
	t_ghost->max = 0;
	t_ghost->min = 0;
	t_ghost->no_try = 0;
}

int	main(int argc, char **argv)
{
	t_stack	t_stacka;
	t_stack	t_stackb;
	t_stack	t_ghost;

	if (check_erratum(argc, argv) == 1 || argc < 3)
		exit(EXIT_FAILURE);
	back_to_birth_a(&t_stacka, argc);
	back_to_birth_ghost(&t_ghost, argc);
	back_to_birth_b(&t_stackb, argc);
	putintab(&t_stacka, argv);
	init_tab(&t_stackb);
	putintab(&t_ghost, argv);
	if (argc - 1 == 1 && t_stackb.tab[1] == 0)
		return (0);
	if ((check_erratum_tab(&t_stacka, &t_stackb, &t_ghost) == 1))
	{
		free_the_tablettes(&t_stacka, &t_stackb, &t_ghost);
		exit(EXIT_FAILURE);
	}
	checker_argc(argc - 1, &t_stacka, &t_stackb, &t_ghost);
	free_the_tablettes(&t_stacka, &t_stackb, &t_ghost);
	return (0);
}
