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

//Recibe dos punteros constantes a char
//Devuelve puntero a char que almacena la concatenacion
char* string_concat(const char* str1, const char* str2){
	//Declaro un puntero a char y le preparo el espacio en memoria.
	char* str = malloc(strlen(str1)+strlen(str2)+1);
	strcpy(str,str1);
	strcat(str,str2);
	return str;
}

//Recibe dos punteros constantes a char y la direccion de memoria de un puntero.
//Al finalizar, el puntero contendra la concatenacion.
void string_concat_dinamyc(const char* str1,const char* str2, char** str){
	*str = malloc(strlen(str1)+strlen(str2)+1);
	strcpy(*str,str1);
	strcat(*str,str2);
}

/*

Ejercicio1

int main(void){
	char* nombre="Carri";
	char* saludo = string_concat("Hola ",nombre);
	printf("%s",saludo);
	free(saludo);
	return EXIT_SUCCESS;
}
*/

int main(){
	char* nombre="Carri";
	char* saludo;
	string_concat_dinamyc("Hola ",nombre,&saludo);
	printf("%s",saludo);
	free(saludo);
}

