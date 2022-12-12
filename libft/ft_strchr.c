/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:10:15 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/12 16:42:11 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char) c)
        {
            return ((char *)s);
        }
        s++;
    }
    if (*s == (char) c)
    {
        return ((char *)s);
    }
    return (0);
}
/*
int main ()
{
    const   char s[]  = "http://www.tutorialspoint.com";
    const   char c    = '.';
    char *ret;

   ret = ft_strchr(s, c);

   printf("String after |%c| is - |%s|\n", c, ret);
   
   return(0);
}*/