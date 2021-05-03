void    *ft_calloc(size_t n, size_t size)
{
    char *ptr;
    int i;

    i = 0;
    if (n == 0 || size == 0)
        return (0);
    ptr = mallac(n * size);
    if (ptr == 0)
        return (0);
    while (i < n * size)
        ptr[i++] = 0;
    return (ptr);
}