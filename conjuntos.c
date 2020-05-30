#include "conjuntos.h"
#include <stdio.h>
#include <stdlib.h>

/// Incluir aqui el código de las funciones solicitadas para el TAD Conjunto Disjunto
/// en la representación mediante ÁRBOLES añadiendo la mejora de unión por TAMAÑO. 
/// .........................................................................
// 1. Las tres básicas
void crea(particion P) {

	int i;

	for(i = 0; i < MAXIMO; i++) 
		P[i] = -1;
	

} //End of crea()

tipoConjunto buscar(tipoElemento x, particion P) {

	tipoConjunto aux;

	if (P[x] < 0)	// Si el elemento ya es raiz.
		return x;

	else {

		aux = x;

		while (P[aux] >= 0) // Si no es raiz recorremos el arbol
			aux = P[aux];
		
		return aux;
	}

} //End of buscar()

void unir(tipoConjunto x, tipoConjunto y, particion P) {

	if (P[x] >= 0 || P[y] >= 0) {

		printf("Error: No se han pasado raices");
		system ("pause");

	}
	else {

		if((P[x]) < (P[y])) {

			P[y] = P[y] + P[x];	
			P[x] = y;

		}
		else {

			P[x] = P[x] + P[y];	
			P[y] = x;
		}
	}

} //End of unir()

// 2. Implementación con control de representantes: Si x e y son los representantes de sus clases de equivalencia las unen y devuelven VERDADERO, en otro caso no hace nada y devuelve FALSO
int unir1(tipoConjunto x, tipoConjunto y, particion P) {

	if (P[x] >= 0 || P[y] >= 0) {

		printf("Error: UNIR1");
		return 0;

	}
	else {

		if ((P[x]) < (P[y])) {

			P[y] = P[y] + P[x];	
			P[x] = y;

		}
		else {

			P[x] = P[x] + P[y];	
			P[y] = x;
		}
		return 1;
	}

} //End of unir1()

// 3. Versión de buscar con Compresión de Caminos
tipoConjunto buscarCC(tipoElemento x, particion P) {

	if (P[x] <= 0) 
		return x;

	else {

		P[x] = buscar(P[x],P);
		return P[x];

	}

} //End of buscarCC() 

//
// Función auxiliar para ver contenido de Partición 
//
void verParticion(particion P) {
	 
	int i;
	
    printf("\n");
    
    for (i =0;i<MAXIMO;i++) 
		printf("|%3d",P[i]);
		
    printf("| contenido  vector\n");
    
    for (i =0;i<MAXIMO;i++) 
		printf("----");
		
    printf("\n");
    
    for (i =0;i<MAXIMO;i++) 
		printf(" %3d",i);
		
    printf("  índices vector\n\n");
}
