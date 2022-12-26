/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:31:35 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/26 18:20:20 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[count] && s1[count] == s2[count] && n - 1 > count)
	{
		count++;
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
/*
#include <stdio.h>
int main ()
{
printf ("%d\n", ft_strncmp("luz", "luz", 2));
return(0);
}*/
