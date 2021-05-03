void *ft_memmove (void *dest, const void *src, size_t num)
{
    char buf[num];
    char *d;
    const char *s;
    int i;

    i = -1;
    d = dest;
    s = src;
    while (++i < num)
        buf[i] = s[i];
    i = -1;
    while (++i < num)
        d[i] = buf[i];
    return (dest);
}