int ft_memcmp(const void* ptr1, const void* ptr2, size_t num)
{
    const char *s1;
    const char *s2;
    int i;

    i = 0;
    s1 = ptr1;
    s2 = ptr2;
    while (!(s1[i] - s2[i]) && i < num)
        i++;
    return (s1[i] - s2[i]);
}