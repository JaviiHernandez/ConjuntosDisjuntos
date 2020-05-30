#ifndef __CONJUNTOS_A_H
#define __CONJUNTOS_A_H

#define MAXIMO 16

typedef int particion[MAXIMO];
typedef int tipoConjunto;
typedef int tipoElemento;

// Funciones a implementar

// 1. Las tres básicas
void crea(particion P);
tipoConjunto buscar(tipoElemento x, particion P);
void unir(tipoConjunto x, tipoConjunto y, particion P);

// 2. Implementación con control de representantes: Si x e y son los representantes de sus clases de equivalencia las unen y devuelven VERDADERO, en otro caso no hace nada y devuelve FALSO
int unir1(tipoConjunto x, tipoConjunto y, particion P);

// 3. Versión de buscar con Compresión de Caminos
tipoConjunto buscarCC(tipoElemento x, particion P);

// Función proporcionada
void verParticion(particion P);

#endif

