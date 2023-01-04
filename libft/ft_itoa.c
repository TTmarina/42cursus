/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:16:48 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/04 19:38:05 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lennumb(long n)
{
    unsigned int i;
    
    i = 0;
    if (n == 0)
    {
        return (1);
    }
    if (n < 0)
    {
        n = n * -1;
        i++;
    }
    while (n >= 1)
    {
        n = n / 10;
        i++;
    }
    return (i);
}
char *ft_end(char *nb, long n, unsigned int result)
{
    if (n == 0)
    {
        nb[0] = '0';
        return (nb);
    }
     if (n < 0)
    {
        n = n * -1;
    }
    while (result--)
    {
        nb[result] = (n % 10) + '0';
        n /= 10;
    }
    if (nb[0] == '0')
    {
        nb[0] = '-';
    }
    return (nb);
}
char *ft_itoa(int n)
{
    unsigned int result;
    char *nb;

    result = ft_lennumb(n);
    nb = ft_calloc(result + 1, sizeof(char));
    if(nb)
    {
        nb = ft_end(nb, n, result);
    }
    return (nb);
}