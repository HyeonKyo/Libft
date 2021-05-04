void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		write(fd, s[i], 1);
	write(fd, "\n", 1);
}
