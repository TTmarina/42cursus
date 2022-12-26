/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:18:25 by tmarina-          #+#    #+#             */
/*   Updated: 2022/12/26 16:17:39 by tmarina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char* s) 
{
    size_t len = ft_strlen(s);
    
    char* copy = malloc(len + 1);
    
    if (copy == NULL) 
    {
        return NULL;
    }
    
    ft_memcpy(copy, s, len + 1);
    return copy;
}/*
int main() {
    // Cadena a copiar
    const char* s = "Hola mundo";
    
    // Copiar la cadena s
    char* copy = strdup(s);
    
    // Verificar si se pudo realizar la copia
    if (copy == NULL) {
        fprintf(stderr, "Error al reservar memoria para la copia de la cadena\n");
        return 1;
    }
    
    // Imprimir la copia de la cadena
    printf("Cadena original: %s\n", s);
    printf("Cadena copiada: %s\n", copy);
    
    // Liberar la memoria reservada para la copia de la cadena
    free(copy);
    
    return 0;
}*/
