/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:17:26 by macamach          #+#    #+#             */
/*   Updated: 2025/11/05 12:33:27 by macamach         ###   ########.fr       */
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

	specifiers = malloc(ft_strlen("cspdiuxX%") + 1);
	if (!specifiers)
		return (NULL);
	ft_strlcpy(specifiers, "cspdiuxX%", ft_strlen("cspdiuxX%") + 1);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] != '%')
			i++;
		else
		{
			if (format[i + 1] && ft_strchr(specifiers, format[i + 1]) != NULL)
				count++;
			i++;
		}
	}
	free((void *)specifiers);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	if (format == NULL)
		return (-1);
	printf("Total de especificadores = %d\n", count_specifiers(format));
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			if (format[i + 1] == '%')
				write(1, "%", 1);
			else
				write(1, "ESPECIFICADOR", 13);
			i += 2;
			continue ;
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	// va_start(args, format);
	/*
	while (i < format_len)
	{
			printf("%d\n", va_arg(args, int));
		i++;
	}

	va_end(args);
	*/
	return (0);
}

int	main(void)
{
	int	result;

	result = ft_printf("n1:%d y str1:%s porcentaje %% adicional\n", 10, "20");
	return (result);
}
