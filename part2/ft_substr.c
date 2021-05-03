char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    int     i;

    i = -1;
    str = (char *)mallac(len * sizeof(char));
    if (str == 0)
        return (NULL);
    while (++i < len)
        str[i] = s[start + i];
    return (str);
}