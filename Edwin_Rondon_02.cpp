#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 2 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	int i, sum = 0;
	
	for(int i = 1; i <= 1000; i++)
	{
		sum = sum + (i * i);
	}
	
	printf("La suma de los cuadrados del 1 al 1000 es: %d.\n", sum);
	
	getch();
	
	return(0);
}
