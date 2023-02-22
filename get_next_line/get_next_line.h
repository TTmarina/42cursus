/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:34:09 by tmarina-          #+#    #+#             */
/*   Updated: 2023/02/22 19:34:11 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

typedef struct s_buffer
{
	char	*data;
	int		size;
}t_buffer;

char		*get_next_line(int fd);
int			ft_read_file(int fd, t_buffer *buffer);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		ft_free_resources(char **line, t_buffer *buffer);
int			gnl_strchr(const char *s, int c);
size_t		ft_strlen(const char *str);

#endif