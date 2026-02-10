#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
    int result1;
    int result2;
    void *ptr = (void *)0x7ffeefbff5a8;
    void *null_ptr = NULL;
    
    printf("---Printf Original---\n");
    result1 = printf("(%%c) %c %c%c ", 'A', '0', '\n');
    printf(" (%d characters were written)\n\n", result1);
    result1 = printf("(%%s) %s%s%s \n", "hola", "", (char *)NULL);
    printf(" (%d characters were written)\n\n", result1);
    result1 = printf("(%%d) %d%d %d %d \n", 42, 0, INT_MIN, 0);
    printf(" (%d characters were written)\n\n", result1);
    result1 = printf("(%%i) %i %i%i\n", -42, INT_MAX, 0);
    printf(" (%d characters were written)\n\n", result1);
    result1 = printf("(%%u) %u%u%u \n", 42, 0, UINT_MAX);
    printf(" (%d characters were written)\n\n", result1);
    result1 = printf("(%%x) %x %x %x \n", 255, 0, UINT_MAX);
    printf(" (%d characters were written)\n\n", result1);
    result1 = printf("(%%X) %X%X%X\n", 255, 0, UINT_MAX);
    printf(" (%d characters were written)\n\n", result1);
    result1 = printf("(%%p) %p%p %%42%% %%\n", ptr, null_ptr);
    printf(" (%d characters were written)\n\n", result1);

    ft_printf("---Printf Prueba---\n");
    result2 = ft_printf("(%%c) %c %c%c ", 'A', '0', '\n');
    ft_printf(" (%d characters were written)\n\n", result2);
    result2 = ft_printf("(%%s) %s%s%s \n", "hola", "", (char *)NULL);
    ft_printf(" (%d characters were written)\n\n", result2);
    result2 = ft_printf("(%%d) %d%d %d %d \n", 42, 0, INT_MIN, 0);
    ft_printf(" (%d characters were written)\n\n", result2);
    result2 = ft_printf("(%%i) %i %i%i\n", -42, INT_MAX, 0);
    ft_printf(" (%d characters were written)\n\n", result2);
    result2 = ft_printf("(%%u) %u%u%u \n", 42, 0, UINT_MAX);
    ft_printf(" (%d characters were written)\n\n", result2);
    result2 = ft_printf("(%%x) %x %x %x \n", 255, 0, UINT_MAX);
    ft_printf(" (%d characters were written)\n\n", result2);
    result2 = ft_printf("(%%X) %X%X%X\n", 255, 0, UINT_MAX);
    ft_printf(" (%d characters were written)\n\n", result2);
    result2 = ft_printf("(%%p) %p%p %%42%% %%\n", ptr, null_ptr);
    ft_printf(" (%d characters were written)\n\n", result2);

    return (0);
}
