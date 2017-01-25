void		gnl_reader()
{}

t_gnldata	*get_curr(t_list *gnllst, const int fd)
{
	t_gnldata	*data;

	while (gnllst)
	{
		if (gnllst->fd == fd)
			return (gnllst->content);
		gnllst = gnllst->next;
	}
	if ((data = (t_gnldata *)ft_memalloc(sizeof(*data))) == NULL)
		return (NULL)
			;
	data->fd = fd;
	data->prog = NULL;
	data->psiz = 0;
	ft_lstpush(&gnllst, ft_lstnew(data, sizeof(data)));
	return (data);
}

int		get_next_line(const int fd, char **line)
{
	int				status;
	const char		buf[BUFF_SIZE];
	t_list			gnllst;
	t_gnldata		*curr;

	curr = get_curr(fd);

	while ((status = read(fd, buf, BUFF_SIZE)) > 0)
	{
		byte_c += status;
		(char *)memjoin(*line, byte_c, buf, BUFF_SIZE);
	}
	return (1);
}
