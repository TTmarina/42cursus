/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:49:50 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/31 17:05:41 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(char const *str, ...);
int	ft_putstr(char *str);
int	ft_putnbr(int a);
int	ft_putnbru(unsigned int a);
int	ft_puthexa(size_t a, char format);
int	ft_putchar(char a);
int	ft_choose_conversions(char format, va_list args);

#endif