/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 1. Crear una funci�n llamada aplicarAumento que reciba como par�metro
 el precio de un producto y devuelva el valor del producto con un aumento del 5%.
  Realizar la llamada desde el main.

  2. Crear una funci�n que se llame reemplazarCaracteres que reciba una cadena de
  caracteres como primer par�metro, un car�cter como segundo y otro car�cter  como tercero,
    la misma deber� reemplazar cada ocurrencia del segundo par�metro por el tercero y devolver
     la cantidad de veces que se reemplazo ese car�cter  en la cadena

 3. Dada la siguiente estructura generar una funci�n que permita ordenar un array de dicha
  estructura por tipo. Ante igualdad de tipo deber� ordenarse por efectividad creciente.
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

