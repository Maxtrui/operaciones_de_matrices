/*--------------------------------------------------------------------------------------------------------| 
|                                                                                                         |
|  Authors :   Maxtrui 	                                                                                  |
|  Date    :   7th September 2023                                                                         |
|                                                                                                         |
|--------------------------------------------------------------------------------------------------------*/

void Sumar_matrices(){
	// pedir el orden de la matriz
	int fila, columna;
	int m1[M][N], m2 [M][N], m3[M][N];
	
	for(int i=1; i <= 10; i++){
		for(int j=1; j <= 10; j++){
			m1[i][j] = 0;
			m2[i][j] = 0;
			m3[i][j] = 0;
		}
	}
	
	do{
		system("cls");
		printf("Para la matriz de orden M x N, escoja un valor para M (como maximo es posible el 10):\n");
		Color(4);
		scanf("%d", &fila);
		Color(15);
		printf("\nPara la matriz de orden %d x N, escoja un valor para N (como maximo es posible el 10):\n", fila);
		Color(4);
		scanf("%d", &columna);
		Color(2);
		printf("\nSu matriz es de orden %d x %d", fila, columna);
		printf("\n\n");
		Color(15);
		system("pause");
	}while(fila < 1 || fila > 10 || columna < 1 || columna > 10);
	
	// pedir los valores de la matriz 1
	system("cls");
	Color(13);
	printf("\t\tPARA LA MATRIZ 1 DE ORDEN %d x %d\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("\nDame el valor para la matriz 1 en la posicion[%d][%d]: ", i, j);
			Color(4);
			scanf("%d", &m1[i][j]);
			Color(15);
		}
	}
	
	// pedir los valores de la matriz 2
	system("cls");
	Color(13);
	printf("\t\tPARA LA MATRIZ 2 DE ORDEN %d x %d\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("\nDame el valor para la matriz 2 en la posicion[%d][%d]: ", i, j);
			Color(4);
			scanf("%d", &m2[i][j]);
			Color(15);
		}
	}
	
	// mostrar las 2 matrices
	system("cls");
	Color(13);
	printf("\t\tLA MATRIZ 1 DE ORDEN %d x %d ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	Color(13);
	printf("\n\n\t\tLA MATRIZ 2 DE ORDEN %d x %d ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m2[i][j]);
		}
		printf("\n");
	}
	
	//Suma de las matrices
	Color(2);
	printf("\n\n\t\tLA SUMA DE LAS MATRICES ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			m3[i][j] = m1[i][j] + m2[i][j];
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
}

void Restar_matrices(){
	// pedir el orden de la matriz
	int fila, columna;
	int m1[M][N], m2 [M][N], m3[M][N];
	
	for(int i=1; i <= 10; i++){
		for(int j=1; j <= 10; j++){
			m1[i][j] = 0;
			m2[i][j] = 0;
			m3[i][j] = 0;
		}
	}
	
	do{
		system("cls");
		printf("Para la matriz de orden M x N, escoja un valor para M (como maximo es posible el 10):\n");
		Color(4);
		scanf("%d", &fila);
		Color(15);
		printf("\nPara la matriz de orden %d x N, escoja un valor para N (como maximo es posible el 10):\n", fila);
		Color(4);
		scanf("%d", &columna);
		Color(2);
		printf("\nSu matriz es de orden %d x %d", fila, columna);
		printf("\n\n");
		Color(15);
		system("pause");
	}while(fila < 1 || fila > 10 || columna < 1 || columna > 10);
	
	// pedir los valores de la matriz 1
	system("cls");
	Color(13);
	printf("\t\tPARA LA MATRIZ 1 DE ORDEN %d x %d\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("\nDame el valor para la matriz 1 en la posicion[%d][%d]: ", i, j);
			Color(4);
			scanf("%d", &m1[i][j]);
			Color(15);
		}
	}
	
	// pedir los valores de la matriz 2
	system("cls");
	Color(13);
	printf("\t\tPARA LA MATRIZ 2 DE ORDEN %d x %d\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("\nDame el valor para la matriz 2 en la posicion[%d][%d]: ", i, j);
			Color(4);
			scanf("%d", &m2[i][j]);
			Color(15);
		}
	}
	
	// mostrar las 2 matrices
	system("cls");
	Color(13);
	printf("\t\tLA MATRIZ 1 DE ORDEN %d x %d ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	Color(13);
	printf("\n\n\t\tLA MATRIZ 2 DE ORDEN %d x %d ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m2[i][j]);
		}
		printf("\n");
	}
	
	//Resta de las matrices
	Color(2);
	printf("\n\n\t\tLA RESTA DE LAS MATRICES ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			m3[i][j] = m1[i][j] - m2[i][j];
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
}

