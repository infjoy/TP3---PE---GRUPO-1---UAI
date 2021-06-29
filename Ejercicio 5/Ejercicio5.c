#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor, i=0,cond1=0, cond2=0,cond3=0,cond4=0;
	int sumador1=0,sumador2=0,sumador3=0,sumador4=0;
	for(i=0;i<7;i++){
		printf("Ingrese un valor: ");
		scanf("%d",&valor);
		
		//cuantos mayores a 1
		if(valor <=0 ){
			
		}
		else
		{
			if(valor <=10){
				cond1++;
			}
			else{
				if (valor<=20){
					cond2++;
				}
				else{
					if(valor<=30){
						cond3++;
					}
					else{
						cond4++;
					}
				}
				
				
			}
		}
		
	}
	int total=cond1+cond2+cond3+cond4;
	printf("Entre 1 y 10: %d\n", (cond1*100)/total);
	printf("Entre 11 y 20: %d\n",(cond2*100)/total);
	printf("Entre 21 y 30: %d\n", (cond3*100)/total);
	printf("Mayores a 30: %d\n", (cond4*100)/total);
	return 0;
}
