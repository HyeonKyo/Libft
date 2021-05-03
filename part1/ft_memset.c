void* ft_memset(void* ptr, int value, size_t num)
{
    char *str;
    int i;

    i = 0;
    str = ptr;
    while (i < num)
        str[i++] = value;
    return (ptr);
}