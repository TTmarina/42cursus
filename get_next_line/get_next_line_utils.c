/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:34:22 by tmarina-          #+#    #+#             */
/*   Updated: 2023/02/22 18:32:15 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_read_file(int fd, t_buffer *buffer)

{
	buffer->size = read(fd, buffer->data, BUFFER_SIZE);
	if (buffer->size == -1)
		return (-1);
	buffer->data[buffer->size] = '\0';
	return (buffer->size);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		x;
	char const	*sr;
	char		*des;

	if (dest == NULL && src == NULL)
		return (NULL);
	x = 0;
	sr = src;
	des = dest;
	while (x < n)
	{
		des[x] = sr[x];
		x++;
	}
	return (des);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst > src)
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

void	ft_free_resources(char **line, t_buffer *buffer)
{
	free(buffer->data);
	buffer->data = NULL;
	buffer->size = 0;
	free(*line);
	*line = NULL;
}

int	gnl_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	return (-1);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}