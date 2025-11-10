/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:17:26 by macamach          #+#    #+#             */
/*   Updated: 2025/11/10 14:59:17 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
//#include "./Libft/libft.h"
#include "helpers.h"

int	ft_printf(const char *format, ...);
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int				i;
	int				result;
	int				count;
	char			*base;
	char			*str;
	unsigned long	ul;

	result = 0;
	count = 0;
	if (format == NULL)
		return (-1);
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == '%')
				ft_putchar_fd_helper('%', 1, &count);
			if (format[i] == 'd')
				ft_putnbr_fd_helper(va_arg(args, int), 1, &count);
			if (format[i] == 'i')
				ft_putnbr_fd_helper(va_arg(args, int), 1, &count);
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					ft_putstr_fd_helper("(null)", 1, &count);
				else
					ft_putstr_fd_helper(str, 1, &count);
			}
			if (format[i] == 'c')
				ft_putchar_fd_helper(va_arg(args, int), 1, &count);
			if (format[i] == 'p')
			{
				ul = (unsigned long)va_arg(args, void *);
				if (ul == 0)
					ft_putstr_fd_helper("(nil)", 1, &count);
				else
				{
					ft_putstr_fd_helper("0x", 1, &count);
					base = "0123456789abcdef";
					ft_putnbr_base_fd_helper(ul, base ,1, &count);
				}
			}
			if (format[i] == 'u')
			{
				base = "0123456789";
				ft_putnbr_base_fd_helper((unsigned int)va_arg(args, unsigned int), base, 1, &count);
			}
			if (format[i] == 'x')
			{
				base = "0123456789abcdef";
				ft_putnbr_base_fd_helper((unsigned int)va_arg(args, unsigned int), base, 1, &count);
			}
			if (format[i] == 'X')
			{
				base = "0123456789ABCDEF";
				ft_putnbr_base_fd_helper((unsigned int)va_arg(args, unsigned int), base, 1, &count);
			}
			
		}
		else
			ft_putchar_fd_helper(format[i], 1, &count);
		i++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	int	n;
	int *pointer;

	n = 42;
	pointer = &n;
	ft_printf("ft_printf\nn1:%s n2:%d n3:%% n4:%c n5:%p n6:%u n7:%x n8:%X\n", ((char *)0), 20, '\0', ((void *)0) , 2147483647, 3500, 3500);
	printf("printf\nn1:%s n2:%d n3:%% n4:%c n5:%p n6:%u n7:%x n8:%X\n", (char *)0, 20, '\0', ((void *)0), 2147483647, 3500, 3500);
	return (0);
}
