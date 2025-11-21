/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:17:26 by macamach          #+#    #+#             */
/*   Updated: 2025/11/19 12:23:38 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

static void	router(char c, va_list *p_args, int *count)
{
	if (c == '%')
		ft_putchar('%', count);
	if (c == 'd')
		ft_putnbr(va_arg(*p_args, int), count);
	if (c == 'i')
		ft_putnbr(va_arg(*p_args, int), count);
	if (c == 's')
		ft_helper_s(va_arg(*p_args, char *), count);
	if (c == 'c')
		ft_putchar((char)va_arg(*p_args, int), count);
	if (c == 'p')
		ft_helper_p((unsigned long)va_arg(*p_args, void *), count);
	if (c == 'u')
		ft_helper_u(va_arg(*p_args, unsigned int), count);
	if (c == 'x')
		ft_helper_x(va_arg(*p_args, unsigned int), 1, count);
	if (c == 'X')
		ft_helper_x(va_arg(*p_args, unsigned int), 0, count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			count;

	if (format == 0)
		return (-1);
	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			router(format[i], &args, &count);
		}
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
/*
int	main(void)
{
	int	n;
	int *pointer;

	n = 42;
	pointer = &n;
	printf("\n%d\n", printf("%u", 21212121));
	printf("\n%d\n", printf("%u", 21212121));
	return (0);
}
*/
