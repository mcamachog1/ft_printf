/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:55:14 by macamach          #+#    #+#             */
/*   Updated: 2025/11/12 16:26:54 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"
//#include <stdio.h>

void	ft_helper_x(unsigned int n, int lower, int *count)
{
	char	*base;

	if (lower)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
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