void Multiplicar_matrices(){
	// pedir el orden de la matriz
	int fila, columna;
	int m1[M][N], m2 [M][N], m3[M][N];
	
	for(int i=1; i <= 10; i++){
		for(int j=1; j <= 10; j++){
			m1[i][j] = 0;
			m2[i][j] = 0;
			m3[i][j] = 0;
		}
	}
	
	do{
		system("cls");
		printf("Para la matriz de orden M x N, escoja un valor para M y N (como maximo es posible el 10):\n");
		Color(4);
		scanf("%d", &fila);
		columna = fila;
		Color(2);
		printf("\nSu matriz es de orden %d x %d", fila, columna);
		printf("\n\n");
		Color(15);
		system("pause");
	}while(fila < 1 || fila > 10 || columna < 1 || columna > 10);
	
	// pedir los valores de la matriz 1
	system("cls");
	Color(13);
	printf("\t\tPARA LA MATRIZ 1 DE ORDEN %d x %d\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("\nDame el valor para la matriz 1 en la posicion[%d][%d]: ", i, j);
			Color(4);
			scanf("%d", &m1[i][j]);
			Color(15);
		}
	}
	
	// pedir los valores de la matriz 2
	system("cls");
	Color(13);
	printf("\t\tPARA LA MATRIZ 2 DE ORDEN %d x %d\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("\nDame el valor para la matriz 2 en la posicion[%d][%d]: ", i, j);
			Color(4);
			scanf("%d", &m2[i][j]);
			Color(15);
		}
	}
	
	// mostrar las 2 matrices
	system("cls");
	Color(13);
	printf("\t\tLA MATRIZ 1 DE ORDEN %d x %d ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	Color(13);
	printf("\n\n\t\tLA MATRIZ 2 DE ORDEN %d x %d ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m2[i][j]);
		}
		printf("\n");
	}
	
	//Multiplicar las matrices
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			m3[i][j] = 0;
		}
		printf("\n");
	}
	
	Color(2);
	printf("\n\n\t\tLA MULTIPLICACION DE LAS MATRICES ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			for(int k=1; k <= columna; k++){
				m3[i][j] += m1[i][k] * m2[k][j];
			}
		}
		printf("\n");
	}
	
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n\n");
	system("pause");
}

void Traspuesta_matriz(){
	// pedir el orden de la matriz
	int fila, columna;
	int m1[M][N], m2 [M][N], m3[M][N];
	
	for(int i=1; i <= 10; i++){
		for(int j=1; j <= 10; j++){
			m1[i][j] = 0;
			m2[i][j] = 0;
			m3[i][j] = 0;
		}
	}
	
	do{
		system("cls");
		printf("Para la matriz de orden M x N, escoja un valor para M y N (como maximo es posible el 10):\n");
		Color(4);
		scanf("%d", &fila);
		columna = fila;
		Color(2);
		printf("\nSu matriz es de orden %d x %d", fila, columna);
		printf("\n\n");
		Color(15);
		system("pause");
	}while(fila < 1 || fila > 10 || columna < 1 || columna > 10);
	
	// pedir los valores de la matriz 1
	system("cls");
	Color(13);
	printf("\t\tPARA LA MATRIZ DE ORDEN %d x %d\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("\nDame el valor para la matriz original en la posicion[%d][%d]: ", i, j);
			Color(4);
			scanf("%d", &m1[i][j]);
			Color(15);
		}
	}
	
	// mostrar la matriz
	system("cls");
	Color(13);
	printf("\t\tLA MATRIZ ORIGINAL DE ORDEN %d x %d ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	
	
	//traspuesta de la matriz
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			m3[i][j] = 0;
		}
		printf("\n");
	}
	
	Color(2);
	printf("\n\n\t\tLA TRASPUESTA DE LA MATRIZ ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			m3[j][i] = m1[i][j];
		}
		printf("\n");
	}
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
}

