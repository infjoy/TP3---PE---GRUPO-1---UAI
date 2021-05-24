#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char *argv[]) {
	int notas[11];
	int alumno=0;
	int aplazados=0;
	for (alumno;alumno <10; alumno++){
		printf("Ingrese la nota del alumno %d: ",1+alumno);
		scanf("%d", &notas[alumno]);
		 if (notas[alumno] < 5){
        aplazados=aplazados+1 ;
    	}
	}
	for (alumno;alumno > -1; alumno--){	
		if (notas[alumno] < 5 ){
			printf("El alumno %d esta aplazado. \n ",1+alumno);
 		}
	}
	printf("La cantidad de aplazados son: %d ",aplazados);
}
