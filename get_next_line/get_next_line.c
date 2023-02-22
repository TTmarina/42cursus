/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:34:17 by tmarina-          #+#    #+#             */
/*   Updated: 2023/02/22 20:18:15 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static int	buffer_pos;
	static int	buffer_size;
	char		*line;
	int			line_size;

	static buffer[BUFFER_SIZE];
	buffer_pos = 0;
	buffer_size = 0;
	line = NULL;
	line_size = 0;
	while (1)
	{
		//Si se ha leído todo el buffer, lo rellenos
		if (buffer_pos >= buffer_size)
		{
			buffer_size = read(fd, buffer, BUFFER_SIZE);
			buffer_pos = 0;

			//Si llegamos al final del archivo o se produce un error, devolver NULL
			if (buffer_size <= 0)
			{
				if (line_size > 0)
				{
					return (line);
				} else {
					free(line);
					return (NULL);
				}

			}

		}
//Buscamos el siguiente carácter de nueva línea
char c = buffer[buffer_pos++];
if (c == '\n'){
	//Si encontramos el carácter de nueva línea, devolvemos la línea
	line = realloc(line, line_size + buffer_pos);
	if(line == NULL){
		free(line);
		return NULL;
		//Copiamos la línea leída en la cadena resultante
		ft_mencpy(&line[line_size], buffer, buffer_pos);
		line_size += buffer_pos;

		//Ponemos a cero el buffer_pos para la proxima iteración
		buffer_pos = 0;

		//Quitamos el carácter de nueva línea
		line[line_size - 1] = '\0';

		return line;
	}else{
		//Si no encontramos el carácter de nueva línea, añadimos el
		line = realloc(line, line_size + buffer_pos);
		if(line == NULL){
			free(line);
			return NULL;
		}
		ft_memcpy(&line[line_size], buffer, buffer_pos);
		line_size += buffer_pos;
	}
}
	}

}