void PuntodeSilla_matriz(){
	// pedir el orden de la matriz
	int fila, columna, aux1, aux2, aux3;
	int m1[M][N], m2 [M][N], m3[M][N];
	
	for(int i=1; i <= 10; i++){
		for(int j=1; j <= 10; j++){
			m1[i][j] = 0;
			m2[i][j] = 0;
			m3[i][j] = 0;
		}
	}
	
	do{
		system("cls");
		printf("Para la matriz de orden M x N, escoja un valor para M y N (como maximo es posible el 10):\n");
		Color(4);
		scanf("%d", &fila);
		columna = fila;
		Color(2);
		printf("\nSu matriz es de orden %d x %d", fila, columna);
		printf("\n\n");
		Color(15);
		system("pause");
	}while(fila < 1 || fila > 10 || columna < 1 || columna > 10);
	
	// pedir los valores de la matriz 1
	system("cls");
	Color(13);
	printf("\t\tPARA LA MATRIZ DE ORDEN %d x %d\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("\nDame el valor para la matriz en la posicion[%d][%d]: ", i, j);
			Color(4);
			scanf("%d", &m1[i][j]);
			Color(15);
		}
	}
	
	// mostrar la matriz
	system("cls");
	Color(13);
	printf("\t\tLA MATRIZ DE ORDEN %d x %d ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	
	
	//Punto de silla de la matriz
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			m2[i][j] = 0;
			m3[i][j] = 0;
		}
		printf("\n");
	}
	int flag = 0;
	Color(2);
	printf("\n\n\t\tEl PUNTO DE SILLA DE LA MATRIZ ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			int min_fila = m1[i][j];
            int max_columna = m1[i][j];
            for(int k=1; k <= columna; k++){
            	if (m1[i][k] < min_fila) {
                    min_fila = m1[i][k];
                }
			}
			for (int k=1; k <= fila; k++) {
                if (m1[k][j] > max_columna) {
                    max_columna = m1[k][j];
                }
            }
			if (min_fila == max_columna){

				aux1 = i;
				aux2 = j;
				aux3 = min_fila;
            	flag = 1;
			}
		}
	}
	
	if(flag = 1){
		printf("El punto de silla esta en [%d][%d] y es: %d", aux1, aux2, aux3);
	}
	
	if(flag = 0){
		printf("No hay punto de silla");
	}
	printf("\n\n");
	system("pause");
}

void Mostrar_matriz(){
	// pedir el orden de la matriz
	int fila, columna;
	int m1[M][N], m2 [M][N], m3[M][N];
	
	for(int i=1; i <= 10; i++){
		for(int j=1; j <= 10; j++){
			m1[i][j] = 0;
			m2[i][j] = 0;
			m3[i][j] = 0;
		}
	}
	
	do{
		system("cls");
		printf("Para la matriz de orden M x N, escoja un valor para M (como maximo es posible el 10):\n");
		Color(4);
		scanf("%d", &fila);
		Color(15);
		printf("\nPara la matriz de orden %d x N, escoja un valor para N (como maximo es posible el 10):\n", fila);
		Color(4);
		scanf("%d", &columna);
		Color(2);
		printf("\nSu matriz es de orden %d x %d", fila, columna);
		printf("\n\n");
		Color(15);
		system("pause");
	}while(fila < 1 || fila > 10 || columna < 1 || columna > 10);
	
	// pedir los valores de la matriz 1
	system("cls");
	Color(13);
	printf("\t\tPARA LA MATRIZ DE ORDEN %d x %d\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("\nDame el valor para la matriz en la posicion[%d][%d]: ", i, j);
			Color(4);
			scanf("%d", &m1[i][j]);
			Color(15);
		}
	}
	
	// mostrar la matriz
	system("cls");
	Color(2);
	printf("\t\tLA MATRIZ DE ORDEN %d x %d ES:\n\n", fila, columna);
	Color(15);
	for(int i=1; i <= fila; i++){
		for(int j=1; j <= columna; j++){
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	Color(15);
	printf("\n\n");
	system("pause");
}
