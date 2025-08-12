/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbolic_constants.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:25:32 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/12 11:38:01 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*Usando symbolic constants pela primeira vez.
O seu uso é recomendado para que não haja números mágicos jogados aleatoriamente*/

#define PASSO 20 
#define BAIXO 0
#define SUPERIOR 200

int main(void)
{
    int fahr;
    
    for(fahr = 0; fahr <= SUPERIOR; fahr += PASSO)
    {
        printf("Fahrenheit: %3d\tCelsius: %6.3f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
    return (0);
}