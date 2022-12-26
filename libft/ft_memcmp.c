/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:08:12 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/26 19:55:34 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				pos;
	unsigned const char	*str1;
	unsigned const char	*str2;

	pos = 0;
	str1 = s1;
	str2 = s2;
	while (pos < n)
	{
		if (str1[pos] != str2[pos])
		{
			return (str1[pos] - str2[pos]);
		}
		pos++;
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
printf ("%d\n", ft_memcmp("luz", "luz", 2));
return(0);
}*/
