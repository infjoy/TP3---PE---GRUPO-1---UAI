#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor=0;
	int i=1;
	int sum=0;
	int positivo=0;
	int negativos=0;
	int ceros=0;
	int sum2=0;
	int sum3=0;
	for (i;i <= 8; i++ ){
		printf("Ingrese valor %d: \n", i);
		scanf("%d", &valor);
		if(valor > 0) {
			sum+= positivo+1;
		}	
		if (valor < 0){
			sum2+= negativos+1;
		}
		if (valor == 0){
			sum3+= ceros+1;
		}
	}
	
	printf("Los valores positivos son %d\n",sum);	
	printf("Los valores negativos son %d\n",sum2);
	printf("Los valores negativos son %d\n",sum3);

	return 0;
}
