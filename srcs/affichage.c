/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:28:40 by emtran            #+#    #+#             */
/*   Updated: 2021/10/18 14:41:03 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

//	printf("MIN : %d\n", t_stacka.min);
//	printf("MAX : %d\n", t_stacka.max);
//	printf("POS : %d\n", t_stacka->pos);
//	printf("TAB 1 : %ld\n", t_stacka->tab[0]);
//	printf("TAB 2 : %ld\n", t_stacka->tab[1]);
//	printf("TAB 3 : %ld\n", t_stacka->tab[2]);
//	printf("TAB 4 : %ld\n", t_stacka->tab[3]);
//	printf("TAB 5 : %ld\n", t_stacka->tab[4]);
//	ft_affichage(t_stacka->size, t_stacka->tab, t_stackb->tab, t_stacka->tab_serie);
//	ft_affichage(t_a->size, t_a->tab, t_b->tab, t_a->tab_serie);
//	printf("1er ELEM DE LA SERIE : %d\n", t_stacka->first_bien_tried);
//	printf("POS DU 1ER ELEM : %d\n", t_stacka->pos_of_first_bien_tried);
//	printf("LONG DE LA SERIE : %d\n", t_stacka->len_of_long_serie);
//	a = 0;
//	while (a < t_stacka->len_of_long_serie)
//	{
//		printf("%d - ", t_stacka->tab_serie[a]);
//		a++;
//	}
//	ft_putstr("SUPER COUNT :", 1);
//	ft_putnbr(t_b->nb_of_super_count);
//	ft_putchar('\n');	
//	ft_putstr("POS :", 1);
//	ft_putnbr(t_b->pos);
//	ft_putchar('\n');	

void	ft_affichage(int argc, long int *t_a, long int *t_b, long int *t_c)
{
	int i = 0;
	int j = 0;

	ft_putstr("\n\n||                       ||                       ||                       ||\n", 1);
	while (i < argc - 1)
	{
		j = 0;
		ft_putstr("||      [", 1);
		ft_putnbr(t_a[i]);
		ft_putchar(']');
		while (j < 15 - ft_nbrlen(t_a[i]))
		{
			ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putstr("||      [", 1);
		ft_putnbr(t_b[i]);
		ft_putchar(']');
		while (j < 15 - ft_nbrlen(t_b[i]))
		{
			ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putstr("||      [", 1);
		ft_putnbr(t_c[i]);
		ft_putchar(']');
		while (j < 15 - ft_nbrlen(t_c[i]))
		{
			ft_putchar(' ');
			j++;
		}
		ft_putstr("||\n", 1);
		i++;
	}
	ft_putstr("||=======================||=======================||=======================||\n", 1);
	ft_putstr("========= STACK A ================ STACK B ================ -SUITE- =========\n\n", 1);
}
