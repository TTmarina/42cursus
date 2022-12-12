/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:57:37 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/05 19:29:34 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	i;
	size_t	j;
	size_t	dstleng;
	size_t	srcleng;

	srcleng = ft_strlen(src);
	dstleng = ft_strlen(dst);
	j = dstleng;
	i = 0;
	if (dstleng < size - 1 && size > 0)
	{
		while (src[i] && dstleng + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dstleng >= size)
		dstleng = size;
	return (dstleng + srcleng);
}
/* int main()
{
    char dst[20] = "viaje viejo";
    const char src[20] = "viaje nuevo";
    size_t x;

    x = ft_strlcat(dst,src,11);
    printf("%zu\n",x);
    printf("Before strlcpy dst = %s, src = %s\n", dst, src);
    ft_strlcat(dst, src, 12);
    printf("After strlcpy dst = %s, src = %s\n", dst, src);

    return (0);
} */
