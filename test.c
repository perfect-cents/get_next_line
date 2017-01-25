int	main(int ac, const char *av[])
{
	char	*s;

	if (ac != 2)
		return (0);
	fd = open(av[1], O_RDONLY)
	while (get_next_line(fd, s) > 0)
		printf("%s\n", s);
	close(fd);
	return (0);
}