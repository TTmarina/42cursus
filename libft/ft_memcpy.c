/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:02:00 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/04 17:20:45 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/* int main()
{
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   const char src2[50] = "hola";
   char dest2[50];
   strcpy(dest2,"Diciembre");
   printf("Before memcpy dest = %s\n", dest2);
   ft_memcpy(dest2, src2, strlen(src2)+1);
   printf("After memcpy dest = %s\n", dest2);
   
   return(0);
} */
