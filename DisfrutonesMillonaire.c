#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <Windows.h>
#include <math.h>


struct registro{
	int nMatricula;
	char nombre[100];
	char apellido[100];
	char nombrecompleto[300];
	int edad;
};


//Preguntas nivel facil
void pregunta1();
void pregunta2();
void pregunta3();
void pregunta4();
void pregunta5();
void pregunta6();
void pregunta7();
void pregunta8();
void pregunta9();
void pregunta10();
void pregunta11();
void pregunta12();
void pregunta13();
void pregunta14();
void pregunta15();
void pregunta16();
void pregunta17();
void pregunta18();
void pregunta19();
void pregunta20();
void pregunta21();
void pregunta22();
void pregunta23();
void pregunta24();
void pregunta25();
//Preguntas nivel medio
void pregunta51();
void pregunta52();
void pregunta53();
void pregunta54();
void pregunta55();
void pregunta56();
void pregunta57();
void pregunta58();
void pregunta59();
void pregunta60();
void pregunta61();
void pregunta62();
void pregunta63();
void pregunta64();
void pregunta65();
void pregunta66();
void pregunta67();
void pregunta68();
void pregunta69();
void pregunta70();
//Preguntas nivel dificil
void pregunta101();
void pregunta102();
void pregunta103();
void pregunta104();
void pregunta105();
void pregunta106();
void pregunta107();
void pregunta108();
void pregunta109();
void pregunta110();
void pregunta111();
void pregunta112();
void pregunta113();
void pregunta114();
void pregunta115();

