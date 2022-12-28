/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:25:48 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/27 13:13:42 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;

	if (!*little)
	{
		return ((char *)big);
	}
	while (*big && len--)
	{
		count = 0;
		while (big[count] == little[count])
		{
			if (!little[++count])
			{
				return ((char *)big);
			}
			if (count > len)
			{
				return (0);
			}
		}
		big++;
	}
	return (0);
}
/*
int main()
{
    const char big[30] = "llego Diciembre vamos a bailar";
    const char little[15] = "Diciembre";
    char *result;

    result = ft_strnstr(big, little, 16);
    printf("The substring is: %s\n", result);
    return (0);
}*/
