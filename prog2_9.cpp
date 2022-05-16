/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 07/04/2022
Escuela: Universidad del Valle de México Campus Villahermosa 
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programación Estructurada<br>
Muestra el uso de:
 
	-Variables enteras, flotantes y en cadena
	-printf para mostrar mensajes y variables
    -fgets
    -scanf
    -El uso de include para las librerías
    -Librerías de la función string.h
    -Uso de condicionales
    -arhcivos en cpp y tipo Header
    -Ciclos
    -fflush
    -Funciones
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
#include"milibreria.h"
//Declaraciones globales
struct alumno {
	char nombre[30];
	float promedio;
	int faltas;
};
//main
int main() {
	struct alumno a1, a2;
	leers("Introduce el nombre: ", a1.nombre,30);
	a1.promedio=leerf("Introduce el promedio: ", 0, 10);
	a1.faltas=leerd("Introduce las faltas: ", 0, 32);
	a2=a1;
	printf("Datos del alumno: \n");
	printf("Nombre: %s \n", a2.nombre);
	printf("Promedio: %.1f \n", a2.promedio);
	printf("Faltas: %d \n ", a2.faltas);
	return 0;
}

