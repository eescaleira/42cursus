/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:56:56 by eescalei          #+#    #+#             */
/*   Updated: 2023/05/29 19:03:53 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// BUFFER_SIZE

static int find_endl(char *stati_buff)
{
	int	i;

	i = 0;
	if (!stati_buff)
		return (-1);
	while (stati_buff[i] != '\n' || stati_buff[i] != '\0')
		i++;
	if (stati_buff[i] != '\0')
		return (-1);
	return (i);
}

static char	*dup_line(char *static_buf, int i)
{
	char	*line;
	int		c;

	line = (char *)malloc((i +2) * sizeof(char));
	if (!line)
		return (NULL);
	c = 0;
	while (static_buf[c] != '\n')
	{
		line[c] = static_buf[c];
		c++;
	}
	line[c] = '\n';
	line[c +1] = '\0';
	return (line);
}

static char calc_line(char *static_buf)
{
	char	*line;
	int		i;

	if (ft_strlen(static_buf) <= 0)
		return (NULL);
	i = find_endl(static_buf);
	if (i == -1 || i == (int)ft_strlen(static_buf) - 1)
	{
		line = ft_strdup(static_buf);
		return (line);
	}
	line = dup_line(static_buf, i);
}

static char calc_buf (char *static_buf)
{
	int	i;
	unsigned int	buf_len;

	if (!static_buf)
		return (NULL);
	buf_len = ft_strlen(static_buf);
	i = find_endl(static_buf);
	if (i == -1 || buf_len - i == 1)
	{
		free(static_buf);
		return (NULL);
	}
	static_buf = ft_substr(static_buf, i +1, buf_len - i - 1);
	return(static_buf);
}

char *get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	int			linec;
	static char *static_buf[10000000];
	
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	buffer = (char)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	linec = 0;
	while (find_endl(static_buf[fd]) == -1)
	{
		linec = read(fd, buffer, BUFFER_SIZE);
		if (linec <= 0)
			break ;
		buffer[linec] = '\0';
		static_buf[fd] = ft_strjoin(static_buf[fd], buffer);
	}
	free (buffer);
	if (linec == -1)
		return (NULL);
	line = calc_line(static_buf[fd]);
	static_buf[fd] = calc_buf(static_b[fd]);
	return (line);
}