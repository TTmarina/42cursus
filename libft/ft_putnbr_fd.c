/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:29:02 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/03 17:44:27 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd('2', fd);
        ft_putnbr_fd(147483648, fd);
    }
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(n * (-1), fd);
    }
    else if (n >= 0 && n < 10)
    {
       ft_putchar_fd(n + '0', fd); 
    }
    else
    {
        ft_putnbr_fd((n / 10), fd);
        ft_putchar_fd((n % 10 + '0'), fd);
    }
}