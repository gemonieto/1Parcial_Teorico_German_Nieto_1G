/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 1. Crear una función llamada aplicarAumento que reciba como parámetro
 el precio de un producto y devuelva el valor del producto con un aumento del 5%.
  Realizar la llamada desde el main.

  2. Crear una función que se llame reemplazarCaracteres que reciba una cadena de
  caracteres como primer parámetro, un carácter como segundo y otro carácter  como tercero,
    la misma deberá reemplazar cada ocurrencia del segundo parámetro por el tercero y devolver
     la cantidad de veces que se reemplazo ese carácter  en la cadena

 3. Dada la siguiente estructura generar una función que permita ordenar un array de dicha
  estructura por tipo. Ante igualdad de tipo deberá ordenarse por efectividad creciente.
   Hardcodear datos y mostrarlos desde el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float aplicarAumento(int precioProducto, float aumento);


int main(void)
{
	float resultadoAplicarAumento;

	resultadoAplicarAumento = aplicarAumento(10, 0.05);

	printf("%.2f", resultadoAplicarAumento);

	return EXIT_SUCCESS;
}


float aplicarAumento(int precioProducto, float aumento)
{
	float retorno;

	retorno = precioProducto + (precioProducto * aumento);

	return retorno;
}

