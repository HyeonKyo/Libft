int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		find_char(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		*del_index;
	char	*str;

	i = -1;
	j = 0;
	k = 0;
	del_index = (int *)malloc(ft_strlen(s1) * sizeof(int));
	while (s1[++i])
		if (!find_char(s1[i], set))
			del_index[j++] = i;
	str = (char *)malloc((ft_strlen(s1) - j + 1) * sizeof(char));
	i = -1;
	j = 0;
	while (s1[++i])
		if (i != del_index[j])
			str[k++] = s1[i];
		else
			j++;
	str[k] = 0;
	free(del_index);
	return (str);
}
