#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float i=0;
	float numero=0;
	float sumador=0;
	float promedio=0;
	for(i;i<5;i++){
		printf("Ingrese un valor:\n");
		scanf("%f",&numero);
		sumador+=numero;
	}
	promedio=(sumador/i);
	printf("El promedio es: %0.2f \n",promedio);
	return 0;
}
