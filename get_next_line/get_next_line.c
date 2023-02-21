/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:34:17 by tmarina-          #+#    #+#             */
/*   Updated: 2023/02/21 12:44:17 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_next_line(int fd)
{
	static t_buffer buffer = {NULL, 0};
	char *line = NULL;
	int i= 0;
	int bytes_read = 0;
	
	if (buffer.data == NULL || buffer.size == 0)
	{
		buffer.data = malloc(BUFFER_SIZE + 1);
		if (buffer.data == NULL)
			return (NULL);
	}
	while (1)
	{
		if (i >= buffer.size)
	 	{
			bytes_read = ft_read_file(fd, &buffer);
			if (bytes_read <= 0)
			break;
			i = 0;
		}
		if (buffer.data[i] == '\n')
		{
			line = malloc(i + 1);
			if (line == NULL)
				return (NULL);
			ft_memcpy(line, buffer.data, i);
			line[i] = '\0';
			ft_memmove(buffer.data, buffer.data + i + 1, buffer.size - i);
			buffer.size -= i + 1;
			break;
		}
		i++;
	}
	if (bytes_read == 0 && line == NULL)
	{
		line = malloc(buffer.size + 1);
		if (line == NULL)
			return (NULL);
		ft_memcpy(line, buffer.data, buffer.size);
		line[buffer.size] = '\0';
		buffer.size = 0;
	}
	return (line);
}
