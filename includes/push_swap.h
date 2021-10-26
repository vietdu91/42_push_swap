/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:19:24 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 20:23:43 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	long int		*tab;
	int				size;
	int				pos;
	int				max;
	int				min;
	int				no_try;
	int				super_count;
	int				nb_of_super_count;
	int				count_a;
	int				count_super_a;
	int				count_b;
	int				count_super_b;	
	int				pos_of_super_count;
	int				first_bien_tried;
	int				len_of_long_serie;
	int				pos_of_first_bien_tried;
	long int		*tab_serie;
	int				for_ra;
	int				for_rra;
	int				for_rb;
	int				for_rrb;
	int				for_rr;
	int				for_rrr;
}	t_stack;

/*		PUSH_SWAP.C		*/

void		back_to_birth_a(t_stack *t_stacka, int argc);
void		back_to_birth_b(t_stack *t_stackb, int argc);
void		back_to_birth_ghost(t_stack *t_ghost, int argc);
void		checker_argc(int nb_elem, t_stack *t_a, t_stack *t_b, t_stack *t_g);

/*		AFFICHAGE.C				*/

void		ft_affichage(int argc, long int *t_a, long int *t_b);
int			ft_nbrlen(int n);

/*		ERRARE_HUMANUM_EST.C	*/

int			put_error(void);
int			check_str_nb(char *str);
int			check_erratum(int argc, char **argv);
int			check_erratum_tab(t_stack *t_a, t_stack *t_b, t_stack *t_g);
int			check_erratum_arg(long int *tab, int size);

/*		UTILS.C		*/

void		ft_putstr(char *str, int fd);
int			ft_strlen(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
long int	ft_atoi(const char *str, t_stack *t_a);

/*		PUTINTAB.C		*/

void		putintab(t_stack *t_s, char **old_tab);
void		init_tab(t_stack *t_stack);
void		init_tab_serie(t_stack *t_stack);
void		sort_ghost(t_stack *t_ghost);
void		free_the_tablettes(t_stack *t_a, t_stack *t_b, t_stack *t_g);

/*		BOB_THE_BRICOLEUR.C		*/

int			already_try(t_stack *t_stack);
int			find_min(t_stack *t_stack);
int			find_max(t_stack *t_stack);
int			is_the_warrior_of_stack(t_stack *t_stack, int nbr);
int			is_the_nain_of_stack(t_stack *t_stack, int nbr);

/*		CINQ_TERRES.C	*/

void		one_two_three_viva_algerie(t_stack *t_stacka);
void		two_be_three(t_stack *t_stacka);
void		citroen_c4(t_stack *t_stacka, t_stack *t_stackb);
void		five_guys_peanuts(t_stack *t_stacka, t_stack *t_stackb);

/*		CENT_YEARS_OF_SOLITUDE.C	*/

int			the_decroissance(t_stack *t_stacka);
void		vers_le_stonks(t_stack *t_stacka, t_stack *t_stackb);
void		ten_belles(t_stack *t_stacka, t_stack *t_stackb, t_stack *t_ghost);
void		chuck_your_wife(t_stack *t_a, t_stack *t_b, t_stack *t_g);

/*		PUSH_B_ONLY_BADS	*/

void		push_b_only_bads(t_stack *t_a, t_stack *t_b, t_stack *t_g);
void		where_is_bad_cops(t_stack *t_a, t_stack *t_b);
int			secure_the_crime(int nbr, t_stack *t_a);

/*		FIND_THE_LONGUE_SERIE_OF_WORLD.C

void		print_tab_of_longue_serie(t_stack *t_stacka, int pos);
void		def_the_long_serie(t_stack *t_stacka, int count, int pos);
int			diamant_of_longue_serie(t_stack *t_stacka, int pos, int count);
void		a_la_recherche_of_longue_serie(t_stack *t_stacka);*/

/*		THE_BEST_COUP_ON_BED.C		*/

void		the_best_coup_on_bed(t_stack *t_a, t_stack *t_b);
int			the_best_coup_on_stackb(t_stack *t_b, int c);
int			the_best_coup_on_stacka(t_stack *t_a, t_stack *t_b, int d, int c);
void		are_you_the_super_count(t_stack *t_b, int count, int c);
int			to_have_son_count_on_bed(t_stack *t_a, int med_a, int d);

/*		THE_BEST_ALGO_IN_THE_WORLD.C	*/

void		ra_or_rra_thats_the_question(t_stack *t_a, t_stack *t_b);
void		rb_or_rrb_thats_the_question(t_stack *t_a, t_stack *t_b);
void		push_or_not_push_thats_the_question(t_stack *t_a, t_stack *t_b);
void		star_on_the_top(t_stack *t_a);
void		insert_inspi_here(t_stack *t_a, t_stack *t_b);

/*		EVELYNE_THOMAS.C	*/

void		this_is_my_choice(t_stack *t_a, t_stack *t_b);
void		i_dont_know_choose_between_two_beauties(t_stack *t_a, int a);
void		i_love_rotate_you(t_stack *t_a, t_stack *t_b);
void		i_love_renverse_you(t_stack *t_a, t_stack *t_b);

/*		OPE_SWAP_AND_PUSH.C		*/

void		swap_a(t_stack *t_stacka);
void		swap_b(t_stack *t_stackb);
void		double_swap(t_stack *t_stacka, t_stack *t_stackb);
void		push_a(t_stack *t_stacka, t_stack *t_stackb);
void		push_b(t_stack *t_stacka, t_stack *t_stackb);

/*		OPE_ROTATE.C		*/

void		rotate_a(t_stack *t_stacka);
void		rotate_a_sp(t_stack *t_stacka);
void		rotate_b(t_stack *t_stackb);
void		double_rotate(t_stack *t_stacka, t_stack *t_stackb);

/*		OPE_RENVERSE.C		*/

void		renverse_a(t_stack *t_stacka);
void		renverse_b(t_stack *t_stackb);
void		double_renverse(t_stack *t_stacka, t_stack *t_stackb);

#endif