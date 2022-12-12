/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:49:36 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/09 16:36:49 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	x;
	char	*st;

	x = 0;
	st = s;
	while (x < n)
	{
		st[x] = 0;
		++x;
	}
}

/* #include <stdio.h>
int main()
{
  char s[20];
  //probar con debug
  strcpy(s, "ubicacion");
  puts(s);

  ft_bzero(s, 5);
  puts(s);
} */
