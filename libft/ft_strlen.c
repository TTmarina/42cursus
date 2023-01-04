/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:22:48 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/04 15:15:25 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}
/*
int main (void) 
{
   char str[] = "Hola";

   printf("%d", ft_strlen(str));
   return(0);
}*/
