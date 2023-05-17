#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 1 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	int i = 1, sum = 0;
	
	while(i <= 100)
	{
		if(i % 2 == 0)
		{
			printf("%d\n", i);
			
			sum = sum + i;
		}
		
		i++;
	}
	
	printf("La suma de los números pares es: %d.\n", sum);
	
	getch();
	
	return(0);
}
