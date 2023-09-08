/*--------------------------------------------------------------------------------------------------------| 
|                                                                                                         |
|  Authors :   Maxtrui 	                                                                                  |
|  Date    :   7th September 2023                                                                         |
|  Header  :   Here i have all the functions and declarations                                             |
|                                                                                                         |
|--------------------------------------------------------------------------------------------------------*/

/*---------------------------------------- includes librarys --------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h> 
/*-------------------------------------------------------------------------------------------------------*/

/*---------------------------------------- global constant ----------------------------------------------*/
#define M 10
#define N 10 
/*-------------------------------------------------------------------------------------------------------*/

/*------------------------------------------ Declaration ------------------------------------------------*/
int Menu_matrices();
void Color(int ColorValue);
void Presentacion();
void Animation_ProgressBar();

void Explicacion_suma();
void Explicacion_resta();
void Explicacion_multiplicacion();
void Explicacion_traspuesta();
void Explicacion_puntoSilla();
void Explicacion_mostrar();

void Sumar_matrices();
void Restar_matrices();
void Multiplicar_matrices();
void Traspuesta_matriz();
void PuntodeSilla_matriz();
void Mostrar_matriz();
/*-------------------------------------------------------------------------------------------------------*/

/*-------------------------------------  | Code of functions | ------------------------------------------*/
void Presentacion() {
    Color(12);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t   GitHub of Devs: @Maxtrui    \n\n\n");
    Color(15);
    Animation_ProgressBar();
    system("cls");     
}

void Color(int ColorValue) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorValue);
}

int Menu_matrices(){
    int Election = 1;
    char Key;
    
    while(1)
    {
        switch(Election)
        {
        case 1: //caso default
            Color(12);
            printf("\n\t Que quiere hacer... \n\n");
            Color(15);
            Color(3);
            printf(" >>>\t Operacion 1: Sumar 2 matrices\n"); 
            Color(15);
            printf("\t Operacion 2: Restar 2 matrices\n");
            printf("\t Operacion 3: Multiplicar 2 matrices\n");
            printf("\t Operacion 4: Trasponer una matriz\n");
            printf("\t Operacion 5: Puntos de silla de una matriz\n");
            printf("\t Operacion 6: Mostrar por pantalla una matriz\n");
            printf("\t Exit: Salir del programa \n\n");
            Color(8);
            printf("\t W = Arriba \t S = Abajo \t ENTER = Seleccionar\n\n");
            Color(15);
            break;
        case 2:
            Color(12);
            printf("\n\t Que quiere hacer... \n\n");
            Color(15);
            printf("\t Operacion 1: Sumar 2 matrices\n"); 
            Color(3);
            printf(" >>>\t Operacion 2: Restar 2 matrices\n");
            Color(15);
            printf("\t Operacion 3: Multiplicar 2 matrices\n");
            printf("\t Operacion 4: Trasponer una matriz\n");
            printf("\t Operacion 5: Puntos de silla de una matriz\n");
            printf("\t Operacion 6: Mostrar por pantalla una matriz\n");
            printf("\t Exit: Salir del programa \n\n");
            Color(8);
            printf("\t W = Arriba \t S = Abajo \t ENTER = Seleccionar\n\n");
            Color(15);
            break;
        case 3:
            Color(12);
            printf("\n\t Que quiere hacer... \n\n");
            Color(15);
            printf("\t Operacion 1: Sumar 2 matrices\n"); 
            printf("\t Operacion 2: Restar 2 matrices\n");
            Color(3);
            printf(" >>>\t Operacion 3: Multiplicar 2 matrices\n");
            Color(15);
            printf("\t Operacion 4: Trasponer una matriz\n");
            printf("\t Operacion 5: Puntos de silla de una matriz\n");
            printf("\t Operacion 6: Mostrar por pantalla una matriz\n");
            printf("\t Exit: Salir del programa \n\n");
            Color(8);
            printf("\t W = Arriba \t S = Abajo \t ENTER = Seleccionar\n\n");
            Color(15);
            break;
        case 4:
        	Color(12);
            printf("\n\t Que quiere hacer... \n\n");
            Color(15);
            printf("\t Operacion 1: Sumar 2 matrices\n"); 
            printf("\t Operacion 2: Restar 2 matrices\n");
            printf("\t Operacion 3: Multiplicar 2 matrices\n");
            Color(3);
            printf(">>>\t Operacion 4: Trasponer una matriz\n");
            Color(15);
            printf("\t Operacion 5: Puntos de silla de una matriz\n");
            printf("\t Operacion 6: Mostrar por pantalla una matriz\n");
            printf("\t Exit: Salir del programa \n\n");
            Color(8);
            printf("\t W = Arriba \t S = Abajo \t ENTER = Seleccionar\n\n");
            Color(15);
            break;
        case 5:
        	Color(12);
            printf("\n\t Que quiere hacer... \n\n");
            Color(15);
            printf("\t Operacion 1: Sumar 2 matrices\n"); 
            printf("\t Operacion 2: Restar 2 matrices\n");
            printf("\t Operacion 3: Multiplicar 2 matrices\n");
            printf("\t Operacion 4: Trasponer una matriz\n");
            Color(3);
            printf(">>>\t Operacion 5: Puntos de silla de una matriz\n");
            Color(15);
            printf("\t Operacion 6: Mostrar por pantalla una matriz\n");
            printf("\t Exit: Salir del programa \n\n");
            Color(8);
            printf("\t W = Arriba \t S = Abajo \t ENTER = Seleccionar\n\n");
            Color(15);
            break;
        case 6:
        	Color(12);
            printf("\n\t Que quiere hacer... \n\n");
            Color(15);
            printf("\t Operacion 1: Sumar 2 matrices\n"); 
            printf("\t Operacion 2: Restar 2 matrices\n");
            printf("\t Operacion 3: Multiplicar 2 matrices\n");
            printf("\t Operacion 4: Trasponer una matriz\n");
            printf("\t Operacion 5: Puntos de silla de una matriz\n");
            Color(3);
            printf(">>>\t Operacion 6: Mostrar por pantalla una matriz\n");
            Color(15);
            printf("\t Exit: Salir del programa \n\n");
            Color(8);
            printf("\t W = Arriba \t S = Abajo \t ENTER = Seleccionar\n\n");
            Color(15);
            break;
        case 7:
        	Color(12);
            printf("\n\t Que quiere hacer... \n\n");
            Color(15);
            printf("\t Operacion 1: Sumar 2 matrices\n"); 
            printf("\t Operacion 2: Restar 2 matrices\n");
            printf("\t Operacion 3: Multiplicar 2 matrices\n");
            printf("\t Operacion 4: Trasponer una matriz\n");
            printf("\t Operacion 5: Puntos de silla de una matriz\n");
            printf("\t Operacion 6: Mostrar por pantalla una matriz\n");
            Color(4);
            printf(">>>\t Exit: Salir del programa \n\n");
            Color(8);
            printf("\t W = Arriba \t S = Abajo \t ENTER = Seleccionar\n\n");
            Color(15);
            break;
        }
            
        Key = _getch();
        
        switch(Key)
        {
        case 'W':
        case 'w':
            Election--;
            if(Election < 1)
            {
                Election = 7;
            }
            break;
        case 'S':
        case 's':
            Election++;
            if(Election > 7)
            {
                Election = 1;
            }
            break;
        case 13:
            system("cls");
            return Election;
            break;
        }
        system("cls");
    }
}

