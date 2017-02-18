#include <get_next_line.h>
#include <libft.h>
#include <fcntl.h>

void	putxlines(int lc, int fd)
{
	char	*s;

	while (lc)
	{
		ft_putnbr(get_next_line(fd, &s));
		ft_putstr(":");
		ft_putnbr(lc);
		ft_putstr("|");
		ft_putstr(s ? s : "NULL");
		ft_putchar('\n');
		free(s);
		lc--;
	}
}

int	main(int ac, const char *av[])
{

	int		fd1;
	int		fd2;
	int		fd3;
	int		lc;

	if (ac != 4)
		return (0);
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	fd3 = open(av[3], O_RDONLY);

	lc = 3;

	ft_putendl("fd1");
	putxlines(lc, fd1);
	ft_putendl("fd2");
	putxlines(lc, fd2);
	ft_putendl("fd3");
	putxlines(lc, fd3);
	ft_putendl("fd2");
	putxlines(lc, fd2);
	ft_putendl("fd == -1");
	putxlines(lc, -1);
	ft_putendl("fd1");
	putxlines(lc, fd1);
	ft_putendl("fd3");
	putxlines(lc, fd3);

	return (0);
}
