void *ft_memchr(void *ptr, int value, size_t num)
{
    char *s;
    int i;

    s = ptr;
    i = 0;
    while (i < num)
    {
        if (s[i] == value)
            return (ptr + i);
        i++;
    }
    return (0);
}