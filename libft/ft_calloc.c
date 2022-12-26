/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:27:46 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/26 20:53:24 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset (ptr, 0, total_size);
	return (ptr);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    // imprime error con esta opcion
    //int *array = calloc(10, -1);
    
    // imprime funciona con esta opcion
    //int *array = calloc(10, sizeof(int));
    
    if (array == NULL)
    {
        printf("Error reservando memoria para el array\n");
        return (1);
    }
    printf("funciona\n");
  free(array);
  return 0;
}*/
