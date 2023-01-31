/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:12:48 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/31 17:48:51 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	*str;

	ft_printf(NULL);
	ft_printf("%c\n", 'a');
	ft_printf("%s\n", "hola");
	ft_printf("%p\n", "hola");
	ft_printf("%p\n", str);
	ft_printf("%p\n", (void *)0);
	ft_printf("%d\n", 2147483647);
	ft_printf("%d\n", -2147483648);
	ft_printf("%i\n", 485);
	ft_printf("%u\n", -123);
	ft_printf("%x\n", 123112312);
	ft_printf("%X\n", 1231312443);
	ft_printf("%%\n");
}
