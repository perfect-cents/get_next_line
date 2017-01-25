#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

#define BUFF_SIZE 32

typedef struct
{
	const int	fd;
	void		*prog;
	int			psiz;
}				t_gnldata;

int						get_next_line(const int fd, char **line);

#endif