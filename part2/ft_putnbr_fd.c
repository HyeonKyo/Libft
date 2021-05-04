void	print_num(int n, int fd)
{
	char	c;

	if (n == 0)
		return ;
	print_num(n / 10, fd);
	c = n % 10 + '0';
	write(fd, c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	print_num(n, fd);
}
