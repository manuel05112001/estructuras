/*
 * listaperso.h
 *
 *  Created on: 27 nov 2023
 *      Author: Manuel J
 */

#ifndef LISTAPERSO_H_
#define LISTAPERSO_H_

#define MAXPERSONA 3
#define MAXPERSONA2 50

#include "estructura.h"

   int insertarPersona(persona lista[MAXPERSONA], int tam, persona p);

   void mostarcumplenareos(persona lista[MAXPERSONA], int tam, int mes);

   /**
    * EJERCICIO 6
    */
   int listaspersonas(personas lista[MAXPERSONA2], int tam, personas p);

   void mostrarLista(personas lista[MAXPERSONA2], int tam);

   void mostarciertaedad(personas lista[MAXPERSONA2], int tam, int edad);

   void mostrarinical(personas lista[MAXPERSONA2], int tam, char inicial);

   int insertarpersonas(personas lista[MAXPERSONA2], int tam, personas p);



#endif /* LISTAPERSO_H_ */
