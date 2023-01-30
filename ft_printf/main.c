/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:12:48 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/30 17:29:59 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "ft_printf.c"
#include "ft_choose_conversions.c"
#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_puthexa.c"
#include "ft_putnbr.c"


int main (void)
{
    ft_printf("%c\n", 'a');
    ft_printf("%s\n", "hola");
    ft_printf("%p\n", 'a');
    ft_printf("%d\n", 123);
    ft_printf("%i\n", 485);
    ft_printf("%u\n", -123);
    ft_printf("%x\n", 123112312);
    ft_printf("%X\n", 123131244312);
    ft_printf("%%\n");
    
}