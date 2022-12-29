/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:22:48 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/29 12:31:36 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
