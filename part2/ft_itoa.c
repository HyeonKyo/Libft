int		get_size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		n = -n;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}


char	*ft_itoa(int n)
{
	int		size;
	char	*buf;

	if (n == -2147483648)
		return ("-2147483648");
	size = get_size(n) + 1;
	if (n < 0)
		size = size + 1;
	buf = (char *)malloc(size * sizeof(char));
	if (n < 0)
	{
		buf[0] = '-';
		n = -n;
	}
	buf[--size] = 0;
	while (n)
	{
		buf[--size] = n % 10 + '0';
		n = n / 10;
	}
	return (buf);
}
/*
int	main()
{
	int n1 = -21412392;
	int n2 = 21412392;
	char *buf;

	buf = ft_itoa(n1);
	printf("%s\n", buf);
	buf = ft_itoa(n2);
	printf("%s\n", buf);
	return (0);
}*/
