/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:55:09 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/23 16:23:57 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	pos;
	int		len;

	pos = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *) malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		str[pos] = *s1++;
		pos++;
	}
	while (*s2)
	{
		str[pos] = *s2++;
		pos++;
	}
	str[pos] = '\0';
	return (str);
}
