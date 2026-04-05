/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarqu <andmarqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:35:09 by andmarqu          #+#    #+#             */
/*   Updated: 2026/03/16 20:16:24 by andmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int j;
	int temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

int	main(void)
{
	int	my_arr[7] = {15, 10, 7, 2, 3, 4, 5};
	int	i;

	ft_rev_int_tab(my_arr, 7);
	i = 0;
	while (my_arr[i] != '\0')
	{
		printf("%d ", my_arr[i]);
		i++;
	}
	return (0);
}
