#include <get_next_line.h>
#include <libft.h>
#include <fcntl.h>
#include <time.h>
#include <stdio.h>

int	main(int ac, const char *av[])
{
	char	*s;
	int		fd1;
	int		status;
	int		i;

	if (ac != 2)
		return (0);

	clock_t start = clock(), diff;
	fd1 = open(av[1], O_RDONLY);

	i = 0;
	while ((status = get_next_line(fd1, &s)) > 0)
	{
		free(s);
		i++;
	}
	free(s);

	ft_putnbr(i);
	ft_putstr(" lines read\nBUFF_SIZE == ");
	ft_putnbr(BUFF_SIZE);
	ft_putchar('\n');

	diff = clock() - start;
	int msec = diff * 1000 / CLOCKS_PER_SEC;
	printf("Time taken %d.%.3ds\n", msec/1000, msec%1000);

	return (0);
}
