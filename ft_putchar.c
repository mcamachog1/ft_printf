/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:53:51 by macamach          #+#    #+#             */
/*   Updated: 2025/11/12 15:46:01 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include "libft.h" 

void	ft_putchar(char c, int *count)
{
	ssize_t	written;

	written = write(1, &c, 1);
	if (written == 1)
		(*count)++;
}
/*
int	main(void)
{
	int	count;

	count = 0;
	ft_putchar_fd_helper('\0', 1, &count);
	//printf("\n%c\n", '\0');
	//printf("Count:%d\n", count);

	ft_putchar_fd_helper('R', 1, &count);
	//printf("\n%c\n", 'R');
	printf("Count:%d\n", count);
	return (0);
}
*/
