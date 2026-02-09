#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
    int result1;
    int result2;
    void *ptr = (void *)0x7ffeefbff5a8;
    void *null_ptr = NULL;
    
    printf("Printf Original -> ");
    result1 = printf("(%%c) %c %c%c\n (%%s) %s %s%s \n (%%d)%d%d %d %d (%%i) %i %i%i (%%u) %u%u%u (%%x) %x %x %x (%%X) %X%X%X (%%p)%p%p %%42%% %%\n", 'A', '0', '\n', "hola", "", (char *)NULL, 42, 0, INT_MIN, 0, -42, INT_MAX, 0, 42, 0, UINT_MAX, 255, 0, UINT_MAX, 255, 0, UINT_MAX, ptr, null_ptr);
    printf(" (%d characters were written)\n\n", result1);
    result1 = printf("(%%c) %c %c%c\n (%%s) %s %s%s \n", 'A', '0', '\n', "hola", "", (char *)NULL);
    printf(" (%d characters were written)\n\n", result1);
    result1 = printf("(%%d)%d%d %d %d \n(%%i) %i %i%i\n", 42, 0, INT_MIN, 0, -42, INT_MAX, 0);
    printf(" (%d characters were written)\n\n", result1);

    ft_printf("Printf Prueba -> ");
    result2 = ft_printf("(%%c) %c %c%c\n (%%s) %s %s%s \n (%%d)%d%d %d %d (%%i) %i %i%i (%%u) %u%u%u (%%x) %x %x %x (%%X) %X%X%X (%%p)%p%p %%42%% %%\n", 'A', '0', '\n', "hola", "", (char *)NULL, 42, 0, INT_MIN, 0, -42, INT_MAX, 0, 42, 0, UINT_MAX, 255, 0, UINT_MAX, 255, 0, UINT_MAX, ptr, null_ptr);
	ft_printf(" (%d characters were written)\n", result2);

    return (0);
}
