#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int NumeroPatente=0;
	int valormulta=0;
	int cantidadmultas=0;
	int totalmultas=0;
	int mayores40=0;
	int porcentajemayores40;
	for(cantidadmultas;cantidadmultas<50;cantidadmultas++){
		printf("Ingrese el numero de patente:\n");
		scanf("%d",&NumeroPatente);
		printf("Ingrese el valor de la multa:\n");
		scanf("%d",&valormulta);
		totalmultas+=valormulta;
		if(valormulta>40){
			mayores40+=valormulta;
		}
	}
	porcentajemayores40=((mayores40*100)/totalmultas);
	printf("El total de las multas es: %d.\n", totalmultas);
	printf("El porcentaje que representa las multas mayores a 40$ dentro del total de las multas es de: %d.\n",porcentajemayores40);
	return 0;
}
