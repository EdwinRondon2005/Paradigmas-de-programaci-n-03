#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 3 de Paradigmas de programaci�n.

int main()
{
	setlocale(LC_ALL, "");
	int n;
	
	do
	{
		printf("Ingrese un n�mero:");
		scanf("%d", &n);
	}
	while(n >= 1000);
	
	printf("�nicamente puede ingresar un n�mero mayor que 1000.\n");
	
	getch();
	
	return(0);
}
