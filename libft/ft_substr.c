/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:28:58 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/29 16:32:08 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*src;
	size_t	len_src;

	if (!s)
		return (0);
  if (ft_strlen(s) < start)
    return (ft_strdup(""));
	src = (char *)s + start;
	len_src = ft_strlen(src);
	if (len_src < len)
		len = ++len_src;
	else
		len++;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, src, len);
	return (str);
}
/*
int main()
{
  char str[] = "Hola, mundo!";
  char *subcadena;

  subcadena = ft_substr(str, 7, 5);
  printf("%s\n", subcadena); // imprime "mundo"

  free(subcadena);

  return (0);
}*/
