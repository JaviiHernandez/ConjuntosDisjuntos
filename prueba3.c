#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "conjuntos.h"


/*conjunto U={0, 1, 2, …, 15} establezca las siguientes relaciones de equivalencia,
haciendo al primer elemento del conjunto su representante:  {5,1,7,8,9,13},{11,3,4,14,15},{2,6,12,10,0}*/

int main(){
    setlocale(LC_ALL, "spanish");
	particion P;
  	int i;


    crea(P);
    printf("Situación INICIAL: ");
    verParticion(P);

    //{5,1,7,8,9,13}
    if (unir1(9,13,P) && unir1(8,9,P) && unir1(7,8,P) && unir1(1,7,P) && unir1(5,1,P)){
       printf( "Formada clase de equivalencia {5,1,7,8,9,13}\n"); 
    }
    else{
    	printf(" No puede formase la clase de equivalencia {5,1,7,8,9,13}\n");
    }

    //{11,3,4,14,15}
    if (unir1(14,15,P) && unir1(4,14,P) && unir1(3,4,P) && unir1(11,3,P)){
       printf( "Formada clase de equivalencia {11,3,4,14,15}\n"); 
    }
    else{
    	printf(" No puede formase la clase de equivalencia {11,3,4,14,15}\n");
    }
    
    //{2,6,12,10,0}
    if (unir1(10,0,P) && unir1(12,10,P) && unir1(6,12,P) && unir1(2,6,P)){
       printf( "Formada clase de equivalencia {2,6,12,10,0}\n"); 
    }
    else{
    	printf(" No puede formase la clase de equivalencia {2,6,12,10,0}\n");
    }
    printf("\n");

    printf("Situación Final: ");
    verParticion(P);


    printf("\n\nEl elemento 5 pertenence a la clase de equivalencia con representante %d\n",buscar(5,P));
}