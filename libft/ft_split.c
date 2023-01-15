/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresa <teresa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:01:26 by teresa            #+#    #+#             */
/*   Updated: 2023/01/15 20:02:31 by teresa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int k;
    int count;
    char **result;

    i       = 0;
    count   = 0;
    k       = 0;
    while (s[i])
    {
        if(s[i] != c && (i == 0 || s[i -1] == c))
        count++;
        i++;
    }
    if (! (result = (char**)malloc(sizeof(char*))))
    {
        return(NULL);
    }
    while (s[i])
    {
        if(s[i] != c)
        {
            j = i;
            while (s[i] != c && s[i])
            {
                i++;
            }
            if (!(result[k] = (char*) malloc(sizeof(char) * (i - j +1))))
            {
                return(NULL);
            }
            strncpy(result[k++], &s[j], i -j);
            result [k - 1] [i - j] = '\0';
            i--;  
        }
        i++;
    }
    result[k] = (NULL);
    return(result);   
}