/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:19:24 by emtran            #+#    #+#             */
/*   Updated: 2021/10/19 10:39:01 by emtran           ###   ########.fr       */
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

void		back_to_birth_a(t_stack *t_stacka, int argc, char **argv);
void		back_to_birth_b(t_stack *t_stackb, int argc);
void		back_to_birth_ghost(t_stack *t_ghost, int argc, char **argv);
void		ft_affichage(int argc, long int *t_a, long int *t_b, long int *t_c);
void		checker_argc(int nb_elem, t_stack *t_a, t_stack *t_b, t_stack *t_g);

/*		ERRARE_HUMANUM_EST.C	*/

int			put_error(void);
int			check_str_nb(char *str);
int			check_erratum(int argc, char **argv);
int			check_erratum_tab(long int *tab, int argc);
int			check_erratum_arg(long int *tab, int size);

/*		UTILS.C		*/

void		ft_putstr(char *str, int fd);
int			ft_strlen(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
long int	ft_atoi(const char *str);

/*		UTILS_2.C		*/

int			ft_nbrlen(int n);

/*		PUTINTAB.C		*/

long int	*putintab(int size, char **old_tab);
long int	*init_tab(int size);
void		sort_ghost(t_stack *t_ghost);
void		init_tab_serie(int size);

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

int			la_decroissance(t_stack *t_stacka);
void		vers_le_stonks(t_stack *t_stacka, t_stack *t_stackb);
void		ten_belles(t_stack *t_stacka, t_stack *t_stackb, t_stack *t_ghost);
void		this_is_my_choice(t_stack *t_a, t_stack *t_b);
void		push_b_only_bads(t_stack *t_stacka, t_stack *t_stackb);
void		ra_or_rra_thats_the_question(t_stack *t_a, t_stack *t_b);
void		insert_inspi_here(t_stack *t_a, t_stack *t_b);

/*		FIND_THE_LONGUE_SERIE_OF_WORLD.C	*/

void		print_tab_of_longue_serie(t_stack *t_stacka, int pos);
void		def_the_long_serie(t_stack *t_stacka, int count, int pos);
int			diamant_of_longue_serie(t_stack *t_stacka, int pos, int count);
void		a_la_recherche_of_longue_serie(t_stack *t_stacka);

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