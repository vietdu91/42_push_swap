/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:41:05 by emtran            #+#    #+#             */
/*   Updated: 2021/10/22 16:41:48 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_bonus.h"

void	ft_putstr(char *str, int fd)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(fd, &str[a], 1);
		a++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

long int	ft_atoi(const char *str)
{
	int			i;
	long int	a;
	int			signe;

	i = 0;
	a = 0;
	signe = 1;
	if (str[i] == '\0')
	{
		ft_putstr("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		a = a * 10 + str[i++] - 48;
	return (a * signe);
}
