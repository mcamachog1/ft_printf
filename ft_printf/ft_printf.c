#include <stdio.h>
#include <stdarg.h>
#include "../Libft/libft.h"

int	ft_printf(const char *, ...);
int	count_specifiers(const char *);

int	count_specifiers(const char *format)
{
	char	specifiers[10] = "cspdiuxX%";
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] != '%')
			i++;
		else if (format[i + 1] && ft_strchr(specifiers, format[i + 1]) != NULL)
		{
			count++;
			i++;
		}
	}
	return (count);
	
}
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	format_len;
	int	i;

	i = 0;
	format_len = count_specifiers(format);
	if (format == NULL)
		return (-1);
	va_start(args, format);
	printf("Total de especificadores = %d\n", format_len);
	while (i < format_len)
	{
        	printf("%s\n", va_arg(args, char *));
		i++;
	}

	va_end(args);
	return (0);
}

int main()
{

    int result = ft_printf("n=%d y str=%s\n", "Hola" , "Mundo");
    return 0;
}
