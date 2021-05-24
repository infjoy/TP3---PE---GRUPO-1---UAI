#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0,valor=0,acum=0,contI=0,contP=0,cont15;
	float prom=0,promP=0,promI=0,acumP=0,acumI=0;
	//ENTRADA
	for (i;i<=7;i++){
		printf("Ingrese el valor %d:", i);
		scanf("%d", &valor);
		//PROCESO
		if(valor>15){
			cont15++;
		}
		acum+=valor;
		if(valor%2==0){
			acumP+=valor;
			contP++;
		}else{
			acumI+=valor;
			contI++;
		}
	}
	float contP1=(float)contP;
	float contI1=(float)contI;
	float acum1=(float)acum;
	prom=acum1/8;
	promP=acumP/contP1;
	promI=acumI/contI1;
	//SALIDA
	printf("El promedio general es: %0.2f\n" , prom);
	printf("El promedio de los valores pares es:%0.2f\n", promP);
	printf("El promedio de los valores impares es:%0.2f\n", promI);
	printf("La cantidad de valores mayores a 15 es:%d", cont15);
	
	return 0;
}
