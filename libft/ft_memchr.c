/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:05:10 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/26 20:23:47 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		count;
	const char	*st;

	st = str;
	count = 0;
	while (count < n)
	{
		if (st[count] == (char) c)
		{
			return ((char *)(st + count));
		}
		count++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main () 
{   
   const char str[] = "http://www.tutorialspoint.com";
   const char c = 'w';
   char *ret;

   ret = ft_memchr(str, c, 3);

   printf("String after |%c| is - |%s|\n", c, ret);

   return(0);
}*/
