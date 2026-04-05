/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarqu <andmarqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:49:34 by andmarqu          #+#    #+#             */
/*   Updated: 2026/03/13 19:51:04 by andmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long abs;
	const int ascii_zero = 48;

	abs = nb;
	if (nb >= 0)
	{
		if (nb >= 10)
		{
			ft_putnbr(abs / 10);
			ft_putnbr(abs % 10);
		}
		else
		{
			ft_putchar(abs + ascii_zero);
			//break ;
		}
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(abs);
	}
}

int	main(void)
{
	ft_putnbr(-99);
}
