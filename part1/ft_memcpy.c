#include <unistd.h>
#include <stdio.h>

void    *ft_memcpy(void *dest, const void *source, size_t num)
{
    char        *dst;
    const char  *src;
    int         i;

    i = -1;
    dst = dest;
    src = source;
    while (++i < num)
        dst[i] = src[i];
    return (dest);
}