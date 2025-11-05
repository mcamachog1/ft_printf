/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:17:26 by macamach          #+#    #+#             */
/*   Updated: 2025/11/05 17:39:55 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "./Libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_putnbr_base_fd(unsigned long n, char *base, int fd);
static int	count_specifiers(const char *format);

static int	count_specifiers(const char *format)
{
	const char	*specifiers;
	int			i;
	int			count;

	specifiers = "cspdiuxX";
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] && ft_strchr(specifiers, format[i]))
				count++;
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		result;
	char	*base;

	result = 0;
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
				ft_putchar_fd('%', 1);
			if (format[i] == 'd')
				ft_putnbr_fd(va_arg(args, int), 1);
			if (format[i] == 'i')
				ft_putnbr_fd(va_arg(args, int), 1);
			if (format[i] == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
			if (format[i] == 'c')
				ft_putchar_fd(va_arg(args, int), 1);
			if (format[i] == 'p')
			{
				ft_putstr_fd("0x", 1);
				base = "0123456789abcdef";
				result += ft_putnbr_base_fd((unsigned long)va_arg(args, void *), base ,1);
			}
			if (format[i] == 'u')
				ft_putnbr_fd((unsigned int)va_arg(args, unsigned int), 1);
			
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	int	result;
	int	n;
	int *pointer;

	n = 42;
	pointer = &n;
	result = ft_printf("ft_printf\nn1:%s n2:%d n3:%% n4:%c n5:%p n6:%u\n", "310", 20, 'R', pointer, 2147483647);
	printf("printf\nn1:%s n2:%d n3:%% n4:%c n5:%p n6:%u\n", "310", 20, 'R', pointer, 2147483647);
	return (result);
}
