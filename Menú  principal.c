#include <stdio.h>
#include <locale.h>
#include <string.h>
#include<Windows.h>

int main()
{
	FILE * pfichero1;
	
	setlocale(LC_CTYPE, "Spanish"); //Para que muestre las interrogaciones y ñ en la pantalla
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252); //Para que al introducir una ñ en una respuesta, el programa sea capaz de sacar por pantalla esa ñ
		
	char caracter, nombre[100], apellido[100], nombrecompleto[150], salto;
	int resultado=0, opcion1, opcion2, x, dificultad;
				
	printf("Introduzca su nombre: ");
	gets(nombre);
	printf("Introduzca su apellido: ");
	gets(apellido);
	strcpy(nombrecompleto, nombre);
	
	
	printf("\nBienvenido %s ", nombrecompleto);
	
	printf("¿Es la primera vez que juega a este juego?\n1.Sí\n2.No\nIntroduzca 1 (Sí) ó 2 (No)\n");
	scanf("%d", &opcion1);
	
		while((opcion1!=1) && (opcion1!=2))
		{
			printf("Por favor, introduzca un digito válido.\n");
			scanf("%d", &opcion1);
		}
	
	switch(opcion1)
	{
		case 1: 
				system ("cls"); // Borra todo lo anterior
				printf("Como es tu primera vez, te mostraremos las reglas del juego.\n");
				pfichero1 = fopen("Normasdeljuego.txt", "r");
				while((x=fgetc(pfichero1))!=EOF)
				{
					putchar(x);
				}
				
						if (pfichero1 == NULL) 
						{
								printf("No se encuentra el fichero\n");
								return 0;
						}
					
						printf("Esperemos que lo hayas entendido.\nPulsa enter para continuar.\n");
						scanf("%c", &salto);
						scanf("%c", &salto);
	
					fclose(pfichero1);
					
				break;
				
		case 2: 
			system ("cls"); // Borra todo lo anterior
				printf("¿Quieres refrescar las reglas del juego?\n");
				printf("1.Sí\n2.No\nIntroduzca 1 (Sí) ó 2 (No)\n");
				scanf("%d", &opcion2);
				
				while((opcion2!=1) && (opcion2!=2))
				{
					printf("Por favor, introduzca un digito válido.\n");
					scanf("%d", &opcion2);
				}
				
				if(opcion2==1)
				{
					system("cls");
						pfichero1 = fopen("Normasdeljuego.txt", "r");
						while((x=fgetc(pfichero1))!=EOF)
						{
							putchar(x);
						}
					
						if (pfichero1 == NULL) 
						{
								printf("No se encuentra el fichero\n");
								return 0;
						}
						
						fclose(pfichero1);
						
						printf("Esperemos que lo hayas entendido.\nPulsa enter para continuar.\n");
						scanf("%c", &salto);
						scanf("%c", &salto);	
				}else if(opcion2==2)
					{
						system("cls");
						printf("Pues entonces continuaremos.\n");
						printf("\nPulse enter para continuar.\n");
						scanf("%c", &caracter);
						scanf("%c", &caracter);
					}	
					
					break;
				
	}	
	system("cls");
	
	printf("Muy bien %s, despues de leer las instrucciones del juego, es el momento de elegir el nivel de las preguntas.\n", nombrecompleto);
	printf("1. Fácil\n2. Medio\n3. Difícil\n");
	printf("Introduzca 1 (Fácil), 2 (Medio) ó 3 (Difícil):\n");
	scanf("%d", &dificultad);
	
	while((dificultad!=1) && (dificultad!=2) && (dificultad!=3))
	{
		printf("Por favor, introduzca un digito válido.\n");
		scanf("%d", &dificultad);
	}
	
	switch(dificultad)
	{
		case 1:
			
			//Se inician las preguntas faciles.
			
			break;
			
		case 2:
			
			//Se inician la preguntas medias.
			
			break;
			
		case 3:
			
			//Se inician las preguntas dificiles.
			
			break;
	}
}
