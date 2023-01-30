/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:45:37 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/30 17:30:18 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexa (size_t a, char format)
{
   int i;
   i = 0;
   if (format == 'x' ||  format == 'p')
   {
        if (a >= 16)
        {
            i += ft_puthexa(a / 16, format);
        }
        i += ft_putchar("0123456789abcdef"[a % 16]);
   }
   else if (format == 'X')
   {
        if (a >= 16)
        {
            i += ft_puthexa(a / 16, format);
        }
        i += ft_putchar("0123456789ABCDEF"[a % 16]);
   }
    return (i);
}