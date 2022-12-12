/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:05:02 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/10 22:26:43 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		x;
	char		*st;

	st = str;
	x = 0;
	while (x < n)
	{
		st[x] = c;
		x++;
	}
	return (str);
}
/*#include<stdio.h>
int main () {
   char str[50];

   strcpy(str,"Hola mundo");
   puts(str);

   ft_memset(str,'$',5);
   puts(str);
   
   return(0);
}*/
