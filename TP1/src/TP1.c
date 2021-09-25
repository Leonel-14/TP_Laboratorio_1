/*
 ============================================================================
 Name        : TP1.c
 Author      : Leonel Rodriguez 1-D
 Version     :
 Copyright   :
 Description :  1. Ingresar 1er operando (A=x)
				2. Ingresar 2do operando (B=y)
				3. Calcular todas las operaciones
				a) Calcular la suma (A+B)
				b) Calcular la resta (A-B)
				c) Calcular la division (A/B)
				d) Calcular la multiplicacion (A*B)
				e) Calcular el factorial (A!)
				4. Informar resultados
				a) “El resultado de A+B es: r”
				b) “El resultado de A-B es: r”
				c) “El resultado de A/B es: r” o “No es posible dividir por cero”
				d) “El resultado de A*B es: r”
				e) “El factorial de A es: r1 y El factorial de B es: r2”
				5. Salir
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "TP1-Funciones.h"
/**
 * @fn int main(void)
 * @brief Funcion principal en la cual se declaran las variables principales y en donde se desarrolla un menu de opciones para las demas funciones
 *
 * @return 0
 */

int main(void) {
	setbuf(stdout,NULL);
	float A = 0;
	float B = 0;
	float sumaAB;
	float restaAB;
	float multiplicarAB;
	float dividirAB;
	int factorialA;
	int factorialB;
	int opciones;
	int flag = 0;

	inicio();
	do
	{
		opciones = menu(A,B);
		switch(opciones)
		{
			case 1:
				A = numero1();
			break;
			case 2:
				B = numero2();
				break;
			case 3:
				sumaAB = suma(A,B);
				restaAB = resta(A,B);
				multiplicarAB = multiplicar(A,B);
				dividirAB = dividir(A,B);
				factorialA = factorial_1(A);
				factorialB = factorial_2(B);
				printf("Todas las Operaciones fueron Calculadas\n");
				flag = 1;
				break;
			case 4:
				if(flag == 1){
				mostrar(sumaAB,restaAB,multiplicarAB,dividirAB,factorialA,factorialB,A,B);
				flag = 0;
				}
				else
				{
					printf("Error. Primero debe calcular con opcion 3\n");
				}
				break;
			case 5:
				printf("EL PROGRAMA SE HA TERMINADO\n");
				separador();
				break;
			default:
				printf("ERRROR. Ingrese una opcion valida entre 1-5\n");
				break;
		}

	}while(opciones != 5);


	return EXIT_SUCCESS;
}
