/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:53:11 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/23 16:34:57 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	x;
	size_t			z;

	x = 0;
	z = ft_strlen(s1);
	if (ft_strlen(s1) == 0)
	{
		return (ft_strdup(""));
	}
	if (strlen(set) == 0)
	{
		return (ft_strdup(s1));
	}
	while (s1[x] != '\0' && ft_strchr(set, s1[x]) != NULL)
	{
		x++;
	}
	while (z >= 0 && ft_strchr(set, s1[z]) != NULL)
	{
		z--;
	}
	return (ft_substr(s1, x, z - x + 1));
}