int main()
{
	FILE * pfichero1;
	FILE * pfichero2;
	FILE * pfichero3; 
	FILE * pfichero4;
	
	setlocale(LC_CTYPE, "Spanish"); //Para que muestre las interrogaciones y ñ en la pantalla
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252); //Para que al introducir una ñ en una respuesta, el programa sea capaz de sacar por pantalla esa ñ
	
	struct registro login[300];
		
	char caracter, salto;
	int resultado=0, opcion1, opcion2, x, dificultad;
				
	printf("Introduzca su nombre: ");
	gets(login[100].nombre);
	printf("Introduzca su apellido: ");
	gets(login[100].apellido);
	strcpy(login[300].nombrecompleto, login[100].nombre);
	printf("Introduzca su numero de matricula: ");
	scanf("%d", &login[100].nMatricula);
	while (login[100].nMatricula >'A' && login[100].nMatricula < 'Z' && login[100].nMatricula > 'a' && login[100].nMatricula < 'z'){
		printf("Porfavor introduzca un numero valido: ");
		scanf("%d", &login[100].nMatricula);
	}
	printf("Introduzca su edad: ");
	scanf("%d", &login[100].edad);
	
	if(login[100].edad<18){
		printf("Al ser menor de edad le recomendamos que escoja entre el nivel fácil o el nivel medio");
	}
	
	
	printf("\nBienvenido %s ", login[300].nombrecompleto);
	
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
	
	printf("Muy bien %s, despues de leer las instrucciones del juego, es el momento de elegir el nivel de las preguntas.\n", login[300].nombrecompleto);
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
			{
				char caracter200;
				printf("Ha seleccionado el nivel fácil. A continuacion responda las 25 preguntas que se le van a presentar.\n ¡¡BUENA SUERTE!!\n");
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter200);
				scanf("%c", &caracter200);
				system("cls");
			//Primera pregunta
				char respuesta1, caracter1;
				int resultado1, resultado=0;
				
				pregunta1();
				scanf("%c", &respuesta1);
				
				while ((respuesta1 != 'a') && (respuesta1 != 'b') && (respuesta1 != 'c') && (respuesta1 != 'd') && (respuesta1 != 'A') && (respuesta1 != 'B') && (respuesta1 != 'C') && (respuesta1 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta1);		
				}
				
				
				if ((respuesta1 =='C') || (respuesta1 =='c'))
				{
					resultado1 = resultado + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado1 );
					
				}
				else
				{
					resultado1 = resultado + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado1 );
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter1);
				scanf("%c", &caracter1);
				
				fflush(stdin);
				
			//Segunda pregunta
				system ("cls");
				char respuesta2, caracter2;
				int resultado2;
				
				pregunta2();
				scanf("%c", &respuesta2);
				
				while ((respuesta2 != 'a') && (respuesta2 != 'b') && (respuesta2 != 'c') && (respuesta2 != 'd') && (respuesta2 != 'A') && (respuesta2 != 'B') && (respuesta2 != 'C') && (respuesta2 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta2);		
				}
				
				
				if ((respuesta2 =='C') || (respuesta2 =='c'))
				{
					resultado2 = resultado1 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado2 );
					
				}
				else
				{
					resultado2 = resultado1 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado2);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter2);
				scanf("%c", &caracter2);
				
				fflush(stdin);
			
			//Tercera pregunta
				system ("cls");
				char respuesta3, caracter3;
				int resultado3;
				
				pregunta3();
				scanf("%c", &respuesta3);
				
				while ((respuesta3 != 'a') && (respuesta3 != 'b') && (respuesta3 != 'c') && (respuesta3 != 'd') && (respuesta3 != 'A') && (respuesta3 != 'B') && (respuesta3 != 'C') && (respuesta3 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta3);		
				}
				
				
				if ((respuesta3 =='D') || (respuesta3 =='d'))
				{
					resultado3 = resultado2 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado3 );
					
				}
				else
				{
					resultado3 = resultado2 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado3);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter3);
				scanf("%c", &caracter3);
				
				fflush(stdin);
			
			//Cuarta pregunta
				system ("cls");
				char respuesta4, caracter4;
				int resultado4;
				
				pregunta4();
				scanf("%c", &respuesta4);
				
				while ((respuesta4 != 'a') && (respuesta4 != 'b') && (respuesta4 != 'c') && (respuesta4 != 'd') && (respuesta4 != 'A') && (respuesta4 != 'B') && (respuesta4 != 'C') && (respuesta4 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta4);		
				}
				
				
				if ((respuesta4 =='B') || (respuesta4 =='b'))
				{
					resultado4 = resultado3 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado4 );
					
				}
				else
				{
					resultado4 = resultado3 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion:  %d\n\n", resultado4);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter4);
				scanf("%c", &caracter4);
				
				fflush(stdin);
			
			//Quinta pregunta
				system ("cls");
				char respuesta5, caracter5;
				int resultado5;
				
				pregunta5();
				scanf("%c", &respuesta5);
				
				while ((respuesta5 != 'a') && (respuesta5 != 'b') && (respuesta5 != 'c') && (respuesta5 != 'd') && (respuesta5 != 'A') && (respuesta5 != 'B') && (respuesta5 != 'C') && (respuesta5 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta5);		
				}
				
				
				if ((respuesta5 =='C') || (respuesta5 =='c'))
				{
					resultado5 = resultado4 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado5 );
					
				}
				else
				{
					resultado5 = resultado4 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado5);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter5);
				scanf("%c", &caracter5);
				
				fflush(stdin);
				
				//Sexta pregunta
				system ("cls");
				char significado[400], significado1[400] = "Real academia española", significado3[400] = "REAL ACADEMIA ESPAÑOLA";
				char significado2[400] = "Real Academia Española", significado4[400] = "real academia española";
				int resultado6, comparacion1, comparacion2, comparacion3, comparacion4;
				char caracter6;
				
				pregunta6();
				gets(significado);
				puts(significado);
				
				comparacion1 = strcmp(significado1, significado);
				comparacion2 = strcmp(significado2, significado);
				comparacion3 = strcmp(significado3, significado);
				comparacion4 = strcmp(significado4, significado);
				
				if((comparacion1 == 0 ) || (comparacion2 == 0) || (comparacion3 == 0) || (comparacion4 == 0))
				{
					printf("Respuesta correcta!!\n");
					resultado6 = resultado5 +3;
					printf("Tu puntuacion es de: %i", resultado6);
				}
				else if((comparacion1 != 0 )|| (comparacion2 != 0) || (comparacion3 != 0) || (comparacion4 != 0))
				{
					printf("Respuesta incorrecta\n");
					resultado6 = resultado5+0;
					printf("Tu puntuacion es de: %i", resultado6);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter6);
				
				fflush(stdin);
				
				//Septima pregunta
				system ("cls");
				char respuesta7, caracter7;
				int resultado7;
				
				pregunta7();
				scanf("%c", &respuesta7);
				
				while ((respuesta7 != 'a') && (respuesta7 != 'b') && (respuesta7 != 'c') && (respuesta7 != 'd') && (respuesta7 != 'A') && (respuesta7 != 'B') && (respuesta7 != 'C') && (respuesta7 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta7);		
				}
				
				
				if ((respuesta7 =='A') || (respuesta7 =='a'))
				{
					resultado7 = resultado6 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado7);
					
				}
				else
				{
					resultado7 = resultado6 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado7 );
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter7);
				scanf("%c", &caracter7);
				
				fflush(stdin);
				
				//Octava pregunta
				system ("cls");
				char respuesta8, caracter8;
				int resultado8;
				
				pregunta8();
				scanf("%c", &respuesta8);
				
				while ((respuesta8 != 'a') && (respuesta8 != 'b') && (respuesta8 != 'c') && (respuesta8 != 'd') && (respuesta8 != 'A') && (respuesta8 != 'B') && (respuesta8 != 'C') && (respuesta8 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta8);		
				}
				
				
				if ((respuesta8 =='A') || (respuesta8 =='a'))
				{
					resultado8 = resultado7 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado8);
					
				}
				else
				{
					resultado8 = resultado7 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado8);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter8);
				scanf("%c", &caracter8);
				
				fflush(stdin);
				
				//Novena pregunta
				system ("cls");
				char respuesta9, caracter9;
				int resultado9;
				
				pregunta9();
				scanf("%c", &respuesta9);
				
				while ((respuesta9 != 'a') && (respuesta9 != 'b') && (respuesta9 != 'c') && (respuesta9 != 'd') && (respuesta9 != 'A') && (respuesta9!= 'B') && (respuesta9 != 'C') && (respuesta9 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta9);		
				}
				
				
				if ((respuesta9 =='D') || (respuesta9 =='d'))
				{
					resultado9 = resultado8 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado9);
					
				}
				else
				{
					resultado9 = resultado8 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %i\n\n", resultado9);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter9);
				scanf("%c", &caracter9);
				
				fflush(stdin);
				
				//Decima pregunta
				system ("cls");
				char respuesta10, caracter10;
				int resultado10;
				
				pregunta10();
				scanf("%c", &respuesta10);
				
				while ((respuesta10 != 'a') && (respuesta10 != 'b') && (respuesta10 != 'c') && (respuesta10 != 'd') && (respuesta10 != 'A') && (respuesta10 != 'B') && (respuesta10 != 'C') && (respuesta10 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta10);		
				}
				
				if ((respuesta10 =='D') || (respuesta10 =='d'))
				{
					resultado10 = resultado9 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado10);
					
				}
				else
				{
					resultado10 = resultado9 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado10);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter10);
				scanf("%c", &caracter10);
				
				fflush(stdin);
				
				//Undecima pregunta
				system ("cls");
				char respuesta11, caracter11;
				int resultado11;
				
				pregunta11();
				scanf("%c", &respuesta11);
				
				while ((respuesta11 != 'a') && (respuesta11 != 'b') && (respuesta11 != 'c') && (respuesta11 != 'd') && (respuesta11 != 'A') && (respuesta11 != 'B') && (respuesta11 != 'C') && (respuesta11 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta11);		
				}
				
				if ((respuesta11 =='D') || (respuesta11 =='d'))
				{
					resultado11 = resultado10 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado11);
					
				}
				else
				{
					resultado11 = resultado10 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %i\n\n", resultado11);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter11);
				scanf("%c", &caracter11);
				
				fflush(stdin);
				
				//Duodecima pregunta
				system ("cls");
				char significado5[400], significado6[400] = "Helsinki", significado7[400] = "HELSINKI";
				char significado8[400] = "helsinki";
				int resultado12, comparacion5, comparacion6, comparacion7, comparacion8;
				char caracter12;
				
				pregunta12();
				gets(significado5);
				puts(significado5);
				
				comparacion5 = strcmp(significado6, significado5);
				comparacion6 = strcmp(significado7, significado5);
				comparacion7 = strcmp(significado8, significado5);
				
				if((comparacion5 == 0 ) || (comparacion6 == 0) || (comparacion7 == 0))
				{
					printf("Respuesta correcta!!\n");
					resultado12 = resultado11 +3;
					printf("Tu puntuacion es de: %i", resultado12);
				}
				else if((comparacion5 != 0 )|| (comparacion6 != 0) || (comparacion7 != 0))
				{
					printf("Respuesta incorrecta\n");
					resultado12 = resultado11+0;
					printf("Tu puntuacion es de: %i", resultado12);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter12);
				
				fflush(stdin);
			
				//Decimotercera pregunta
				system ("cls");
				char respuesta13, caracter13;
				int resultado13;
				
				pregunta13();
				scanf("%c", &respuesta13);
				
				while ((respuesta13 != 'a') && (respuesta13 != 'b') && (respuesta13 != 'c') && (respuesta13 != 'd') && (respuesta13 != 'A') && (respuesta13 != 'B') && (respuesta13 != 'C') && (respuesta13 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta13);		
				}
				
				if ((respuesta13 =='B') || (respuesta13 =='b'))
				{
					resultado13 = resultado12 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado13);
					
				}
				else
				{
					resultado13 = resultado12 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %i\n\n", resultado11);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter13);
				scanf("%c", &caracter13);
				
				fflush(stdin);
				
				//Decimocuarta pregunta
				system ("cls");
				char respuesta14, caracter14;
				int resultado14;
				
				pregunta14();
				scanf("%c", &respuesta14);
				
				while ((respuesta14 != 'a') && (respuesta14 != 'b') && (respuesta14 != 'c') && (respuesta14 != 'd') && (respuesta14 != 'A') && (respuesta14 != 'B') && (respuesta14 != 'C') && (respuesta14 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta14);		
				}
				
				if ((respuesta14 =='C') || (respuesta14 =='c'))
				{
					resultado14 = resultado13 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado14);
					
				}
				else
				{
					resultado14 = resultado13 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %i\n\n", resultado14);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter14);
				scanf("%c", &caracter14);
				
				fflush(stdin);
				
				//Deciquinta pregunta
				system ("cls");
				char respuesta15, caracter15;
				int resultado15;
				
				pregunta15();
				scanf("%c", &respuesta15);
				
				while ((respuesta15 != 'a') && (respuesta15 != 'b') && (respuesta15 != 'c') && (respuesta15 != 'd') && (respuesta15 != 'A') && (respuesta15 != 'B') && (respuesta15 != 'C') && (respuesta15 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta15);		
				}
				
				if ((respuesta15 =='C') || (respuesta15 =='c'))
				{
					resultado15 = resultado14 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado15);
					
				}
				else
				{
					resultado15 = resultado14 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %i\n\n", resultado15);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter15);
				scanf("%c", &caracter15);
				
				fflush(stdin);
				
				//Decimosexta pregunta
				system ("cls");
				char respuesta16, caracter16;
				int resultado16;
				
				pregunta16();
				scanf("%c", &respuesta16);
				
				while ((respuesta16 != 'a') && (respuesta16 != 'b') && (respuesta16 != 'c') && (respuesta16 != 'd') && (respuesta16 != 'A') && (respuesta16 != 'B') && (respuesta16 != 'C') && (respuesta16 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta16);		
				}
				
				if ((respuesta16 =='A') || (respuesta16 =='a'))
				{
					resultado16 = resultado15 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado16);
					
				}
				else
				{
					resultado16 = resultado15 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %i\n\n", resultado16);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter16);
				scanf("%c", &caracter16);
				
				fflush(stdin);
				
				//Decimoseptima pregunta
				system ("cls");
				char respuesta17, caracter17;
				int resultado17;
				
				pregunta17();
				scanf("%c", &respuesta17);
				
				while ((respuesta17 != 'a') && (respuesta17 != 'b') && (respuesta17 != 'c') && (respuesta17 != 'd') && (respuesta17 != 'A') && (respuesta17 != 'B') && (respuesta17 != 'C') && (respuesta17 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta17);		
				}
				
				if ((respuesta17 =='D') || (respuesta17 =='d'))
				{
					resultado17 = resultado16 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado17);
					
				}
				else
				{
					resultado17 = resultado16 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %i\n\n", resultado17);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter17);
				scanf("%c", &caracter17);
				
				fflush(stdin);
				
				//Decimooctava pregunta
				system ("cls");
				char respuesta18, caracter18;
				int resultado18;
				
				pregunta18();
				scanf("%c", &respuesta18);
				
				while ((respuesta18 != 'a') && (respuesta18 != 'b') && (respuesta18 != 'c') && (respuesta18 != 'd') && (respuesta18 != 'A') && (respuesta18 != 'B') && (respuesta18 != 'C') && (respuesta18 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta18);		
				}
				
				if ((respuesta18 =='D') || (respuesta18 =='d'))
				{
					resultado18 = resultado17 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado18);
					
				}
				else
				{
					resultado18 = resultado17 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %i\n\n", resultado18);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter18);
				scanf("%c", &caracter18);
				
				fflush(stdin);
				
				//Decimonovena pregunta
				system ("cls");
				char respuesta19, caracter19;
				int resultado19;
				
				pregunta19();
				scanf("%c", &respuesta19);
				
				while ((respuesta19 != 'a') && (respuesta19 != 'b') && (respuesta19 != 'c') && (respuesta19 != 'd') && (respuesta19 != 'A') && (respuesta19 != 'B') && (respuesta19 != 'C') && (respuesta19 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta19);
				}
				
				if ((respuesta19 =='C') || (respuesta19 =='c'))
				{
					resultado19 = resultado18 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado19);
					
				}
				else
				{
					resultado19 = resultado18 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\n\n\nLa respuesta correcta era la C: fscanf");
					printf("\nPuntuacion: %i\n\n", resultado19);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter19);
				scanf("%c", &caracter19);
				
				fflush(stdin);
				
				//Vigesima pregunta
				system ("cls");
				char respuesta20, caracter20;
				int resultado20;
				
				pregunta20();
				scanf("%c", &respuesta20);
				
				while ((respuesta20 != 'a') && (respuesta20 != 'b') && (respuesta20 != 'c') && (respuesta20 != 'd') && (respuesta20 != 'A') && (respuesta20 != 'B') && (respuesta20 != 'C') && (respuesta20 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta20);
				}
				
				if ((respuesta20 =='C') || (respuesta20 =='c'))
				{
					resultado20 = resultado19 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado20);
					
				}
				else
				{
					resultado20 = resultado19 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\n\n\nLa respuesta correcta era la C: 112 ");
					printf("\nPuntuacion: %i\n\n", resultado20);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter20);
				scanf("%c", &caracter20);
				
				fflush(stdin);
				
				//Vigesimaprimera pregunta
				system ("cls");
				char significado9[200], significado10[100] = "Varsovia", significado11[100] = "VARSOVIA";
				char significado12[100] = "varsovia";
				int resultado21, comparacion9, comparacion10, comparacion11;
				char caracter21;
				
				pregunta21();
				gets(significado9);
				puts(significado9);
				
				comparacion9 = strcmp(significado10, significado9);
				comparacion10 = strcmp(significado11, significado9);
				comparacion11= strcmp(significado12, significado9);
				
				if((comparacion9 == 0 ) || (comparacion10 == 0) || (comparacion11 == 0))
				{
					printf("Respuesta correcta!!\n");
					resultado21 = resultado20 +3;
					printf("Tu puntuacion es de: %i", resultado21);
				}
				else if((comparacion9 != 0 )|| (comparacion10 != 0) || (comparacion11 != 0))
				{
					printf("Respuesta incorrecta\n");
					resultado21 = resultado20+0;
					printf("Tu puntuacion es de: %i", resultado21);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter21);
				
				fflush(stdin);
				
				//Vigesimasegunda pregunta
				system ("cls");
				char significado13[200], significado14[100] = "Femur", significado15[100] = "Fémur";
				char significado16[100] = "fémur", significado40[100]="FEMUR", significado41[100]="FÉMUR", significado69[100]="femur";
				int resultado22, comparacion12, comparacion13, comparacion14, comparacion50, comparacion51, comparacion69;
				char caracter22;
				
				pregunta22();
				gets(significado13);
				puts(significado13);
				
				comparacion12 = strcmp(significado14, significado13);
				comparacion13 = strcmp(significado15, significado13);
				comparacion14 = strcmp(significado16, significado13);
				comparacion50 = strcmp(significado40, significado13);
				comparacion51 = strcmp(significado41, significado13);
				comparacion69 = strcmp(significado69, significado13);
				
				if((comparacion12 == 0 ) || (comparacion13 == 0) || (comparacion14 == 0) || (comparacion50 == 0) || comparacion51 == 0 || comparacion69==0)
				{
					printf("Respuesta correcta!!\n");
					resultado22 = resultado21 +3;
					printf("Tu puntuacion es de: %i", resultado21);
				}
				else if((comparacion12 != 0 )|| (comparacion13 != 0) || (comparacion14 != 0) || (comparacion50 != 0) || (comparacion51 != 0))
				{
					printf("Respuesta incorrecta\n");
					resultado22 = resultado21+0;
					printf("Tu puntuacion es de: %i", resultado22);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter22);
				
				fflush(stdin);
				
				//Vigesimatercera pregunta
				system ("cls");
				char significado17[300], significado18[300] = "OBJETO VOLADOR NO IDENTIFICADO", significado19[300] = "objeto volador no identificado";
				char significado20[300] = "Objeto volador no identificado",significado21[300] = "Objeto Volador No Identificado";
				int resultado23, comparacion15, comparacion16, comparacion17, comparacion18;
				char caracter23;
				
				pregunta23();
				gets(significado17);
				puts(significado17);
				
				comparacion15 = strcmp(significado18, significado17);
				comparacion16 = strcmp(significado19, significado17);
				comparacion17 = strcmp(significado20, significado17);
				comparacion18 = strcmp(significado21, significado17);
				
				if((comparacion15== 0 ) || (comparacion16 == 0) || (comparacion17 == 0)|| (comparacion18 == 0))
				{
					printf("Respuesta correcta!!\n");
					resultado23 = resultado22 +3;
					printf("Tu puntuacion es de: %i", resultado23);
				}
				else if((comparacion15 != 0 )|| (comparacion16 != 0) || (comparacion17 != 0) || (comparacion18 == 0))
				{
					printf("Respuesta incorrecta\n");
					resultado23 = resultado22+0;
					printf("Tu puntuacion es de: %i", resultado23);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter23);
				
				fflush(stdin);
				
				//Vigesimacuarta pregunta
				system ("cls");
				char significado27[300], significado28[300] = "Murcielago", significado29[300] = "Murciélago";
				char significado30[300] = "murcielago",significado31[300] = "murciélago", significado32[300]="MURCIELAGO", significado33[300]="MURCIÉLAGO";
				int resultado24, comparacion23, comparacion24, comparacion25, comparacion26, comparacion27, comparacion28;
				char caracter24;
				
				pregunta24();
				gets(significado27);
				puts(significado27);
				
				comparacion23 = strcmp(significado28, significado27);
				comparacion24 = strcmp(significado29, significado27);
				comparacion25 = strcmp(significado30, significado27);
				comparacion26 = strcmp(significado31, significado27);
				comparacion27 = strcmp(significado32, significado27);
				comparacion28 = strcmp(significado33, significado27);
				
				if((comparacion23 == 0 ) || (comparacion24 == 0) || (comparacion25 == 0) || (comparacion26 == 0) || (comparacion27 == 0) || (comparacion28 == 0))
				{
					printf("Respuesta correcta!!\n");
					resultado24 = resultado23 +3;
					printf("Tu puntuacion es de: %i", resultado24);
				}
				else if((comparacion23 != 0 )|| (comparacion24 != 0) || (comparacion25 != 0) || (comparacion26 != 0) || (comparacion27 != 0) || (comparacion28 != 0))
				{
					printf("Respuesta incorrecta\n");
					resultado24 = resultado23+0;
					printf("Tu puntuacion es de: %i", resultado24);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter24);
				
				fflush(stdin);
				
				//Vigesimoquinta pregunta
				system ("cls");
				char respuesta25, caracter25;
				int resultado25;
			
				pregunta25();
				scanf("%c", &respuesta25);
				
				while ((respuesta25 != 'a') && (respuesta25 != 'b') && (respuesta25 != 'c') && (respuesta25 != 'd') && (respuesta25 != 'A') && (respuesta25 != 'B') && (respuesta25 != 'C') && (respuesta25 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta25);
				}
				
				if ((respuesta25 =='A') || (respuesta25 =='a'))
				{
					resultado25 = resultado24 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado25);
					
				}
				else
				{
					resultado25 = resultado24 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\n\n\nLa respuesta correcta era la A: 8M");
					printf("\nPuntuacion: %i\n\n", resultado25);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter25);
				scanf("%c", &caracter25);
				
				fflush(stdin);
				
					system ("cls");
					float porcentaje1;
					porcentaje1 = (resultado25/75)*100;
					printf("La puntuación total obtenida es de %d puntos\n\n", resultado25);
					printf("\nHa acertado un %f % de las preguntas.\n\n", porcentaje1);
					printf("\nGRACIAS POR PARTICIPAR %s.\nEsperamos verle de nuevo muy pronto.\n\n\n", login[300].nombrecompleto);
					
					if(porcentaje1<50)
					{
						printf("Lo siento mucho, no ha conseguido alcanzar el 50% de preguntas acertadas por lo que no le queda otro remedio que pagar otra matricula de informática.");
						
					} else if(50<=porcentaje1<80)
							{
								printf("Enhorabuena, puede ir recogiendo los 6 créditos de la asignatura de informática, ha aprobado.");
									
							}else if(porcentaje1>=80)
									{
										printf("VAYA VAYA, HA CONSEGUIDO SUPERAR CON GRANDES RESULTADOS LAS PREGUNTAS, PUEDES ESTAR FELIZ, EN LOS PROXIMOS DIAS RECIBIRÁ UN SMS CON EL TÍTULO UNIVERSITARIO QUE LE CORRESPONDE.");
									}
							
						int duda1, y1;
						char salto1;
						printf("\n\nEn el caso de que te haya surgido alguna duda en las preguntas aqui tienes la opcion de ver las respuestas a todas las preguntas.\n");
						printf("¿Tienes alguna duda respecto a alguna pregunta?\n1.Sí\n2.No\nIntroduzca 1 (Sí) ó 2 (No)\n");
						scanf("%d", &duda1);
		
						while((duda1!=1) && (duda1!=2))
						{
							printf("Por favor, introduzca un digito válido.\n");
							scanf("%d", &duda1);
						}
					
						switch(duda1)
							{
								case 1: 
										system ("cls"); // Borra todo lo anterior
										printf("Las respuestas a las preguntas son las siguientes:.\n");
										pfichero4 = fopen("preguntasfaciles.txt", "r");
										while((y1=fgetc(pfichero4))!=EOF)
										{
											putchar(y1);
										}
										
												if (pfichero4 == NULL) 
												{
														printf("No se encuentra el fichero\n");
														return 0;
												}
											
												printf("Esperemos haber resuelto todas tus dudas.\nGracias por jugar, vuelve pronto.\nPulsa enter para continuar.\n");
												scanf("%c", &salto1);
												scanf("%c", &salto1);
							
											fclose(pfichero4);
											
										break;
										
								case 2: 
										system("cls");
										break;
							}	
				break;
			}
		case 2:
			{
				char caracter201;
				printf("Ha seleccionado el nivel medio. A continuacion responda las 25 preguntas que se le van a presentar.\n ¡¡BUENA SUERTE!!\n");
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter201);
				scanf("%c", &caracter201);
				system("cls");
				//Primera pregunta
					char respuesta51, caracter51;
					int resultado51, resultado00=0;
					
					pregunta51();
					scanf("%c", &respuesta51);
						while ((respuesta51 != 'a') && (respuesta51 != 'b') && (respuesta51 != 'c') && (respuesta51 != 'd') && (respuesta51 != 'A') && (respuesta51 != 'B') && (respuesta51 != 'C') && (respuesta51 != 'D'))
							{
							printf("Por favor, introduzca una letra valida\n");
							scanf("%c", &respuesta51);	
							}
					if ((respuesta51 =='A') || (respuesta51 =='a'))
						{
						resultado51 = resultado00 + 3;
						printf("\nRESPUESTA CORRECTA!!");
						printf("\nPuntuacion: %d\n\n", resultado51);	
						}
					else
						{
						resultado51 = resultado00 + 0;
						printf("\nTRY AGAIN NEXT DAY\n");
						printf("\nPuntuacion: %d\n\n", resultado51);
						}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter51);
					scanf("%c", &caracter51);
					
					fflush(stdin);
				//Segunda pregunta
				system ("cls");
					char respuesta52, caracter52;
					int resultado52;
					
					pregunta52();
					scanf("%c", &respuesta52);
						while ((respuesta52 != 'a') && (respuesta52 != 'b') && (respuesta52 != 'c') && (respuesta52 != 'd') && (respuesta52 != 'A') && (respuesta52 != 'B') && (respuesta52 != 'C') && (respuesta52 != 'D'))
							{
							printf("Por favor, introduzca una letra valida\n");
							scanf("%c", &respuesta52);	
							}
					if ((respuesta52 =='B') || (respuesta52 =='b'))
						{
						resultado52 = resultado51 + 3;
						printf("\nRESPUESTA CORRECTA!!");
						printf("\nPuntuacion: %d\n\n", resultado52);	
						}
					else
						{
						resultado52 = resultado51 + 0;
						printf("\nTRY AGAIN NEXT DAY\n");
						printf("\nPuntuacion: %d\n\n", resultado52);
						}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter52);
					scanf("%c", &caracter52);
					
					fflush(stdin);
				//Tercera pregunta
				system ("cls");
					char respuesta53, caracter53;
					int resultado53;
					
					pregunta53();
					scanf("%c", &respuesta53);
						while ((respuesta53 != 'a') && (respuesta53 != 'b') && (respuesta53 != 'c') && (respuesta53 != 'd') && (respuesta53 != 'A') && (respuesta53 != 'B') && (respuesta53 != 'C') && (respuesta53 != 'D'))
							{
							printf("Por favor, introduzca una letra valida\n");
							scanf("%c", &respuesta53);	
							}
					if ((respuesta53 =='C') || (respuesta53 =='c'))
						{
						resultado53 = resultado52 + 3;
						printf("\nRESPUESTA CORRECTA!!");
						printf("\nPuntuacion: %d\n\n", resultado53);	
						}
					else
						{
						resultado53 = resultado52 + 0;
						printf("\nTRY AGAIN NEXT DAY\n");
						printf("\nPuntuacion: %d\n\n", resultado53);
						}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter53);
					scanf("%c", &caracter53);
					
					fflush(stdin);
					
					//Cuarta pregunta
					system ("cls");
					char respuesta54, caracter54;
					int resultado54;
					
					pregunta54();
					scanf("%c", &respuesta54);
						while ((respuesta54 != 'a') && (respuesta54 != 'b') && (respuesta54 != 'c') && (respuesta54 != 'd') && (respuesta54 != 'A') && (respuesta54 != 'B') && (respuesta54 != 'C') && (respuesta54 != 'D'))
							{
							printf("Por favor, introduzca una letra valida\n");
							scanf("%c", &respuesta54);	
							}
					if ((respuesta54 =='D') || (respuesta54 =='d'))
						{
						resultado54 = resultado53 + 3;
						printf("\nRESPUESTA CORRECTA!!");
						printf("\nPuntuacion: %d\n\n", resultado54);	
						}
					else
						{
						resultado54 = resultado53 + 0;
						printf("\nTRY AGAIN NEXT DAY\n");
						printf("\nPuntuacion: %d\n\n", resultado54);
						}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter54);
					scanf("%c", &caracter54);
					
					fflush(stdin);
					
					// Quinta pregunta
					system ("cls");
					char respuesta55, caracter55;
					int resultado55;
					
					pregunta55();
					scanf("%c", &respuesta55);
						while ((respuesta55 != 'a') && (respuesta55 != 'b') && (respuesta55 != 'c') && (respuesta55 != 'd') && (respuesta55 != 'A') && (respuesta55 != 'B') && (respuesta55 != 'C') && (respuesta55 != 'D'))
							{
							printf("Por favor, introduzca una letra valida\n");
							scanf("%c", &respuesta55);	
							}
					if ((respuesta55 =='D') || (respuesta55 =='d'))
						{
						resultado55 = resultado54 + 3;
						printf("\nRESPUESTA CORRECTA!!");
						printf("\nPuntuacion: %d\n\n", resultado55);	
						}
					else
						{
						resultado55 = resultado54 + 0;
						printf("\nTRY AGAIN NEXT DAY\n");
						printf("\nPuntuacion: %d\n\n", resultado55);
						}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter55);
					scanf("%c", &caracter55);
					
					fflush(stdin);
					
					//Sexta pregunta
					system ("cls");
					char respuesta56, caracter56;
					int resultado56;
					
					pregunta56();
					scanf("%c", &respuesta56);
						while ((respuesta56 != 'a') && (respuesta56 != 'b') && (respuesta56 != 'c') && (respuesta56 != 'd') && (respuesta56 != 'A') && (respuesta56 != 'B') && (respuesta56 != 'C') && (respuesta56 != 'D'))
							{
							printf("Por favor, introduzca una letra valida\n");
							scanf("%c", &respuesta56);	
							}
					if ((respuesta56 =='D') || (respuesta56 =='d'))
						{
						resultado56 = resultado55 + 3;
						printf("\nRESPUESTA CORRECTA!!");
						printf("\nPuntuacion: %d\n\n", resultado56);	
						}
					else
						{
						resultado56 = resultado55 + 0;
						printf("\nTRY AGAIN NEXT DAY\n");
						printf("\nPuntuacion: %d\n\n", resultado56);
						}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter56);
					scanf("%c", &caracter56);
					
					fflush(stdin);
					
					//Septima pregunta
					system ("cls");
					char respuesta57, caracter57;
					int resultado57;
					
					pregunta57();
					scanf("%c", &respuesta57);
						while ((respuesta57 != 'a') && (respuesta57 != 'b') && (respuesta57 != 'c') && (respuesta57 != 'd') && (respuesta57 != 'A') && (respuesta57 != 'B') && (respuesta57 != 'C') && (respuesta57 != 'D'))
							{
							printf("Por favor, introduzca una letra valida\n");
							scanf("%c", &respuesta57);	
							}
					if ((respuesta57 =='B') || (respuesta57 =='b'))
						{
						resultado57 = resultado56 + 3;
						printf("\nRESPUESTA CORRECTA!!");
						printf("\nPuntuacion: %d\n\n", resultado57);	
						}
					else
						{
						resultado57 = resultado56 + 0;
						printf("\nTRY AGAIN NEXT DAY\n");
						printf("\nPuntuacion: %d\n\n", resultado57);
						}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter57);
					scanf("%c", &caracter57);
					
					fflush(stdin);
					
					//Octava pregunta
					system ("cls");
					char respuesta58, caracter58;
					int resultado58;
					
					pregunta58();
					scanf("%c", &respuesta58);
						while ((respuesta58 != 'a') && (respuesta58 != 'b') && (respuesta58 != 'c') && (respuesta58 != 'd') && (respuesta58 != 'A') && (respuesta58 != 'B') && (respuesta58 != 'C') && (respuesta58 != 'D'))
							{
							printf("Por favor, introduzca una letra valida\n");
							scanf("%c", &respuesta58);	
							}
					if ((respuesta58 =='C') || (respuesta58 =='c'))
						{
						resultado58 = resultado57 + 3;
						printf("\nRESPUESTA CORRECTA!!");
						printf("\nPuntuacion: %d\n\n", resultado58);	
						}
					else
						{
						resultado58 = resultado57 + 0;
						printf("\nTRY AGAIN NEXT DAY\n");
						printf("\nPuntuacion: %d\n\n", resultado58);
						}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter58);
					scanf("%c", &caracter58);
					
					fflush(stdin);
					
					//Novena pregunta
					system ("cls");
					char respuesta59, caracter59;
					int resultado59;
					
					pregunta59();
					scanf("%c", &respuesta59);
						while ((respuesta59 != 'a') && (respuesta59 != 'b') && (respuesta59 != 'c') && (respuesta59 != 'd') && (respuesta59 != 'A') && (respuesta59 != 'B') && (respuesta59 != 'C') && (respuesta59 != 'D'))
							{
							printf("Por favor, introduzca una letra valida\n");
							scanf("%c", &respuesta59);	
							}
					if ((respuesta59 =='D') || (respuesta59 =='d'))
						{
						resultado59 = resultado58 + 3;
						printf("\nRESPUESTA CORRECTA!!");
						printf("\nPuntuacion: %d\n\n", resultado59);	
						}
					else
						{
						resultado59 = resultado58 + 0;
						printf("\nTRY AGAIN NEXT DAY\n");
						printf("\nPuntuacion: %d\n\n", resultado59);
						}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter59);
					scanf("%c", &caracter59);
					
					fflush(stdin);
					
					//Decima pregunta
					system ("cls");
					char respuesta60, caracter60;
					int resultado60;
					
					pregunta60();
					scanf("%c", &respuesta60);
						while ((respuesta60 != 'a') && (respuesta60 != 'b') && (respuesta60 != 'c') && (respuesta60 != 'd') && (respuesta60 != 'A') && (respuesta60 != 'B') && (respuesta60 != 'C') && (respuesta60 != 'D'))
							{
							printf("Por favor, introduzca una letra valida\n");
							scanf("%c", &respuesta60);	
							}
					if ((respuesta60 =='C') || (respuesta60 =='c'))
						{
						resultado60 = resultado59 + 3;
						printf("\nRESPUESTA CORRECTA!!");
						printf("\nPuntuacion: %d\n\n", resultado60);	
						}
					else
						{
						resultado60 = resultado59 + 0;
						printf("\nTRY AGAIN NEXT DAY\n");
						printf("\nPuntuacion: %d\n\n", resultado60);
						}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter60);
					scanf("%c", &caracter60);
					
					fflush(stdin);
					
				//Undécima pregunta
				system("cls");
				char respuesta61, caracter61;
				int resultado61;
				
				pregunta51();
				scanf("%c", &respuesta61);
				
				while ((respuesta61 != 'a') && (respuesta61 != 'b') && (respuesta61 != 'c') && (respuesta61 != 'd') && (respuesta61 != 'A') && (respuesta61 != 'B') && (respuesta61 != 'C') && (respuesta61 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta61);		
				}
				
				
				if ((respuesta61 =='B') || (respuesta61 =='b'))
				{
					resultado61 = resultado60 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado61);
					
				}
				else
				{
					resultado61 = resultado60 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado61);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter61);
				scanf("%c", &caracter61);
				
				fflush(stdin);

			//Duodécima pregunta
				system("cls");
				char respuesta62, caracter62;
				int resultado62;
				
				pregunta62();
				scanf("%c", &respuesta62);
				
				while ((respuesta62 != 'a') && (respuesta62 != 'b') && (respuesta62 != 'c') && (respuesta62 != 'd') && (respuesta62 != 'A') && (respuesta62 != 'B') && (respuesta62 != 'C') && (respuesta62 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta62);		
				}
				
				
				if ((respuesta62 =='A') || (respuesta62 =='a'))
				{
					resultado62 = resultado61 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado62);
					
				}
				else
				{
					resultado62 = resultado61 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado62);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter62);
				scanf("%c", &caracter62);
				
				fflush(stdin);
				
				//Decimotercera pregunta
				system("cls");
				char respuesta63, caracter63;
				int resultado63;
				pregunta63();
				scanf("%c", &respuesta63);
				
				while ((respuesta63 != 'a') && (respuesta63 != 'b') && (respuesta63 != 'c') && (respuesta63 != 'd') && (respuesta63 != 'A') && (respuesta63 != 'B') && (respuesta63 != 'C') && (respuesta63 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta63);		
				}
				
				
				if ((respuesta63 =='d') || (respuesta63 =='D'))
				{
					resultado63 = resultado62 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado63);
					
				}
				else
				{
					resultado63 = resultado62 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado63);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter63);
				scanf("%c", &caracter63);
				
				fflush(stdin);
				
				//Decimocuarta pregunta
				system("cls");
				char respuesta64, caracter64;
				int resultado64;
				
				pregunta64();
				scanf("%c", &respuesta64);
				
				while ((respuesta64 != 'a') && (respuesta64 != 'b') && (respuesta64 != 'c') && (respuesta64 != 'd') && (respuesta64 != 'A') && (respuesta64 != 'B') && (respuesta64 != 'C') && (respuesta64 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta64);		
				}
				
				
				if ((respuesta64 =='D') || (respuesta64 =='d'))
				{
					resultado64 = resultado63 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado64);
					
				}
				else
				{
					resultado64 = resultado63 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado64);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter64);
				scanf("%c", &caracter64);
				
				fflush(stdin);
				
				//Decimoquinta pregunta
				system("cls");
				char respuesta65, caracter65;
				int resultado65;
				
				pregunta65();
				scanf("%c", &respuesta65);
				
				while ((respuesta65 != 'a') && (respuesta65 != 'b') && (respuesta65 != 'c') && (respuesta65 != 'd') && (respuesta65 != 'A') && (respuesta65 != 'B') && (respuesta65 != 'C') && (respuesta65 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta65);		
				}
				
				
				if ((respuesta65 =='C') || (respuesta65 =='c'))
				{
					resultado65 = resultado64 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado65);
					
				}
				else
				{
					resultado65 = resultado64 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado65);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter65);
				scanf("%c", &caracter65);
				
				fflush(stdin);
				
				//Decimosexta pregunta				
				system("cls");
				char respuesta66, caracter66;
				int resultado66;
				
				pregunta66();
				scanf("%c", &respuesta66);
				
				while ((respuesta66 != 'a') && (respuesta66 != 'b') && (respuesta66 != 'c') && (respuesta66 != 'd') && (respuesta66 != 'A') && (respuesta66 != 'B') && (respuesta66 != 'C') && (respuesta66 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta66);		
				}
				
				
				if ((respuesta66 =='B') || (respuesta66 =='b'))
				{
					resultado66 = resultado65 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado66);
					
				}
				else
				{
					resultado66 = resultado65 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado66);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter66);
				scanf("%c", &caracter66);
				
				fflush(stdin);
				
				//Decimoseptima pregunta
				system ("cls");
				char significado60[200], significado62[400] = "3", significado63[400] = "TRES";
				char significado64[400] = "tres";
				int resultado67, comparacion60, comparacion61, comparacion62;
				char caracter67;
				
				pregunta67();
				gets(significado60);
				puts(significado60);
				
				comparacion60 = strcmp(significado62, significado60);
				comparacion61 = strcmp(significado63, significado60);
				comparacion62 = strcmp(significado64, significado60);
				
				if((comparacion60 == 0 ) || (comparacion61 == 0) || (comparacion62 == 0))
				{
					printf("Respuesta correcta!!\n");
					resultado67 = resultado66 +3;
					printf("Tu puntuacion es de: %i", resultado67);
				}
				else if((comparacion60 != 0 )|| (comparacion61 != 0) || (comparacion62 != 0))
				{
					printf("Respuesta incorrecta\n");
					resultado67 = resultado66+0;
					printf("Tu puntuacion es de: %i", resultado67);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter67);
				
				fflush(stdin);
				
				//Decimooctava pregunta
				system("cls");
				char respuesta68, caracter68;
				int resultado68;
				
				pregunta68();
				scanf("%c", &respuesta68);
				
				while ((respuesta68 != 'a') && (respuesta68 != 'b') && (respuesta68 != 'c') && (respuesta68 != 'd') && (respuesta68 != 'A') && (respuesta68 != 'B') && (respuesta68 != 'C') && (respuesta68 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta68);		
				}
				
				
				if ((respuesta68 =='A') || (respuesta68 =='a'))
				{
					resultado68 = resultado67 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado68);
					
				}
				else
				{
					resultado68 = resultado67 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado68);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter68);
				scanf("%c", &caracter68);
				
				fflush(stdin);
				
				//Decimonovena pregunta				
				system("cls");
				char respuesta69, caracter69;
				int resultado69;
				
				pregunta69();
				scanf("%c", &respuesta69);
				
				while ((respuesta69 != 'a') && (respuesta69 != 'b') && (respuesta69 != 'c') && (respuesta69 != 'd') && (respuesta69 != 'A') && (respuesta69 != 'B') && (respuesta69 != 'C') && (respuesta69 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta69);		
				}
				
				
				if ((respuesta69 =='D') || (respuesta69 =='d'))
				{
					resultado69 = resultado68 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado69);
					
				}
				else
				{
					resultado69 = resultado68 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado69);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter69);
				scanf("%c", &caracter69);
				
				fflush(stdin); 
				
				//Vigésima pregunta				
				system("cls");
				char respuesta70, caracter70;
				int resultado70;
				
				pregunta70();
				scanf("%c", &respuesta70);
				
				while ((respuesta70 != 'a') && (respuesta70 != 'b') && (respuesta70 != 'c') && (respuesta70 != 'd') && (respuesta70 != 'A') && (respuesta70 != 'B') && (respuesta70 != 'C') && (respuesta70 != 'D'))
				{
					printf("Por favor, introduzca una letra valida\n");
					scanf("%c", &respuesta70);		
				}
				
				
				if ((respuesta70 =='D') || (respuesta70 =='d'))
				{
					resultado70 = resultado69 + 3;
					printf("\nRESPUESTA CORRECTA!!");
					printf("\nPuntuacion: %d\n\n", resultado70);
					
				}
				else
				{
					resultado70 = resultado69 + 0;
					printf("\nTRY AGAIN NEXT DAY\n");
					printf("\nPuntuacion: %d\n\n", resultado70);
				}
				
				printf("\nPulse enter para continuar\n");	
				scanf("%c", &caracter70);
				scanf("%c", &caracter70);
				
				fflush(stdin);
				system ("cls");
				
				float porcentaje2;
					porcentaje2 = (resultado70/60)*100;
					printf("La puntuación total obtenida es de %d puntos\n\n", resultado70);
					printf("\nHa acertado un %f% de las preguntas.\n\n", porcentaje2);
					printf("\nGRACIAS POR PARTICIPAR %s.\nEsperamos verle de nuevo muy pronto.\n\n\n", login[300].nombrecompleto);
					
					if(porcentaje2<50)
					{
						printf("Lo siento mucho, no ha conseguido alcanzar el 50% de preguntas acertadas por lo que no le queda otro remedio que pagar otra matricula de informática.");
						
					}else if(50<=porcentaje2<80)
							{
								printf("Enhorabuena, puede ir recogiendo los 6 créditos de la asignatura de informática, ha aprobado.");
									
							}else if(porcentaje2>=80)
									{
										printf("VAYA VAYA, HA CONSEGUIDO SUPERAR CON GRANDES RESULTADOS LAS PREGUNTAS, PUEDES ESTAR FELIZ, EN LOS PROXIMOS DIAS RECIBIRÁ UN SMS CON EL TÍTULO UNIVERSITARIO QUE LE CORRESPONDE.");
									}
									
						int duda2, y2;
						char salto2;
						printf("\n\nEn el caso de que te haya surgido alguna duda en las preguntas aqui tienes la opcion de ver las respuestas a todas las preguntas.\n");
						printf("¿Tienes alguna duda respecto a alguna pregunta?\n1.Sí\n2.No\nIntroduzca 1 (Sí) ó 2 (No)\n");
						scanf("%d", &duda2);
		
						while((duda2!=1) && (duda2!=2))
						{
							printf("Por favor, introduzca un digito válido.\n");
							scanf("%d", &duda2);
						}
					
						switch(duda2)
							{
								case 1: 
										system ("cls"); // Borra todo lo anterior
										printf("Las respuestas a las preguntas son las siguientes:.\n");
										pfichero3 = fopen("respuestasmedias.txt", "r");
										while((y2=fgetc(pfichero2))!=EOF)
										{
											putchar(y2);
										}
										
												if (pfichero3 == NULL) 
												{
														printf("No se encuentra el fichero\n");
														return 0;
												}
											
												printf("Esperemos haber resuelto todas tus dudas.\nGracias por jugar, vuelve pronto.\nPulsa enter para continuar.\n");
												scanf("%c", &salto2);
												scanf("%c", &salto2);
							
											fclose(pfichero3);
											
										break;
										
								case 2: 
										system("cls");
										break;
							}
			
			break;
		}
		case 3:
			{
				fflush(stdin);
				printf("Eres una persona valiente.\nEstas preguntas son realmente complicadas.\n\n¡¡BUENA SUERTE!!\n");
				printf("Pulsa enter para continuar.");
				scanf("%c", &caracter);
				
				system("cls");
				
					//Primera pregunta
	
					char respuesta101, caracter101;
					int resultado101, resultado0=0;
					
					pregunta101();
					scanf("%c", &respuesta101);
					
					while ((respuesta101 != 'a') && (respuesta101 != 'b') && (respuesta101 != 'c') && (respuesta101 != 'd') && (respuesta101 != 'A') && (respuesta101 != 'B') && (respuesta101 != 'C') && (respuesta101 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta101);		
					}
					
					
					if ((respuesta101 =='B') || (respuesta101 =='b'))
					{
						resultado101 = resultado0 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");
						printf("Congratulations, you are a real american.\n");
						printf("\nPuntuación: %d\n\n", resultado101);
						
					}
					else
					{
						resultado101 = resultado0 ;
						printf("\nRespuesta incorrecta.\n");
						printf("La respuesta correcta era la opción b, 45 presidentes.\n");
						printf("Bien intentado\n");
						printf("\nPuntuacion: %d\n\n", resultado101);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter101);
					scanf("%c", &caracter101);
					
					system ("cls");
					fflush(stdin);
					
					//Segunda pregunta 
					
					char respuesta102, caracter102;	
					int resultado102; 
					
					pregunta102();
					scanf("%c", &respuesta102);
					
					while ((respuesta102 != 'a') && (respuesta102 != 'b') && (respuesta102 != 'c') && (respuesta102 != 'd') && (respuesta102 != 'A') && (respuesta102 != 'B') && (respuesta102 != 'C') && (respuesta102 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta102);		
					}
					
					if ((respuesta102 =='C') || (respuesta102 == 'c'))
					{
						resultado102 = resultado101 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("Parece que has estado ahí.\n");
						printf("\nPuntuación: %d\n\n", resultado102);
					}
					else
					{
						resultado102 = resultado101 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("La respuesta era la C, La Santamaría.\n");
						printf("\nPuntuación: %d\n\n", resultado102);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter102);
					scanf("%c", &caracter102);
					
					system("cls");
					fflush(stdin);
					
					//Tercera pregunta 
				
					char respuesta103[200], caracter103;
					char respuestacorrecta101[200] = "barrita", respuestacorrecta102[200] = "Barrita", respuestacorrecta103[200] = "BARRITA";
					int resultado103, comparacion101, comparacion102, comparacion103;
					
					pregunta103();
					gets(respuesta103);
							
					comparacion101 = strcmp(respuesta103, respuestacorrecta101);
					comparacion102 = strcmp(respuesta103, respuestacorrecta102);
					comparacion103 = strcmp(respuesta103, respuestacorrecta103);
							
					if ((comparacion101 == 0) || (comparacion102 == 0) || (comparacion103 == 0))
					{
						resultado103 = resultado102 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");				
						printf("\nPuntuación: %d\n\n", resultado103);
					}
					else if ((comparacion101 != 0) && (comparacion102 != 0) && (comparacion103 != 0))
					{
						printf("\nLa respuesta es incorrecta. La respuesta correcta es:\n");
						resultado103 = resultado102 -1 ;
						printf("El perro ladra, el gato maulla, el cuervo grazna y el elefante BARRITA.\n");
						printf("\nPuntuación: %d\n\n", resultado103);
					}
				
					fflush(stdin);
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter103);
					
					system("cls");
					fflush(stdin);
					
					//Cuarta pregunta
					
					char respuesta104, caracter104;
					int resultado104;
					
					pregunta104();
					scanf("%c", &respuesta104);
					
					while ((respuesta104 != 'a') && (respuesta104 != 'b') && (respuesta104 != 'c') && (respuesta104 != 'd') && (respuesta104 != 'A') && (respuesta104 != 'B') && (respuesta104 != 'C') && (respuesta104 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta104);		
					}
					
					if ((respuesta104 =='a') || (respuesta104 == 'A'))
					{
						resultado104 = resultado103 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado104);
					}
					else
					{
						resultado104 = resultado103 -1 ;
						printf("\nRespuesta incorrecta.\n");
						printf("El más grande es el Océano Pacífico, con una superficie total de 165.700.000 km²\n");
						printf("\nPuntuación: %d\n\n", resultado104);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter104);
					scanf("%c", &caracter104);
					
					system("cls");
					fflush(stdin);
					
					//Quinta pregunta
					
					char respuesta105, caracter105;
					int resultado105;
				
					pregunta105();
					scanf("%c", &respuesta105);
					
					while ((respuesta105 != 'a') && (respuesta105 != 'b') && (respuesta105 != 'c') && (respuesta105 != 'd') && (respuesta105 != 'A') && (respuesta105 != 'B') && (respuesta105 != 'C') && (respuesta105 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta105);		
					}
					
					if ((respuesta105 =='b') || (respuesta105 == 'B'))
					{
						resultado105 = resultado104 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado105);
					}
					else
					{
						resultado105 = resultado104 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("La respuesta correcta es la B, de 1939 a 1945.\n");
						printf("\nPuntuación: %d\n\n", resultado105);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter105);
					scanf("%c", &caracter105);
					
					system("cls");
					fflush(stdin);
					
					//Sexta pregunta
					
					char respuesta106, caracter106;
					int resultado106;
					
					pregunta106();
					scanf("%c", &respuesta106);
				
					while ((respuesta106 != 'a') && (respuesta106 != 'b') && (respuesta106 != 'c') && (respuesta106 != 'd') && (respuesta106 != 'A') && (respuesta106 != 'B') && (respuesta106 != 'C') && (respuesta106 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta106);		
					}
					
					if ((respuesta106 =='b') || (respuesta106 == 'B'))
					{
						resultado106 = resultado105 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado106);
					}
					else
					{
						resultado106 = resultado105 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("La respuesta correcta es el COBRE.\n");
						printf("\nPuntuación: %d\n\n", resultado106);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter106);
					scanf("%c", &caracter106);
					
					system("cls");
					fflush(stdin);
						
					//Septima pregunta
					
					char respuesta107, caracter107;
					int resultado107;
						
					pregunta107();
					scanf("%c", &respuesta107);
					
					while ((respuesta107 != 'a') && (respuesta107 != 'b') && (respuesta107 != 'c') && (respuesta107 != 'd') && (respuesta107 != 'A') && (respuesta107 != 'B') && (respuesta107 != 'C') && (respuesta107 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta107);		
					}
						
					if ((respuesta107 =='d') || (respuesta107 == 'D'))
					{
						resultado107 = resultado106 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado107);
					}
					else if ((respuesta107 == 'b') || (respuesta107 == 'B'))
					{
						resultado107 = resultado106 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("El murciélago es el único mamífero que puede volar.\n");
						printf("La ardilla voladora no vuela realmente, solo abre sus alas para planear");
						printf("\nPuntuación: %d\n\n", resultado107);
					}else
					{
						resultado107 = resultado106 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("El murciélago es el único mamífero que puede volar.\n");
						printf("\nPuntuación: %d\n\n", resultado107);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter107);
					scanf("%c", &caracter107);
					
					system("cls");
					fflush(stdin);
					
					//Octava pregunta
				
					char respuesta108, caracter108;
					int resultado108;
					
					pregunta108();
					scanf("%c", &respuesta108);
					
					while ((respuesta108 != 'a') && (respuesta108 != 'b') && (respuesta108 != 'c') && (respuesta108 != 'd') && (respuesta108 != 'A') && (respuesta108 != 'B') && (respuesta108 != 'C') && (respuesta108 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta108);		
					}
						
					if ((respuesta108 =='D') || (respuesta108 == 'd'))
					{
						resultado108 = resultado107 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado108);
					}
					else
					{
						resultado108 = resultado107 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("El más caro es el RODIO.\n");
						printf("\nPuntuación: %d\n\n", resultado108);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter108);
					scanf("%c", &caracter108);
					
					system("cls");
					fflush(stdin);
					
					//Novena pregunta 
					
					char caracter109, respuesta109;
					int resultado109;
					
					pregunta109();
					scanf("%c", &respuesta109);
					
					while ((respuesta109 != 'a') && (respuesta109 != 'b') && (respuesta109 != 'c') && (respuesta109 != 'd') && (respuesta109 != 'A') && (respuesta109 != 'B') && (respuesta109 != 'C') && (respuesta109 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta109);		
					}
						
					if ((respuesta109 =='c') || (respuesta109 == 'C'))
					{
						resultado109 = resultado108 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado109);
					}
					else
					{
						resultado109 = resultado108 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("Blancanieves y los siete enanitos.\n");
						printf("\nPuntuación: %d\n\n", resultado109);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter109);
					scanf("%c", &caracter109);
					
					system("cls");
					fflush(stdin);
					
					//Decima pregunta 
					
					char respuesta110, caracter110;
					int resultado110;
					
					pregunta110();
					scanf("%c", &respuesta110);
					
					while ((respuesta110 != 'a') && (respuesta110 != 'b') && (respuesta110 != 'c') && (respuesta110 != 'd') && (respuesta110 != 'A') && (respuesta110 != 'B') && (respuesta110 != 'C') && (respuesta110 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta110);		
					}
						
					if ((respuesta110 =='A') || (respuesta110 == 'a'))
					{
						resultado110 = resultado109 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado110);
					}
					else
					{
						resultado110 = resultado109 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("La perra Laika fue la primera en ponerse en órbita.\n");
						printf("\nPuntuación: %d\n\n", resultado110);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter110);
					scanf("%c", &caracter110);
					
					system("cls");
					fflush(stdin);
					
					//Undecima pregunta
				
					char respuesta111, caracter111;
					int resultado111;
					
					pregunta111();
					scanf("%c", &respuesta111);
					
					while ((respuesta111 != 'a') && (respuesta111 != 'b') && (respuesta111 != 'c') && (respuesta111 != 'd') && (respuesta111 != 'A') && (respuesta111 != 'B') && (respuesta111 != 'C') && (respuesta111 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta111);		
					}
					
						
					if ((respuesta111 =='c') || (respuesta111 == 'C'))
					{
						resultado111 = resultado110 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado111);
					}
					else
					{
						resultado111 = resultado110 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("La C, pi = 3.14159265358979323846\n");
						printf("\nPuntuación: %d\n\n", resultado111);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter111);
					scanf("%c", &caracter111);
					
					system("cls");
					fflush(stdin);
					
					//Duodecima pregunta
					
					char respuesta112, caracter112;
					int resultado112;
					
					pregunta112();
					scanf("%c", &respuesta112);
					
					while ((respuesta112 != 'a') && (respuesta112 != 'b') && (respuesta112 != 'c') && (respuesta112 != 'd') && (respuesta112 != 'A') && (respuesta112 != 'B') && (respuesta112 != 'C') && (respuesta112 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta112);		
					}
					
						
					if ((respuesta112 =='c') || (respuesta112 == 'C'))
					{
						resultado112 = resultado111 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado112);
					}
					else
					{
						resultado112 = resultado111 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("El 2.\n");
						printf("\nPuntuación: %d\n\n", resultado112);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter112);
					scanf("%c", &caracter112);
					
					system("cls");
					fflush(stdin);
					
					//Decimotercera pregunta
					
					char respuesta113, caracter113;
					int resultado113;
					
					pregunta113();
					scanf("%c", &respuesta113);
					
					while ((respuesta113 != 'a') && (respuesta113 != 'b') && (respuesta113 != 'c') && (respuesta113 != 'd') && (respuesta113 != 'A') && (respuesta113 != 'B') && (respuesta113 != 'C') && (respuesta113 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta113);		
					}
					
						
					if ((respuesta113 =='b') || (respuesta113 == 'B'))
					{
						resultado113 = resultado112 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado113);
					}
					else
					{
						resultado113 = resultado112 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("Naranjas.\n");
						printf("\nPuntuación: %d\n\n", resultado113);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter113);
					scanf("%c", &caracter113);
					
					system("cls");
					fflush(stdin);
					
					//Decimacuarta pregunta
					
					char respuesta114, caracter114;
					int resultado114;
					
					pregunta114();
					scanf("%c", &respuesta114);
					
					while ((respuesta114 != 'a') && (respuesta114 != 'b') && (respuesta114 != 'c') && (respuesta114 != 'd') && (respuesta114 != 'A') && (respuesta114 != 'B') && (respuesta114 != 'C') && (respuesta114 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta114);		
					}
					
						
					if ((respuesta114 =='c') || (respuesta114 == 'C'))
					{
						resultado114 = resultado113 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado114);
					}
					else
					{
						resultado114 = resultado113 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("Duró 116 años.\n");
						printf("\nPuntuación: %d\n\n", resultado114);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter114);
					scanf("%c", &caracter114);
					
					system("cls");
					fflush(stdin);
					
					//Decimoquinta pregunta
					
					char respuesta115, caracter115;
					int resultado115;
					
					pregunta115();
					scanf("%c", &respuesta115);
					
					while ((respuesta115 != 'a') && (respuesta115 != 'b') && (respuesta115 != 'c') && (respuesta115 != 'd') && (respuesta115 != 'A') && (respuesta115 != 'B') && (respuesta115 != 'C') && (respuesta115 != 'D'))
					{
						printf("Por favor, introduzca una letra válida: ");
						scanf("%c", &respuesta115);		
					}
					
						
					if ((respuesta115 =='b') || (respuesta115 == 'B'))
					{
						resultado115 = resultado114 + 3;
						printf("\n¡¡RESPUESTA CORRECTA!!\n");		
						printf("\nPuntuación: %d\n\n", resultado115);
					}
					else
					{
						resultado115 = resultado114 - 1;
						printf("\nRespuesta incorrecta.\n");
						printf("En los seres humanos hay 24 vértebras durante la etapa adulta.\n");
						printf("\nPuntuación: %d\n\n", resultado115);
					}
					
					printf("\nPulse enter para continuar\n");	
					scanf("%c", &caracter115);
					scanf("%c", &caracter115);
					
					system("cls");
					fflush(stdin);	
					
					float porcentaje3;
					porcentaje3 = (resultado115/45.0)*100;
					printf("La puntuación total obtenida es de %d puntos\n\n", resultado115);
					printf("\nHa acertado un %0.2f de las preguntas.\n\n", porcentaje3);
					printf("\nGRACIAS POR PARTICIPAR %s.\nEsperamos verle de nuevo muy pronto.\n\n\n", login[300].nombrecompleto);
					
					if(porcentaje3<50)
					{
						printf("Lo siento mucho, no ha conseguido alcanzar el 50 por ciento de preguntas acertadas por lo que no le queda otro remedio que pagar otra matricula de informática.\n");
					}else if(50<=porcentaje3 && porcentaje3<80)
							{
								printf("Enhorabuena, puede ir recogiendo los 6 créditos de la asignatura de informática, ha aprobado.\n");
							}else if(porcentaje3>=80)
									{
										printf("VAYA VAYA, HA CONSEGUIDO SUPERAR CON GRANDES RESULTADOS LAS PREGUNTAS, PUEDES ESTAR FELIZ, EN LOS PROXIMOS DIAS RECIBIRÁ UN SMS CON EL TÍTULO UNIVERSITARIO QUE LE CORRESPONDE.\n");
									}
														
						int duda3, y3;
						char salto3;
						printf("En el caso de que te haya surgido alguna duda en las preguntas aqui tienes la opcion de ver las respuestas a todas las preguntas.\n");
						printf("¿Tienes alguna duda respecto a alguna pregunta?\n1.Sí\n2.No\nIntroduzca 1 (Sí) ó 2 (No)\n");
						scanf("%d", &duda3);
		
						while((duda3!=1) && (duda3!=2))
						{
							printf("Por favor, introduzca un digito válido.\n");
							scanf("%d", &duda3);
						}
					
						switch(duda3)
							{
								case 1: 
										system ("cls"); // Borra todo lo anterior
										printf("Las respuestas a las preguntas son las siguientes:.\n");
										pfichero2 = fopen("Respuestasdificiles1.txt", "r");
										while((y3=fgetc(pfichero2))!=EOF)
										{
											putchar(y3);
										}
										
												if (pfichero2 == NULL) 
												{
														printf("No se encuentra el fichero\n");
														return 0;
												}
											
												printf("Esperemos haber resuelto todas tus dudas.\nGracias por jugar, vuelve pronto.\nPulsa enter para continuar.\n");
												scanf("%c", &salto3);
												scanf("%c", &salto3);
							
											fclose(pfichero2);
											system("cls");
											
										break;
										
								case 2: 
										system("cls");
										break;
							}
				}// Cierre Case
			break;
	}//Cierrre swtich
}//Cierre main

	void pregunta1(){
				
				printf("\n1) ¿Por donde pasa el meridiano de Greenwich?\n");
				printf("A: Hong Kong       ");
				printf("B: Andorra\n"); 
				printf("C: Londres         "); //Esta es la correcta
				printf("D: Dinamarca\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta2(){
				
				printf("\n2) ¿Que animal era considerado sagrado en la cultura egipica\n");
				printf("A: Cucaracha          ");
				printf("B: Langosta\n"); 
				printf("C: Escarabajo         "); //Esta es la correcta
				printf("D: Rata\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			void pregunta3(){
				
				printf("\n3) ¿En que año se aprobo la actual constitucion española?\n");
				printf("A: 2009         ");
				printf("B: 1976\n"); 
				printf("C: 1789         "); 
				printf("D: 1978\n");//Esta es la correcta
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta4(){
					
				printf("\n4) ¿Quien escribio Romeo y Julieta?\n");
				printf("A: Edgar Allan Poe            ");
				printf("B: William Shakespeare\n"); //Esta es la correcta
				printf("C: Miguel de Cervantes        "); 
				printf("D: Cristobal Colon\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta5(){
				
				printf("\n5) ¿Quien fue el creador de Facebook?\n");
				printf("A: Amancio Ortega     ");
				printf("B: Cristiano Ronaldo\n"); 
				printf("C: Mark Zuckerberg    "); //Esta es la correcta
				printf("D: Steve Jobs\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta6(){
				
				printf("Que significan las siglas RAE?\n");
				printf("Escriba las palabras separadas mediante un espacio: \n");
			}
			
			void pregunta7(){
				
				printf("\n7) ¿A que se dedicaba Frida Khalo?\n");
				printf("A: Pintora       ");//Esta es la correcta
				printf("B: Cantante\n"); 
				printf("C: Matematica    "); 
				printf("D: Militar\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta8(){
				
				printf("\n8) ¿Cuanto vale la raiz cuadrada de 169?\n");
				printf("A: 13    ");//Esta es la correcta
				printf("B: 17\n"); 
				printf("C: 14    "); 
				printf("D: 11\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta9(){
			
				printf("\n9) ¿Cual de estas carreras tiene la nota de corte mas alta en la UCM?\n");
				printf("A: Magisterio ");
				printf("B: Farmacia\n"); 
				printf("C: Derecho    "); 
				printf("D: Fisica + Matematicas\n");//Esta es la correcta
				
				printf("Introduzca la letra que considere corrrecta:\n");	
			}
			
			void pregunta10(){
			
				printf("\n10) ¿Cual es el pais con mas habitantes del mundo?\n");
				printf("A: EEUU       ");
				printf("B: India\n"); 
				printf("C: Rusia      "); 
				printf("D: China\n");//Esta es la correcta
				
				printf("Introduzca la letra que considere corrrecta:\n");	
			}
			
			void pregunta11(){
				
				printf("\n11) ¿Quien fue el inventor de la bombilla\n");
				printf("A: Isaac Newton     ");
				printf("B: Alexander fleming\n"); 
				printf("C: Albert Einstein  "); 
				printf("D: Thomas Alba Edison\n");//Esta es la correcta
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta12(){
				
				printf("12) ¿Cual es la capital de Finlandia?\n");
				printf("Escriba su respuesta: ");
			}
			
			void pregunta13(){
				
				printf("\n13) ¿En que año se descubrio America?\n");
				printf("A: 1212     ");
				printf("B: 1492\n"); //Esta es la correcta
				printf("C: 1914     "); 
				printf("D: 1472\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta14(){
				
				printf("\n14) ¿A que se dedica elrubius\n");
				printf("A: Bailarin  ");
				printf("B: Politico\n"); 
				printf("C: Youtuber  "); //Esta es la correcta
				printf("D: Cantante\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta15(){
				
				printf("\n15) ¿Que alimento tiene mas vitamina C?\n");
				printf("A: Pepino   ");
				printf("B: Tomate\n"); 
				printf("C: Naranja  "); //Esta es la correcta
				printf("D: Melon\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta16(){
				
				printf("\n16) ¿En que region se dio el primer caso de COVID-19?\n");
				printf("A: Wuhan   ");//Esta es la correcta
				printf("B: Nueva Delhi\n"); 
				printf("C: Seul    "); 
				printf("D: Tokio\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta17(){
				
				printf("\n17) ¿En que pueblo nacio Andres Iniesta? \n");
				printf("A: Valdestillas     ");
				printf("B: Fuentenebro\n"); 
				printf("C: Puenteduero      "); 
				printf("D: Fuentealbilla\n");//Esta es la correcta
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta18(){
				
				printf("\n18) ¿Con que utensilios se juega al badminton?\n");
				printf("A: Raqueta y pelota     ");
				printf("B: Pala y balon\n"); 
				printf("C: Pala y volante       "); 
				printf("D: Raqueta y volante\n");//Esta es la correcta
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta19(){
				
				printf("\n19) ¿En informatica cual es el comando para pedir al usuario que escriba en un fichero de Cev++?\n");
				printf("A: scanf    ");
				printf("B: fprintf\n"); 
				printf("C: fscanf   "); //Esta es la correcta
				printf("D: printf\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta20(){
				
				printf("\n20) ¿Cual es el numero para emergencias en España?\n");
				printf("A: 096     ");
				printf("B: 012\n"); 
				printf("C: 112     "); //Esta es la correcta
				printf("D: 034\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
			void pregunta21(){
				
				printf("21) ¿Cual es la capital de Polonia?\n");
				printf("Escriba su respuesta: ");
			}
			
			void pregunta22(){
				
				printf("22) ¿Cual es el hueso mas largo del cuerpo?\n");
				printf("Escriba su respuesta: ");
			}
			
			void pregunta23(){
				
				printf("23) ¿Que significan las siglas OVNI?\n");
				printf("Escriba su respuesta: ");
			}
			
			void pregunta24(){
				
				printf("24)A partir de que animal se contagiaron los humanos del COVID-19?\n");
				printf("Escriba la respuesta en singular: \n");
			}
			
			void pregunta25(){
				
				printf("\n25) ¿Cual es el dia internacional de la mujer?\n");
				printf("A: 8M    ");//Esta es la correcta
				printf("B: 15M\n"); 
				printf("C: 23F   "); 
				printf("D: 8N\n");
				
				printf("Introduzca la letra que considere corrrecta:\n");
			}
			
				void pregunta51(){
				printf("1) ¿Quien fue el primer presidente de la democracia española tras el franquismo?\n");
				printf("A: Adolfo Suárez       ");//Esta es la correcta
				printf("B: Juan Carlos I\n"); 
				printf("C: Felipe González     "); 
				printf("D: José María Aznar\n");
				
			}
			void pregunta52(){
				printf("2) ¿En que obra de Shakespeare se dijo:'ser o no ser, esa es la cuestión'\n");
				printf("A: Romeo y julieta  ");//Esta es la correcta
				printf("B: Hamlet\n"); 
				printf("C: Sherlock Holmes  "); 
				printf("D: Macbeth\n");
			}
			void pregunta53(){
				printf("3) ¿La fórmula: E=mc^2, en que teoría científica aparece?\n");
				printf("A: En la teoria de Hitchcock      ");
				printf("B: En la  teoria de Galileo\n"); 
				printf("C: En la teoria de Einstein       "); //Esta es la correcta
				printf("D: En la teoria de Newton\n");
			}
			void pregunta54(){
				printf("4) ¿Cual es el nombre técnico de tener miedo a las alturas?\n");
				printf("A: Aracnofobia       ");
				printf("B: Claustrofobia\n"); 
				printf("C: Agorafobia        "); 
				printf("D: Acrofobia\n");//Esta es la correcta
				
			}
			void pregunta55(){
				printf("5) ¿Que nombre recibe el estadio de fútbol del Club Deportivo Alavés?\n");
				printf("A: Son Moix              ");
				printf("B: Ipurúa\n"); 
				printf("C: Santiago Bernabéu     "); 
				printf("D: Mendizorroza\n");//Esta es la correcta
			}
			void pregunta56(){
				printf("6) ¿En que año ocurrieron los atentados del 11S en Estados Unidos?\n");
				printf("A: 2000     ");
				printf("B: 1999\n"); 
				printf("C: 2006     "); 
				printf("D: 2001\n");//Esta es la correcta
			}
			void pregunta57(){
				printf("7) ¿Qué gran artista es conocido por su obra: 'La capilla sixtina'?\n");
				printf("A: Tiziano Vecellio      ");
				printf("B: Miguel Ángel\n"); //Esta es la correcta
				printf("C: Leonardo Da Vinci     "); 
				printf("D: Salvador Dalí\n");
			}
			void pregunta58(){
				printf("8) ¿Cual es la lengua más hablada en el mundo?\n");
				printf("A: Inglés      ");
				printf("B: Español\n"); 
				printf("C: Chino       "); //Esta es la correcta
				printf("D: Ruso\n");
			}
			void pregunta59(){
				printf("9) ¿Cuál era el lema de los tres mosqueteros?\n");
				printf("A: Fuenteovejuna, todos a una!!            ");
				printf("B: Todos para uno y vamos a por ellos!!\n"); 
				printf("C: Todos para uno y uno para ellos!!       "); 
				printf("D: Todos para uno y uno para todos!!\n");//Esta es la correcta
			}
			void pregunta60(){
				printf("10) ¿De que famosa marca de coches es el conocido spot: '¿te gusta conducir?'?\n");
				printf("A: Ferrari   ");
				printf("B: Audi\n"); 
				printf("C: BMW       "); 
				printf("D: Mercedes\n");//Esta es la correcta
			}
			void pregunta61(){
				
				printf("\n11) ¿Qué cantidad de huesos en el cuerpo humano?\n");
				printf("A: 200         ");
				printf("B: 206\n"); //Esta es la correcta
				printf("C: 187         "); 
				printf("D: 300\n");
				
				printf("Introduzca la letra que considere la opción corrrecta:\n");
			}
			
			void pregunta62(){
				
				printf("\n12) ¿Cuantos sabores primarios existen?\n");
				printf("A: 5, DULCE, SALADO, UMAMI, ÁCIDO Y AMARGO        ");// ESTA ES LA CORRECTA
				printf("B: 4, DULCE, SALADO, ÁCIDO Y AMARGO\n"); 
				printf("C: 5, DULCE, SALADO, ÁCIDO, AMARGO Y GRASO        "); 
				printf("D: 3, DULCE, SALADO, Y AMARGO\n");
				
				printf("Introduzca la letra que considere la opción corrrecta:\n");
			}
			void pregunta63(){
				
				printf("\n13) ¿Cual es el rio mas largo del mundo?\n");
				printf("A: EBRO       ");
				printf("B: PO\n"); 
				printf("C: NILO       "); 
				printf("D: AMAZONAS\n");//Esta es la correcta
				
				printf("Introduzca la letra que considere la opción corrrecta:\n");
			}
			
			void pregunta64(){
					
				printf("\n14) ¿Cual es la nación más pequeña del mundo?\n");
				printf("A: Malta            ");
				printf("B: Luxemburgo\n");
				printf("C: Linchestein      "); 
				printf("D: El Vaticano\n"); //Esta es la correcta
				
				printf("Introduzca la letra que considere la opción corrrecta:\n");
			}
			
			void pregunta65(){
				
				printf("\n15) ¿A qué se denomina el séptimo arte?\n");
				printf("A: Teatro     ");
				printf("B: Pintura\n"); 
				printf("C: Cine    "); //Esta es la correcta
				printf("D: Escritura\n");
				
				printf("Introduzca la letra que considere la opción corrrecta:\n");
			}
			
			void pregunta66(){
				
				printf("\n16) ¿Cual es la obra más importante en la literatura española?\n");
				printf("A: Fuenteovejuna     ");
				printf("B: Don Quijote de la mancha\n"); //Esta es la correcta
				printf("C: Luces de Bohemia    "); 
				printf("D: La Casa de Bernarda Alba\n");
				
				printf("Introduzca la letra que considere la opción corrrecta:\n");
				
			}
			
			void pregunta67(){
				printf("17) ¿Cuantos corazones tienen los pulpos?\n");
				printf("Teclee su respuesta: ");
				
			}
			
			void pregunta68(){
				
				printf("\n18)¿En que año se celbraron los Juegos Olímpicos en España?\n");
				printf("A: 1992    ");//Esta es la correcta
				printf("B: 2002\n"); 
				printf("C: 1993    "); 
				printf("D: 1982\n");
				
				printf("Introduzca la letra que considere la opción corrrecta:\n");
			}
			
			void pregunta69(){
			
				printf("\n19) ¿Cuál es el record mundial de apnea estática?");
				printf("(Aguantar el mayor tiempo posible bajo el agua\n)");
				printf("A: 18 minutos 56 segundos    ");
				printf("B: 13 minutos 31 segundos\n"); 
				printf("C: 13 minutos 43 segundos    "); 
				printf("D: 24 minutos 3  segundos\n");//Esta es la correcta
				
				printf("Introduzca la letra que considere la opción corrrecta:\n");	
			}
			
			void pregunta70(){
			
				printf("\n20) ¿Qué nombre recibio la mascota del mundial de 1982?\n");
				printf("A: Cobi       ");
				printf("B: Indi\n"); 
				printf("C: Rojito     "); 
				printf("D: Naranjito\n");//Esta es la correcta
				
				printf("Introduzca la letra que considere la opción corrrecta:\n");	
			}
			
			
			void pregunta101(){
				printf("\n1) ¿Cuantos presidentes ha tenido Estados Unidos en toda su historia?\n");
				printf("A: 35       ");
				printf("B: 45\n"); //Esta es la correcta
				printf("C: 28       ");
				printf("D: 39\n");
				
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta102(){
				printf("\n2) ¿En el viaje de vuelta de America de Colon, cual fue el barco que no regresó?\n");
				printf("A:LA PINTA             ");
				printf("B:LA NIÑA\n"); 
				printf("C:LA SANTAMARIA        ");  //Esta es la correcta
				printf("D:NINGUNA ES CORRECTA\n");
			
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta103(){
				printf("\n3) El perro ladra, el gato maulla, el cuervo grazna y el elefante... \n");
				printf("Escriba su respuesta: ");
			}
			
			void pregunta104(){
				printf("\n4) ¿Cuál es el océano más grande? \n");
				printf("A:PACÍFICO            "); //Esta es la correcta
				printf("B:ATLÁNTICO\n"); 
				printf("C:ÍNDICO              ");  
				printf("D:ANTÁRTICO\n");
				
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta105(){
				printf("\n5) ¿En qué año comenzó y terminó la II Guerra Mundial? \n");
				printf("A:1940 y 1948            "); 
				printf("B:1939 y 1945\n"); //Esta es la correcta
				printf("C:1938 y 1944            ");  
				printf("D:1937 y 1942\n");
				
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta106(){
				printf("\n6) ¿Cuál fue el primer metal que empleó el hombre? \n");
				printf("A:BRONCE           "); 
				printf("B:COBRE\n"); //Esta es la correcta
				printf("C:HIERRO          ");  
				printf("D:ACERO\n");
			
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta107(){
				printf("\n7) ¿Cuál es el único mamífero capaz de volar? \n");
				printf("A:PINGÜINO           "); 
				printf("B:ARDILLA VOLADORA\n"); 
				printf("C:AVESTRUZ           ");  
				printf("D:MURCIÉLAGO\n"); //Esta es la correcta
			
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta108(){
				printf("\n8) ¿Cúal es el elemento más caro de la tabla periódica? \n");
				printf("A:ORO             "); 
				printf("B:PLATINO\n"); 
				printf("C:CESIO           ");  
				printf("D:RODIO\n"); //Esta es la correcta
				
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta109(){
				printf("\n9) ¿Cúal fue la primera película de Walt Disney? \n");
				printf("A:Mickey Mouse                        "); 
				printf("B:Cenicienta\n"); 
				printf("C:Blancanieves y los siete enanitos   ");  //Esta es la correcta
				printf("D:La bella y la bestia\n"); 
				
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta110(){
				printf("\n10) ¿Cuál fue el primer ser/es vivo/s en viajar al espacio y ponerse en orbita?\n");
				printf("A:PERRA, LAIKA            "); //Esta es la correcta
				printf("B:PERROS, TSYGAN Y DEZIK\n"); 
				printf("C:RATÓN                   ");  
				printf("D:MONOS, ABLE Y BAKER   \n"); 
				
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			 }
			
			void pregunta111(){
				printf("\n11) ¿A cuánto equivale el numero Pi?\n"); //3.14159265358979323846
				printf("A:3.1417826            "); 
				printf("B:3.1416926\n"); 
				printf("C:3.1415926            ");  //Esta es la correcta
				printf("D:3.1395126\n"); 
			
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta112(){
				printf("\n12) ¿Cuál es el primero de los números primos? \n");
				printf("A:0          "); 
				printf("B:1\n"); 
				printf("C:2          "); //Esta es la correcta 
				printf("D:3\n"); 
				
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta113(){
				printf("\n13) ¿De qué color son las cajas negras de los aviones? \n");
				printf("A:NEGRAS             "); 
				printf("B:NARANJAS\n"); //Esta es la correcta
				printf("C:BLANCAS           ");  
				printf("D:LUMINISCENTES\n"); 
				
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta114(){
				printf("\n14) ¿Cuánto duró la famosa Guerra de los 100 años? \n");
				printf("A:107           "); 
				printf("B:100\n"); 
				printf("C:116           "); //Esta es la correcta 
				printf("D:97\n"); 
					
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
			
			void pregunta115(){
				printf("\n15) ¿Cuántas vértebras forman la columna vertebral humana, en la etapa adulta?\n");
				printf("A:28           "); 
				printf("B:24\n"); //Esta es la correcta.
				printf("C:33           ");  
				printf("D:30\n"); 
				
				printf("\nIntroduzca la letra que considere la opción corrrecta: ");
			}
