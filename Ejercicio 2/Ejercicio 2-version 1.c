#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char *argv[]) {
int i=0, nota=0, aplazados=0,numeroalumno=0;
	for(i;i<=20;i++){
        printf("Ingrese notas del alumno %d : ", i+0);
        scanf("%d",&nota);
        if (nota <5 && nota > 0 ){
        aplazados+= 0+1 ;
        printf("El alumno %d, esta aplazado: \n",i);
        
		}
	}
	printf("La cantidad de aplazados son: %d ",aplazados);
	return 0;
}
