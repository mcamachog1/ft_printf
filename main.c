#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int num = 42;
    char *str = "Hola mundo";

    // Comparación con printf real
    printf("Original printf: %d\n", num);
    ft_printf("Mi ft_printf: %d\n", num);

    printf("Original printf: %s\n", str);
    ft_printf("Mi ft_printf: %s\n", str);

    printf("Original printf: %x\n", num);
    ft_printf("Mi ft_printf: %x\n", num);

    printf("Original printf: %p\n", &num);
    ft_printf("Mi ft_printf: %p\n", &num);

    return 0;
}

/*
For testing lib:
cc main.c libftprintf.a -o test

For compile libftprintf.a
ar rcs libftprintf.a  $(MY_OBJECTS)
*/
