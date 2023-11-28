/*
 * estructura.h
 *
 *  Created on: 22 nov 2023
 *      Author: Manuel J
 */

#ifndef ESTRUCTURA_H_
#define ESTRUCTURA_H_
#define MAXNOMBRE 30
#define MAXAPELLIDO 30
#define MAXDIRECC 30

typedef struct {
	char Nombre[MAXNOMBRE];
	char Apellido[MAXAPELLIDO];
	int Edad;
}inforperso;

void pedirPersona(inforperso *c);
void mostrarinfo(inforperso c);

/**
 * Funcion para fraccionar
 */

typedef struct{
	int numerador;
	int denominador;
}fracciones;

void pedirfraccion(fracciones *c);
void mostrarfraccion(fracciones c);

void divi(fracciones f1, fracciones f2, fracciones *f3);

void multi(fracciones f1, fracciones f2, fracciones *f3);

typedef struct{
	char Nombre[MAXNOMBRE];
	int diana;
	int mesnac;
	int anionacimi;

}persona;

void pedirpersona(persona *c);
void mostrarpersona(persona c);

typedef struct{
	char Nombre[MAXNOMBRE];
	char direccion[MAXDIRECC];
	int telefono;
	int edad;
}personas;

void pedirpersonas(personas *c);
void mostrarpersonas(personas c);


/**
 * ejercicio 6
 */

typedef struct{
	char Nombre[MAXNOMBRE];
	float precio;
	float iva;
	int cantidad;
}carrito;

void pedirproducto(carrito *c);
void mostrarproducto(carrito c);



#endif /* ESTRUCTURA_H_ */
