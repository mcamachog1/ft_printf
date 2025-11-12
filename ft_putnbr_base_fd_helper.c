/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd_helper.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:55:03 by macamach          #+#    #+#             */
/*   Updated: 2025/11/12 10:59:59 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

void	ft_putnbr_base_fd_helper(unsigned long n, char *base,
int fd, int *count)
{
	char			number;
	unsigned long	nbase;

	nbase = 0;
	while (base[nbase])
		nbase++;
	if (n < 0)
	{
		ft_putchar_fd_helper('-', fd, count);
		n = -n;
	}
	if (n >= nbase)
		ft_putnbr_base_fd_helper(n / nbase, base, fd, count);
	number = base[n % nbase];
	ft_putchar_fd_helper(number, fd, count);
}
/*
int	main(void)
{
	int	counter;

	counter = 0;
	printf("\n");
	ft_putnbr_base_fd_helper(2147483647, "0123456789", 1, &counter);
	printf("\n");
	ft_putnbr_base_fd_helper(814, "0123456789ABCDEF", 1, &counter);
	printf("\n");
	printf("Counter:%d\n",counter);
	return (0);
}
*/
