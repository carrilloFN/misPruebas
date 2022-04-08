/*
 ============================================================================
 Name        : proyecto.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* string_concat(const char* cad1, const char* cad2){
	char* cadena = malloc(strlen(cad1)+strlen(cad2)+1);
	strcpy(cadena,cad1);
	strcat(cadena,cad2);
	return cadena;
}

int main(void) {
	char* nombre="Carri";
	char* saludo = string_concat("Hola ",nombre);
	printf("%s",saludo);
	free(saludo);
	return EXIT_SUCCESS;
}


