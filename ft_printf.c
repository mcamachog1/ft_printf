/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:17:26 by macamach          #+#    #+#             */
/*   Updated: 2025/11/05 14:12:34 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "./Libft/libft.h"

int	ft_printf(const char *format, ...);
int	count_specifiers(const char *format);

int	count_specifiers(const char *format)
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
	int		spec_count;

	if (format == NULL)
		return (-1);
	spec_count = count_specifiers(format);
	printf("Number of specifiers:%d\n", spec_count);
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == '%')
				write(1, "%", 1);
			else
			{
				if (format[i] == 'd')
					ft_putstr_fd(ft_itoa(va_arg(args, int)), 1);
				if (format[i] == 's')
					ft_putstr_fd(va_arg(args, char *), 1);
				if (format[i] == 'c')
					ft_putchar_fd(va_arg(args, int), 1);
			}
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

	result = ft_printf("ft_printf\nn1:%s n2:%d n3:%% n4:%c\n", "310", 20, 'R');
	printf("printf\nn1:%s n2:%d n3:%% n4:%c\n", "310", 20, 'R');
	return (result);
}
