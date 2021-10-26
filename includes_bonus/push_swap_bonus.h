/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:14:12 by emtran            #+#    #+#             */
/*   Updated: 2021/10/25 16:23:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	long int	*stacka;
	long int	*stackb;
	int			size;
	int			pos_a;
	int			pos_b;
	int			res;
}	t_stack;

int			ft_nbrlen(int n);
void		ft_affichage(int argc, long int *t_a, long int *t_b);

/*		CHECKER.C			*/

int			the_end_of_the_world(t_stack *t_stack);
void		everything_in_its_place(t_stack *t_stack, char *buf);
int			read_stdout(t_stack *t_stack);
void		ft_affichage_sp(int argc, long int *t_a, long int *t_b);
void		free_and_love(t_stack *t_stack);

/*		UTILS_BONUS.C		*/

void		ft_putstr(char *str, int fd);
int			ft_strlen(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
long int	ft_atoi(const char *str);
int			ft_cmp(char *str1, char *str2);
void		ft_cpy(char *dest, char *src);

/*		WARRIORS_AND_NAINS		*/

int			is_the_warrior_of_2_stack(t_stack *t_stack, int nbr);
int			is_the_nain_of_2_stack(t_stack *t_stack, int nbr);

/*		PUTINTAB_BONUS.C		*/

void		putintab(t_stack *t_s, char **tab);
void		init_tab(t_stack *t_stack);

/*		ERRARE_HUMANUM_EST_BONUS.C		*/

int			put_error(void);
int			check_str_nb(char *str);
int			check_erratum(int argc, char **argv);
int			check_erratum_arg(long int *tab, int size);
int			check_erratum_tab(t_stack *t_stack);

/*		SWEATING_TO_CHECK.C		*/

int			is_the_good_partner(t_stack *t_stack, int nbr, int nbr2);
int			natural_order_of_things(t_stack *t_stack);
void		dont_respect_the_ope(t_stack *t_stack);

/*		OPERATIONS.C		*/

void		swap_a(t_stack *t_stack);
void		swap_b(t_stack *t_stack);
void		double_swap(t_stack *t_stack);
void		push_a(t_stack *t_stack);
void		push_b(t_stack *t_stack);
void		rotate_a(t_stack *t_stack);
void		rotate_b(t_stack *t_stack);
void		double_rotate(t_stack *t_stack);
void		renverse_a(t_stack *t_stack);
void		renverse_b(t_stack *t_stack);
void		double_renverse(t_stack *t_stack);

#endif