void Animation_ProgressBar() {
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[0%c]\r", 177,177,177,177,177,177,177,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[10%c]\r", 178,177,177,177,177,177,177,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[30%c]\r", 178,178,178,177,177,177,177,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[40%c]\r", 178,178,178,178,177,177,177,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[60%c]\r", 178,178,178,178,178,178,177,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[70%c]\r", 178,178,178,178,178,178,178,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[100%c]\r", 178,178,178,178,178,178,178,178,178,178,37);
    usleep(700000);
}

void Explicacion_suma(){
	printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c                          Operacion 1: Suma de Matrices                                  %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c En este apartado se le dara a elegir el orden de las matrices que desea sumar, como     %c\n", 186,186);
    printf("\t%c condicion solo se pueden elegir de orden maximo 10 x 10.                                %c\n", 186,186); 
    printf("\t%c Ingresara por teclado la primera matriz, luego la segunda y se efectuara el calculo     %c\n", 186,186); 
    printf("\t%c de forma instantanea                                                                    %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n\n");
    system("pause");
}

void Explicacion_resta(){
	printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c                          Operacion 2: Restar Matrices                                   %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c En este apartado se le dara a elegir el orden de las matrices que desea restar, como    %c\n", 186,186);
    printf("\t%c condicion solo se pueden elegir de orden maximo 10 x 10.                                %c\n", 186,186); 
    printf("\t%c Ingresara por teclado la primera matriz, luego la segunda y se efectuara el calculo     %c\n", 186,186); 
    printf("\t%c de forma instantanea                                                                    %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n\n");
    system("pause");
}

void Explicacion_multiplicacion(){
	printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c                         Operacion 3: Multiplicar Matrices                               %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c En este apartado se le dara a elegir el orden de las matrices que desea multiplicar,    %c\n", 186,186);
    printf("\t%c como condicion solo se pueden elegir de orden maximo 10 x 10, y solo se permiten        %c\n", 186,186);
    printf("\t%c matrices cuadradas.                                                                     %c\n", 186,186); 
    printf("\t%c Ingresara por teclado la primera matriz, luego la segunda y se efectuara el calculo     %c\n", 186,186); 
    printf("\t%c de forma instantanea                                                                    %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n\n");
    system("pause");
}

void Explicacion_traspuesta(){
	printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c                        Operacion 4: Trasponer una matriz                                %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c En este apartado se le dara a elegir el orden de la matriz que desea trasponer,         %c\n", 186,186);
    printf("\t%c como condicion solo se pueden elegir de orden maximo 10 x 10, y solo se permiten        %c\n", 186,186);
    printf("\t%c matrices cuadradas.                                                                     %c\n", 186,186);
    printf("\t%c Ingresara por teclado la matriz y se efectuara el calculo.                              %c\n", 186,186); 
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n\n");
    system("pause");
}

void Explicacion_puntoSilla(){
	printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c                     Operacion 5: Punto de silla de una matriz                           %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c En este apartado se le dara a elegir el orden de la matriz de la cual desea ver el      %c\n", 186,186);
    printf("\t%c punto, como condicion solo se pueden elegir de orden maximo 10 x 10, y solo se          %c\n", 186,186);
    printf("\t%c permiten matrices cuadradas.                                                            %c\n", 186,186);
    printf("\t%c Ingresara por teclado la matriz y se efectuara el calculo.                              %c\n", 186,186); 
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n\n");
    system("pause");
}

void Explicacion_mostrar(){
	printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c                          Operacion 6: Mostrar una matriz                                %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c En este apartado se le dara a elegir el orden de la matriz la cual desea ver, como      %c\n", 186,186);
    printf("\t%c condicion solo se pueden elegir de orden maximo 10 x 10.                                %c\n", 186,186);
    printf("\t%c Ingresara por teclado la matriz y se mostrara por pantalla.                             %c\n", 186,186); 
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n\n");
    system("pause");
}
