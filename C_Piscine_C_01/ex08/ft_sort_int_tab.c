/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarqu <andmarqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 20:01:59 by andmarqu          #+#    #+#             */
/*   Updated: 2026/03/15 16:44:17 by andmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	swap(int *xp, int *yp);
void	bubble_sort(int arr[], int n);

void	ft_sort_int_tab(int *tab, int size)
{
	bubble_sort(tab, size);
}

void	swap(int *xp, int *yp)
{
	int	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	bubble_sort(int arr[], int n)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (n == 1)
		return ;
	while (i < n - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			swap(&arr[i], &arr[i + 1]);
			count++;
		}
		i++;
	}
	if (count == 0)
		return ;
	bubble_sort(arr, n - 1);
}

/*int	main(void)
{
	int	my_arr[5] = {99, 38, 5, 895, 1};
	int	i;

	ft_sort_int_tab(my_arr, 5);
	i = 0;
	while (my_arr[i] != '\0')
	{
		printf("%d ", my_arr[i]);
		i++;
	}
	return (0);
}*/
