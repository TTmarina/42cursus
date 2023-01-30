/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choose_conversions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:29:08 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/30 17:31:47 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_choose_conversions(char format, va_list args)
{
    int i;

    i = 0;
   if (format == 'c')
        i = ft_putchar(va_arg(args, int));
    else if (format == 's')
        i = ft_putstr(va_arg(args, char *));
    else if (format =='p')
        i = ft_putstr("0x") + ft_puthexa(va_arg(args, size_t), format);
    else if (format == 'd' || format == 'i')
        i = ft_putnbr(va_arg(args, int));
    else if (format == 'u')
        i = ft_putnbru(va_arg(args, unsigned int));
    else if (format == 'x' || format == 'X')
        i = ft_puthexa(va_arg(args, unsigned int), format);
    else if (format == '%')
        i = ft_putchar('%');
    return (i);
}


   
