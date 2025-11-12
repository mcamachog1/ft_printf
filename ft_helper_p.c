/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:55:14 by macamach          #+#    #+#             */
/*   Updated: 2025/11/12 16:53:24 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

void	ft_helper_p(unsigned long ul, int *count)
{
	char	*base;

	if (ul == 0)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	base = "0123456789abcdef";
	ft_putnbr_base(ul, base, count);
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
