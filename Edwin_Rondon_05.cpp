#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 5 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL,"");
	int Pes, i = 0, per0 = 0, per1 = 0, per2 = 0, per3 = 0;
	
	while(i = 1)
	{
		printf("Ingresar alumnos de menos de 40 Kg:");
		scanf("%d", &Pes);
		
		if((Pes < 40) && (Pes >= 0))
		{
			per0++;
		}
		else
		{
			if(Pes > 39)
			{
				printf("Los datos no son válidos.\n");
			}
			else
			{
				if(Pes = -99)
				{
					break;
				}
			}
		}	
	}
	
	Pes = 0;
	
	while(i = 1)
	{
		printf("Ingrese los alumnos de 40 a 50 Kg:");
		scanf("%d", &Pes);
		
		if((Pes <= 50) && (Pes >= 40))
		{
			per1++;
		}
		else
		{
			if(Pes > 50)
			{
				printf("Los datos no son válidos.\n");
			}
			else
			{
				if((Pes < 40) && (Pes >= 0))
				{
					printf("Los datos no son válidos.\n");
				}
				else
				{
					if(Pes = -99)
					{
						break;
					}
				}
			}
		}
	}
	
	Pes = 0;
	
	while(i = 1)
	{
		printf("Ingrese los alumnos de más de 50 Kg y de menos de 60 Kg:");
		scanf("%d", Pes);
		
		if((Pes <= 59) && (Pes >= 51))
		{
			per2++;
		}
		else
		{
			if(Pes >= 60)
			{
				printf("Los datos no son válidos.\n");
			}
			else
			{
				if((Pes <= 50) && (Pes >= 0))
				{
					printf("Los datos no son válidos.\n");
				}
				else
				{
					if(Pes = -99)
					{
						break;
					}
				}
			}
		}
	}
	
	Pes = 0;
	
	while(i = 1)
	{
		printf("Ingrese los alumnos de más de 60 Kg:");
		scanf("%d", &Pes);
		
		if(Pes >= 60)
		{
			per3++;
		}
		else
		{
			if((Pes < 60) && (Pes >= 0))
			{
				printf("Los datos no son válidos.\n");
			}
			else
			{
				if(Pes = -99)
				{
					break;
				}
			}
		}
	}
	
	printf("%t");
	printf("Los alumnos de menos de 40 Kg son: %d\n", per0);
	printf("Los alumnos de 40 a 50 Kg son: %d", per1);
	printf("Los alumnos de más de 50 Kg y menores de 60 Kg son: %d", per2);
	printf("Los alumnos de más de 60 Kg son: %d", per3);
	
	getch();
	
	return(0);
}
