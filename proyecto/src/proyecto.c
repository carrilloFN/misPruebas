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

//Recibe un puntero a char con el mail completo, y la direccion de memoria de dos punteros donde se guardará
// el usuario y el dominio del mail.
void mail_split(const char* mail, char** user, char** dominio){
	char* correoParticionado = malloc(strlen(mail)+1);
	strcpy(correoParticionado,mail);
	strtok(correoParticionado,"@");
	*user = malloc(strlen(correoParticionado)+1);
	*dominio = malloc(strlen(mail)-strlen(correoParticionado));
	strcpy(*user,correoParticionado);
	strcpy(*dominio,strtok(NULL,"@"));
	free(correoParticionado);
	//printf("Correo Part: %s\n\n",correoParticionado);
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

/*

Ejercicio2

int main(void){
	char* nombre="Carri";
	char* saludo;
	string_concat_dinamyc("Hola ",nombre,&saludo);
	printf("%s",saludo);
	free(saludo);
}
*/

int main(void){
	char* mail = "franco.carrillo@utn.edu.com.ar";
	char* user;
	char* dominio;
	mail_split(mail,&user,&dominio);
	printf("User: %s\n",user);
	printf("Domain: %s\n",dominio);
	free(user);
	free(dominio);
}
