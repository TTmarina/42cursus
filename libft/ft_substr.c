/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:28:58 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/28 17:32:49 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
  size_t s_len = strlen(s);
  char *subcadena;

  // reservar memoria para la subcadena
  if ((subcadena = malloc(len + 1)) == NULL) {
    return NULL;
  }

  // asegurarse de que start y len estén dentro de los límites
  if (start >= s_len) {
    *subcadena = '\0';
    return subcadena;
  }
  if (len > s_len - start) {
    len = s_len - start;
  }

  // copiar la subcadena
  strncpy(subcadena, s + start, len);
  subcadena[len] = '\0';

  return subcadena;
}
int main() {
  char str[] = "Hola, mundo!";
  char *subcadena;

  subcadena = ft_substr(str, 7, 5);
  printf("%s\n", subcadena); // imprime "mundo"

  free(subcadena);

  return 0;
}