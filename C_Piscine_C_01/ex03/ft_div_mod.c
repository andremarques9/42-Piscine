/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarqu <andmarqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:28:34 by andmarqu          #+#    #+#             */
/*   Updated: 2026/03/10 19:00:46 by andmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 3;
	div = 0;
	mod = 0;
	printf("Before function call: a is %d, b is %d,"
		" div is %d, mod is %d \n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("After function call: a is %d, b is %d,"
		" div is %d, mod is %d \n", a, b, div, mod);
	return (0);
}*/
