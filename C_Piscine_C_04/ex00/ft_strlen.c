/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarqu <andmarqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:48:10 by andmarqu          #+#    #+#             */
/*   Updated: 2026/03/15 16:53:13 by andmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

//void	ft_putchar(char c);
//void	ft_putstr(char *str);
//int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/*int	main(void)
{
	int	str_size;

	str_size = ft_strlen("Sao Paulo");
	printf("%d \n", str_size);
	return (0);
}*/
