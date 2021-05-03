void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char *dst;
    char *s;
    int i;

    i = 0;
    dst = dest;
    s = src;
    while (n--)
    {
        if (s[i] == c)
            return (src + i + 1);
        dst[i] = s[i];
        i++;
    }
    return (0);
}