/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:45:48 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/23 18:01:22 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
	{
		return (NULL);
	}
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
	result[i] = f(i, s[i]);
	i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char to_upper(unsigned int i, char c) 
{
	i = 0;
return toupper(c);
}
int main() 
{
char *s = "hola mundo";
char *result = ft_strmapi(s, to_upper);
printf("%s\n", result);
free(result);
return 0;
}*/
