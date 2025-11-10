/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_helper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:45:25 by macamach          #+#    #+#             */
/*   Updated: 2025/11/10 15:01:32 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"
//#include <stdio.h>

void	ft_putstr_fd_helper(char *s, int fd, int *count)
{
	if (s == 0)
		return ;
	while (*s)
	{
		ft_putchar_fd_helper(*s, fd, count);
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
