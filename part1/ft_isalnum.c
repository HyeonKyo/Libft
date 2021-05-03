int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return (1);
    else if (c >= 'a' && c <= 'z')
        return (2);
    else
        return (0);
}