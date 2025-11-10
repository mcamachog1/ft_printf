/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:11:13 by macamach          #+#    #+#             */
/*   Updated: 2025/11/10 10:42:21 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putnbr_base_fd(unsigned long n, char *base, int fd)
{
	char	number;
	int		nbase;
	int		count;

	nbase = 0;
	count = 0;
	while (base[nbase])
		nbase++;
	if (n >= nbase)
		count += ft_putnbr_base_fd(n / nbase, base, fd);
	number = base[n % nbase];
	count += write(fd, &number, 1);
	return (count);
}

/*
int	main(void)
{
	//ft_putnbr_base(-2147483647, "0123456789");
	ft_putnbr_base_fd(18, "0123456789ABCDEF", 1);
	return (0);
}
*/
