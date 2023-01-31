/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:06:59 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/31 16:48:24 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	x;

	x = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
	return (x);
}
