/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:24:40 by macamach          #+#    #+#             */
/*   Updated: 2025/11/12 15:47:13 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_putnbr(int n, int *count)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		n = -n;
	}
	if (n < 10)
	{
		c = n + '0';
		ft_putchar(c, count);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, count);
		c = (n % 10) + '0';
		ft_putchar(c, count);
	}
}
/*
int	main(void)
{
	int	counter;

	counter = 0;
	printf("\n");
	ft_putnbr(-2147483648, &counter);
	printf("\n");
	ft_putnbr(2147483647, &counter);
	printf("\n");
	ft_putnbr(42, &counter);
	printf("\n");
	printf("Counter:%d\n",counter);
	return (0);
}
*/
