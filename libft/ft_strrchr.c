/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:49:20 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/16 17:52:48 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int count;
    
    count = 0;
    while (s[count])
    {
        count++;
    }
    while (count >= 0)
    {
        if(s[count] == (char) c)
        {
            return ((char*)s + count);
        }
        count--;
    }
    return (NULL);
}
/*
#include <stdio.h>
int main ()
{
    const   char s[]  = "http://www.tutorialspoint.com";
    const   char c    = '.';
    char *ret;

   ret = ft_strrchr(s, c);

   printf("String after |%c| is - |%s|\n", c, ret);
   
   return(0);
}*/