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

int find_endl(char *stati_buff)
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

char *get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	int			linec;
	static char *static_buf;
	
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	buffer = (char)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	linec = 0;
	while (find_endl(static_buf) == -1)
	{
		linec = read(fd, buffer, BUFFER_SIZE);
		if (linec <= 0)
			break ;
		buffer[linec] = '\0';
		static_buf = ft_strjoin(static_buf, buffer);
	}
	free (buffer);
	if (linec == -1)
		return (NULL);
	// line = str
	return (line);
}