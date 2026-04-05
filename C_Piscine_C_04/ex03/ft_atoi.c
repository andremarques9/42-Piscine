/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarqu <andmarqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:36:55 by andmarqu          #+#    #+#             */
/*   Updated: 2026/03/19 16:14:55 by andmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(char c);
int	ft_atoi(char *str);

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	sign;
	int	atoi;

	sign = 1;
	atoi = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = sign * -1;
		}
		str++;
	}
	while (ft_isdigit(*str))
	{
		atoi = (atoi * 10) + (*str - 48);
		str++;
	}
	return (atoi * sign);
}

int	main (void)
{
	char	*test;
	int		atoi;

	test = " -2147483648";
	atoi = ft_atoi(test);
	printf("%d\n", atoi);
	return (0);
}
