/*
 * TP1-Funciones.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Leonel
 */

#include "TP1-Funciones.h"

/**
 * @fn int menu(float, float)
 * @brief Desarrollo del menu con opciones para el ingreso de los valores que se quieran calcular, y mostrar
 *
 * @param a pido el valor de esta variable
 * @param b pido el valor de esta variable
 * @return La opciones elegida
 */
int menu(float a, float b)
{
	int opcion;
	separador();
	printf("1) Ingrese 1er Operando (A = %.2f)\n",a);
	printf("2) Ingresse 2do Operando (B = %.2f)\n",b);
	printf("3) Calcular Todas las Operaciones \n");
	printf("4) Mostrar Todas las Operaciones \n");
	printf("5) Salir \n");
	printf("\nElija una Opcion: ");
	scanf("%d",&opcion);
	separador();


	return opcion;
}
/**
 * @fn void mostrar(float, float, float, float, int, int, float, float)
 * @brief mostrar los resultados de las operaciones
 *
 * @param sumaAB resultado de la suma entre A y B
 * @param restaAB resultado de la resta entre A y B
 * @param multiplicarAB resultado de la multiplicacion entre A y B
 * @param dividirAB resultado de la division entre A y B
 * @param factorialA resultado del factorial de la variable A
 * @param factorialB resultado del factorial de la variable B
 * @param a valor de esta variable
 * @param b valor de esta variable
 */
void mostrar(float sumaAB, float restaAB, float multiplicarAB, float dividirAB, int factorialA, int factorialB, float a, float b)
{
	printf("> El resultado de %.2f + %.2f es %.2f\n",a,b,sumaAB);
	printf("> El resultado de %.2f - %.2f es: %.2f\n",a,b,restaAB);
	if(b != 0)
	{
	printf("> El resultado de %.2f / %.2f es: %.2f\n",a,b,dividirAB);
	}
	else
	{
		printf("> No se puede dividir por cero\n");
	}
	printf("> El resultado de %.2f * %.2f es: %.2f\n",a,b,multiplicarAB);
	if(a > 0)
	{
	printf("> El factorial de %.2f es: %d\n",a,factorialA);
	}
	else if(a < 0)
	{
		printf("> El factorial de %.2f es: 0\n",a);
	}
	else
	{
		printf("> El factorial de %.2f es: 1\n",a);
	}
	if(b > 0)
	{
		printf("> El factorial de %.2f es: %d\n",b,factorialB);
	}
	else if(b < 0)
		{
			printf("> El factorial de %.2f es: 0\n",b);
		}
	else
	{
		printf("> El factorial de %.2f es: 1\n",b);
	}
}
/**
 * @fn float numero1(void)
 * @brief Pedir el valor que se quiere ingresar para la variable 'a'
 *
 * @return el valor ingresado
 */
float numero1(void)
{
	float a;
	printf("Ingrese Operador A: ");
	fflush(stdin);
	scanf("%f",&a);

	return a;
}
/**
 * @fn float numero2(void)
 * @brief Pedir el valor que se quiere ingresar para la variable 'b'
 *
 * @return el valor ingresado
 */
float numero2(void)
{
	float b;
	printf("Ingrese Operador B: ");
	fflush(stdin);
	scanf("%f",&b);

	return b;
}
/**
 * @fn float suma(float, float)
 * @brief La suma entre las variables a y b
 *
 * @param a valor de esta variable
 * @param b valor de esta variable
 * @return el valor de la suma entre las variables a y b
 */
float suma(float a, float b)
{
	float resultado;

	resultado = a + b;

	return resultado;
}
/**
 * @fn float resta(float, float)
 * @brief La suma entre las variables
 *
 * @param a valorr de esta variable
 * @param b valor de esta variable
 * @return valor de la resta entre a y b
 */
float resta(float a, float b)
{
	float resultado;

	resultado = a - b;

	return resultado;
}
/**
 * @fn float multiplicar(float, float)
 * @brief La multiplicacion entre las variables
 *
 * @param a valor de esta variable
 * @param b valor de esta variable
 * @return valor de la multiplicacion entre a y b
 */
float multiplicar(float a, float b)
{
	int resultado;

	resultado = a*b;

	return resultado;
}
/**
 * @fn float dividir(float, float)
 * @brief La division entre las variables
 *
 * @param a valor de esta variable
 * @param b valor de esta variable
 * @return valor de la division entre a y b
 */
float dividir(float a, float b)
{
	float resultado;

	resultado =  a / b;

	return resultado;
}
/**
 * @fn int factorial_1(int)
 * @brief calcular el factorial de a
 *
 * @param a pedir el valor de esta variable de forma entera
 * @return el resultado del factorial de la variable a
 */
int factorial_1(int a)
{
	int resultado = a;
	int i;

	if(a > 0)
	{
		for(i=1; i<a; i++)
		{
		   resultado *= a-i;
		}
	}
	else if(a < 0)
			{
				for(i=-1; i > a; i--)
				{
					resultado *= a-i;
				}
			}

	return resultado;
}
/**
 * @fn int factorial_2(int)
 * @brief calcular el factorial de b
 *
 * @param b pedir el valor de esta variable en forma entera
 * @return el resultado del factorial de la variable b
 */
int factorial_2(int b)
{
	int resultado = b;
	int i;

	if(b > 0)
	{
		for(i=1; i<b; i++)
		{
		   resultado *= b-i;
		}
	}
	else if(b < 0)
		{
			for(i=-1; i > b; i--)
			{
				resultado *= b-i;
			}
		}

	return resultado;
}
/**
 * @fn void separador(void)
 * @brief Un separador de texto para que el programa quede prolijo
 *
 */
void separador(void)
{
	printf("-----------------------------\n");
}
/**
 * @fn void inicio(void)
 * @brief mensaje de bienvenida al usuario
 *
 */
void inicio(void)
{
	printf(">>> BIENVENIDO <<<\n");
}
