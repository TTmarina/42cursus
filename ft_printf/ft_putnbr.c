/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:22:20 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/31 16:50:33 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int a)
{
	int				i;
	unsigned int	z;

	i = 0;
	if (a < 0)
	{
		i = ft_putchar('-');
		z = a * -1;
	}
	else
		z = a;
	if (z >= 10)
	{
		i += ft_putnbr(z / 10);
	}
	i += ft_putchar(z % 10 + '0');
	return (i);
}

int	ft_putnbru(unsigned int a)
{
	int	i;

	i = 0;
	if (a >= 10)
	{
		i += ft_putnbr(a / 10);
	}
	i += ft_putchar(a % 10 + '0');
	return (i);
}
