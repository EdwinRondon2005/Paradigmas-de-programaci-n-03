#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 3 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	int n;
	
	do
	{
		printf("Ingrese un número:");
		scanf("%d", &n);
	}
	while(n >= 1000);
	
	printf("Únicamente puede ingresar un número mayor que 1000.\n");
	
	getch();
	
	return(0);
}
