/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:09:02 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/24 18:39:14 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_word(char const *s, char c, int pos)
{
	int	len;

	len = 0;
	while (s[pos] != c && s[pos] != '\0')
	{
		len++;
		pos++;
	}
	return (len);
}

int	cont_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**err_free(char const **list, int i)
{
	while (i > 0)
	{
		i--;
		free((void *)list[i]);
	}
	free(list);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		count;
	char	**result;

	count = cont_words(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result || !s)
		return (NULL);
	i = 0;
	k = 0;
	while (i < count)
	{
		while (s[k] == c)
			k++;
		j = len_word(s, c, k);
		result[i] = ft_substr(s, k, j);
		if (result[i] == NULL)
			return (err_free((char const **)result, i));
		k = k + j;
		i++;
	}
	result[i] = 0;
	return (result);
}
