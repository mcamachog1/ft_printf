/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_helper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:24:40 by macamach          #+#    #+#             */
/*   Updated: 2025/11/10 14:52:39 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"
//#include <stdio.h>

void	ft_putnbr_fd_helper(int n, int fd, int *count)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_fd_helper("-2147483648", fd, count);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd_helper('-', fd, count);
		n = -n;
	}
	if (n < 10)
	{
		c = n + '0';
		ft_putchar_fd_helper(c, fd, count);
	}
	else if (n > 9)
	{
		ft_putnbr_fd_helper(n / 10, fd, count);
		c = (n % 10) + '0';
		ft_putchar_fd_helper(c, fd, count);
	}
}
/*
int	main(void)
{
	int	counter;

	counter = 0;
	printf("\n");
	ft_putnbr_fd_helper(-2147483648, 1, &counter);
	printf("\n");
	ft_putnbr_fd_helper(2147483647, 1, &counter);
	printf("\n");
	ft_putnbr_fd_helper(42, 1, &counter);
	printf("\n");
	printf("Counter:%d\n",counter);
	return (0);
}
*/
