/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:15:08 by tmarina-          #+#    #+#             */
/*   Updated: 2023/01/04 17:17:18 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha (c) || ft_isdigit (c))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
  printf("%d", ft_isalnum('a'));
  return(0);
}*/
