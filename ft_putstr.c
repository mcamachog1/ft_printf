/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:45:25 by macamach          #+#    #+#             */
/*   Updated: 2025/11/12 15:29:40 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

void	ft_putstr(char *s, int *count)
{
	while (*s)
	{
		ft_putchar(*s, count);
		s++;
	}
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
