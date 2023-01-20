/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:14:05 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/20 20:04:05 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int len_word(char const *s, char c, int pos)
{
    int len;
    len = 0;
    while (s[pos] != c && s[pos] != '\0')
    {
        len++;
        pos++;
    }
    return (len);
}
int cont_words(char const *s, char c)
{
    int i;
    int count;
    count = 0;
    i = 0;
    while (s[i])
    {
        if(s[i] != c && (i == 0 || s[i -1] == c))
            count++;
        i++;
    }
    return (count);
}
char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int k;
    int count;
    char **result;
    count = cont_words(s, c);
    result = (char**)malloc(sizeof(char*) * (count + 1));
    if (!result)
        return (NULL);
    i = 0;
    k = 0;
    while (i < count)
    {
        while (s[k] == c)
            k++;
        j = len_word(s,c,k);
        result[i] = ft_substr(s, k, j);
        k = k + j;
        i++;
    }
    result[i] = 0;
    return(result);
}