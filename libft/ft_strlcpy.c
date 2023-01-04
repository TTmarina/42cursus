/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:02:22 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/04 17:21:26 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t			x;
	unsigned int	count;

	x = 0;
	count = ft_strlen(src);
	if (!n)
		return (count);
	while (src[x] != '\0' && x < n - 1)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (count);
}
/*
int main()
{
   char dst[20] = "viaje viejo";
   const char src[20]  = "viaje nuevo";

   printf("Before strlcpy dst = %s, src = %s\n", dst, src);
   ft_strlcpy(dst, src, 12);
   printf("After strlcpy dst = %s, src = %s\n", dst, src);

   return(0);
}*/
