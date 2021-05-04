int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = -1;
	str = (char *)malloc(ft_strlen((char *)s) * sizeof(char));
	if (str == 0)
		return (0);
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
