#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 4 de Paradigmas de programaci�n.

int main()
{
	setlocale(LC_ALL,"");
	int x, n, i;
	float pot;
	
	printf("Ingresar la base:");
	scanf("%d", &x);
	
	for(int i = x; i >= 0; i =+ 0)
	{
		if(x <= 0)
		{
			printf("La base no puede ser 0.\n");
			printf("Ingresar otro n�mero:");
			scanf("%d", &x);
		}
		else
		{
			printf("Ingresar el exponente:");
			scanf("%d", &n);
			break;
		}
	}
	
	pot = pow(x, n);
	
	printf("El resultado de elevar %d a la %d es: %f\n", x, n, pot);
	
	getch();
	
	return(0);
}
