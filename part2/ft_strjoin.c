char    *ft_strjoin(char const *s1, char const *s2)
{
    int     len1;
    int     len2;
    int     i;
    char    *str;

    len1 = 0;
    i = -1;
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;
    str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (str == 0)
        return (0);
    while (s1[++i])
        str[i] = s1[i];
    i = -1;
    while (s2[++i])
        str[len1 + i] = s2[i];
    str[len1 + i] = 0;
    return (str);
}