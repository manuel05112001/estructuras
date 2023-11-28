/*
 * estructura.c
 *
 *  Created on: 22 nov 2023
 *      Author: Manuel J
 */

#include "estructura.h"
#include <stdio.h>
#include <string.h>

void pedirPersona(inforperso *c){
	puts("Introduce el nombre: ");
	fflush(stdout);
	//scanf("%s", c->Nombre);
	gets(c->Nombre);

	puts("Introduce el apellido: ");
	fflush(stdout);
	//scanf("%s", c->Apellido);
	fgets(c->Apellido, MAXAPELLIDO,stdin);
	c->Apellido[strlen(c->Apellido)-1]='\0';

	puts("Introduce la edad: ");
	fflush(stdout);
	scanf("%d", &(c->Edad));
}


void mostrarinfo(inforperso c) {
	printf("Nombre: %s\n", c.Nombre);
	printf("Apellido: %s\n", c.Apellido);
	printf("Edad: %d\n", c.Edad);
}

void pedirfraccion(fracciones *c){
	puts("Introduce la fraccion num/deno: ");
	fflush(stdout);
	scanf("%d/%d", &(c->numerador),&(c->denominador));
}

void mostrarfraccion(fracciones c){
//	printf("Numerador: %d\n", c.numerador);
//	printf("Denominador: %d\n", c.denominador);
	printf("%d/%d ",c.numerador,c.denominador);

}

void divi(fracciones f1, fracciones f2, fracciones *f3){
	f3->numerador=f1.numerador*f2.denominador;
	f3->denominador=f1.denominador*f2.numerador;
}

void multi(fracciones f1, fracciones f2, fracciones *f3){
	f3->numerador=f1.numerador*f2.numerador;
	f3->denominador=f1.denominador*f2.denominador;
}


void pedirpersona(persona *c){
	puts("Introduce el nombre: ");
	fflush(stdout);
	scanf("%s", c->Nombre);

	puts("Introduce dia de nacimiento: ");
	fflush(stdout);
	scanf("%d", &(c->diana));

	puts("Introduce numero del mes: ");
	fflush(stdout);
	scanf("%d", &(c->mesnac));

	puts("Introduce el año de nacimiento: ");
	fflush(stdout);
	scanf("%d", &(c->anionacimi));
}

void mostrarpersona(persona c){
	printf("nombre: %s, Dia de nacimiento: %d, numero del mes: %d, año de nacimiento: %d", c.Nombre,c.diana,c.mesnac,c.anionacimi);
}


void pedirpersonas(personas *c){
	puts("Introduce el nombre: \n ");
	fflush(stdout);
	fflush(stdin);
	fgets(c->Nombre, MAXNOMBRE, stdin);
	c->Nombre[strlen(c->Nombre)-1]='\0';
	if (strlen(c->Nombre)==0) {
				return;
	}


	puts("Introduce una dirección: \n ");
	fflush(stdout);
	// scanf("%s", c->direccion);
	fgets(c->direccion, MAXDIRECC,stdin);
	c->direccion[strlen(c->direccion)-1]='\0';

	puts("Introduce el telefono: \n ");
	fflush(stdout);
	scanf("%d", &(c->telefono));

	puts("Introduce la edad: \n ");
	fflush(stdout);
	scanf("%d", &(c->edad));
}


void mostrarpersonas(personas c){
	printf("nombre: %s \n, dirección: %s \n, telefono: %d \n, edad: %d \n", c.Nombre,c.direccion,c.telefono,c.edad);
}


/**
 * ejercicio 6
 */

void pedirproducto(carrito *c){
	puts("Introduce el Nombre del producto: ");
	fflush(stdout);
	scanf("%s", c->Nombre);



	puts("Introduce la cantidad: ");
	fflush(stdout);
	scanf("%d", &(c->cantidad));
}

void mostrarproducto(carrito c){
	printf("Nombre: %s \n");
	printf("precio: %f \n");
	printf("Iva: %f \n");
	printf("Cantidad: %d \n");


}


