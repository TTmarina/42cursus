/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:55:53 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/02 13:51:10 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	count;
	int		sign;
	int		num;

	count = 0;
	num = 0;
	sign = 1;
	while ((str[count] >= '\t' && str[count] <= '\r') || str[count] == 32)
		count++;
	while (str[count] && (str[count] == '-' || str[count] == '+'))
	{
		if (str[count] == '-')
			sign = sign * -1;
		count++;
		if (str[count] == '-' || str[count] == '+')
			return (0);
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		num = (num * 10) + (str[count] - '0');
		count++;
	}
	return (num * sign);
}
/* #include <stdlib.h>
int main ()
{
    printf("%d\n", ft_atoi("+12d"));
    printf("%d", ft_atoi("  12a23"));
    return (0);
}
 */
