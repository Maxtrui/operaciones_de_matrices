/*--------------------------------------------------------------------------------------------------------| 
|                                                                                                         |
|  Authors :   Maxtrui 	                                                                                  |
|  Date    :   7th September 2023                                                                         |
|                                                                                                         |
|--------------------------------------------------------------------------------------------------------*/

/*---------------------------------------- includes headers ---------------------------------------------*/
#include "Funciones.h"
#include "Operaciones.h"
/*-------------------------------------------------------------------------------------------------------*/

int main(){
	int Puntero = 0;
    Presentacion();
	while(1)
    {
    	system("cls");
        Puntero = Menu_matrices();

    	switch(Puntero)
        {
            case 1:
                system("cls");
                Explicacion_suma();
                Sumar_matrices();
                break;
            case 2:
                system("cls");
                Explicacion_resta();
                Restar_matrices();
                break;
            case 3:
                system("cls");
                Explicacion_multiplicacion();
                Multiplicar_matrices();
                break;
            case 4:
            	system("cls");
            	Explicacion_traspuesta();
            	Traspuesta_matriz();
            	break;
            case 5:
            	system("cls");
            	Explicacion_puntoSilla();
            	PuntodeSilla_matriz();
            	break;
            case 6:
            	system("cls");
            	Explicacion_mostrar();
            	Mostrar_matriz();
            	break;
            default:
                system("cls");
                exit(-1);
	    }
	}
}
