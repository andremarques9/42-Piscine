/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarqu <andmarqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:48:29 by andmarqu          #+#    #+#             */
/*   Updated: 2026/03/01 22:13:12 by andmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c);

void	ft_one_column(int x, int y)
{
	int	i;
	int	j;
	int	v;

	v = y - 1;
	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (j >= v)
				break ;
			ft_putchar('*');
			ft_putchar('\n');
			i++;
		}
		j++;
	}
}

void	ft_top_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == x && i == 1)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		else if (i == 1)
		{
			ft_putchar('/');
		}
		else if (i == x)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

void	ft_mid_lines(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	while (l <= y - 2)
	{
		c = 1;
		while (c <= x)
		{
			if (c == 1)
				ft_putchar('*');
			else if (c == x)
			{
				ft_putchar('*');
				ft_putchar('\n');
			}
			else
				ft_putchar(' ');
			c++;
		}
		l++;
	}
}

void	ft_bottom_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == x && i == 1)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		else if (i == 1)
		{
			ft_putchar('\\');
		}
		else if (i == x)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	else if (y == 1)
	{
		ft_top_line(x);
	}
	else if (y == 2)
	{
		ft_top_line(x);
		ft_bottom_line(x);
	}
	else if (x == 1)
	{
		ft_top_line(x);
		ft_one_column(x, y);
		ft_bottom_line(x);
	}
	else
	{
		ft_top_line(x);
		ft_mid_lines(x, y);
		ft_bottom_line(x);
	}
}
