/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:17:26 by macamach          #+#    #+#             */
/*   Updated: 2025/11/10 11:33:50 by macamach         ###   ########.fr       */
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
	int				i;
	int				result;
	char			*base;
	char			*str;
	unsigned long	ul;

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
			{
				base = "0123456789";
				ft_putnbr_base_fd(va_arg(args, int), base, 1);
			}
			if (format[i] == 'i')
				base = "0123456789";
			{
				base = "0123456789";
				ft_putnbr_base_fd(va_arg(args, int), base, 1);
			}
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					ft_putstr_fd("(null)", 1);
				else
					ft_putstr_fd(str, 1);
			}
			if (format[i] == 'c')
				ft_putchar_fd(va_arg(args, int), 1);
			if (format[i] == 'p')
			{
				ul = (unsigned long)va_arg(args, void *);
				if (ul == 0)
					ft_putstr_fd("(nil)", 1);
				else
				{
					ft_putstr_fd("0x", 1);
					base = "0123456789abcdef";
					ft_putnbr_base_fd(ul, base ,1);
				}
			}
			if (format[i] == 'u')
			{
				base = "0123456789";
				ft_putnbr_base_fd((unsigned int)va_arg(args, unsigned int), base, 1);
			}
			if (format[i] == 'x')
			{
				base = "0123456789abcdef";
				ft_putnbr_base_fd((unsigned int)va_arg(args, unsigned int), base, 1);
			}
			if (format[i] == 'X')t
			{
				base = "0123456789ABCDEF";
				ft_putnbr_base_fd((unsigned int)va_arg(args, unsigned int), base, 1);
			}
			
		}
		else
			ft_putchar_fd(format[i], 1);
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
