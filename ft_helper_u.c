/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:55:14 by macamach          #+#    #+#             */
/*   Updated: 2025/11/12 16:18:09 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

void	ft_helper_u(unsigned int n, int *count)
{
	char	*base;

	base = "0123456789";
	ft_putnbr_base(n, base, count);
}
/*
int	main(void)
{
	int	counter;

	counter = 0;
	ft_putstr_fd_helper("Hi! Hello world.", 1, &counter);
	printf("\nCounter:%d\n", counter);
	return (0);
}
*/
