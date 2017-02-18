#include <get_next_line.h>
#include <libft.h>
#include <fcntl.h>

int	main(int ac, const char *av[])
{
	char	*s;
	int		fd1;
	int		status;
	int		i;

	if (ac != 2)
		return (0);
	fd1 = open(av[1], O_RDONLY);
	i = 1;
	while ((status = get_next_line(fd1, &s)) > 0)
	{
		ft_putstr(s);
		ft_putchar('\n');
		free(s);
		i++;
	}
	ft_putstr(s ? s : "");
	free(s);
	return (0);
}
