/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:17:48 by emtran            #+#    #+#             */
/*   Updated: 2021/10/28 18:11:51 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_bonus.h"

int	the_end_of_the_world(t_stack *t_stack)
{
	if (t_stack->res == -1)
		ft_putstr("Error\n", 1);
	else if (natural_order_of_things(t_stack) == 0
		&& t_stack->pos_b == t_stack->size - 1)
		ft_putstr("OK\n", 1);
	else
		ft_putstr("KO\n", 1);
	free_and_love(t_stack);
	return (0);
}

void	everything_in_its_place(t_stack *t_stack, char *buf)
{
	if (ft_cmp(buf, "sa\n"))
		swap_a(t_stack);
	else if (ft_cmp(buf, "sb\n"))
		swap_b(t_stack);
	else if (ft_cmp(buf, "pa\n"))
		push_a(t_stack);
	else if (ft_cmp(buf, "pb\n"))
		push_b(t_stack);
	else if (ft_cmp(buf, "ra\n"))
		rotate_a(t_stack);
	else if (ft_cmp(buf, "rb\n"))
		rotate_b(t_stack);
	else if (ft_cmp(buf, "rra\n"))
		renverse_a(t_stack);
	else if (ft_cmp(buf, "rrb\n"))
		renverse_b(t_stack);
	else if (ft_cmp(buf, "ss\n"))
		double_swap(t_stack);
	else if (ft_cmp(buf, "rr\n"))
		double_rotate(t_stack);
	else if (ft_cmp(buf, "rrr\n"))
		double_renverse(t_stack);
	else
		t_stack->res = -1;
	dont_respect_the_ope(t_stack);
}

int	read_stdout(t_stack *t_stack)
{
	int		i;
	int		end;
	char	buf[1000];

	while (1)
	{
		i = 0;
		while (i == 0 || (i > 0 && buf[i - 1] != '\n'))
		{
			end = read(0, &buf[i], 1);
			i++;
			if (end == -1)
			{
				free_and_love(t_stack);
				return (-1);
			}
			if (end == 0)
				return (the_end_of_the_world(t_stack));
		}
		buf[i] = 0;
		everything_in_its_place(t_stack, buf);
	}
}

void	free_and_love(t_stack *t_stack)
{
	free(t_stack->stacka);
	free(t_stack->stackb);
}

int	main(int argc, char **argv)
{
	t_stack	t_stack;

	if (check_erratum(argc, argv) == 1 || argc == 1)
		exit(EXIT_FAILURE);
	t_stack.size = argc;
	t_stack.pos_a = 0;
	t_stack.pos_b = t_stack.size - 1;
	putintab(&t_stack, argv);
	init_tab(&t_stack);
	if ((check_erratum_tab(&t_stack) == 1))
		exit(EXIT_FAILURE);
	t_stack.res = 0;
	read_stdout(&t_stack);
}
