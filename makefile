# Tarea 1
prueba:prueba.c conjuntos.o  
	gcc -g prueba.c conjuntos.o -o prueba
prueba2:prueba2.c conjuntos.o  
	gcc -g prueba2.c conjuntos.o -o prueba2
conjuntos.o: conjuntos.c conjuntos.h
	gcc -c -g conjuntos.c 

