/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:55:03 by macamach          #+#    #+#             */
/*   Updated: 2025/11/17 09:53:14 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long n, char *base, int *count)
{
	char			number;
	unsigned long	nbase;

	nbase = 0;
	while (base[nbase])
		nbase++;
	if (n >= nbase)
		ft_putnbr_base(n / nbase, base, count);
	number = base[n % nbase];
	ft_putchar(number, count);
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
