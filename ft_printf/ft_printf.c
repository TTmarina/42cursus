/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:34:34 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/31 17:16:45 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		result;

	result = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
			result += ft_putchar(*str);
		else
		{
			str++;
			result += ft_choose_conversions(*str, args);
		}
		str++;
	}
	va_end(args);
	return (result);
}
