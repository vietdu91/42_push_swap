/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:28:40 by emtran            #+#    #+#             */
/*   Updated: 2021/10/28 18:12:20 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_nbrlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_affichage(int argc, long int *t_a, long int *t_b)
{
	int	i;
	int	j;

	i = 0;
	ft_putstr("\n\n||                       ||                       ||\n", 1);
	while (i < argc - 1)
	{
		j = -1;
		ft_putstr("||      [", 1);
		ft_putnbr(t_a[i]);
		ft_putchar(']');
		while (++j < 15 - ft_nbrlen(t_a[i]))
			ft_putchar(' ');
		j = -1;
		ft_putstr("||      [", 1);
		ft_putnbr(t_b[i]);
		ft_putchar(']');
		while (++j < 15 - ft_nbrlen(t_b[i]))
			ft_putchar(' ');
		ft_putstr("||\n", 1);
		i++;
	}
	ft_putstr("||=======================||=======================||\n", 1);
	ft_putstr("========= STACK A ================ STACK B =========\n\n", 1);
}
