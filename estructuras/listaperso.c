/*
 * listaperso.c
 *
 *  Created on: 27 nov 2023
 *      Author: Manuel J
 */

#include "listaperso.h"
#include <string.h>

int insertarPersona(persona lista[MAXPERSONA], int tam, persona p) {
	if (tam >=MAXPERSONA) {
		return tam;
	}

	lista[tam]=p;
	tam++;
	return tam;
}

void mostarcumplenareos(persona lista[MAXPERSONA], int tam, int mes){
	int i;

	for(i=0;i<tam;i++){
		if(mes==lista[i].mesnac) {
			mostrarpersona(lista[i]);
		}
	}
}

/**
 * ejercicio 6
 */

int listaspersonas(personas lista[MAXPERSONA2], int tam, personas p){
	if (tam >=MAXPERSONA2) {
			return tam;
		}

		lista[tam]=p;
		tam++;
		return tam;
}

void mostrarLista(personas lista[MAXPERSONA2], int tam){
    	  int i;

    	  for (i=0;i<tam;i++) {
    		  mostrarpersonas(lista[i]);
    	  }
      }

void mostarciertaedad(personas lista[MAXPERSONA2], int tam, int edad){
	int i;

  for (i=0;i<tam;i++) {
	  if (lista[i].edad >=edad-5 && lista[i].edad<=edad+5) {
	  mostrarpersonas(lista[i]);
	  }
  }

}

void mostrarinical(personas lista[MAXPERSONA2], int tam, char inicial){
	int i;
	for(i=0;i<tam;i++){
		if(lista[i].Nombre[0]==inicial){
		mostrarpersonas(lista[i]);
		}
	}
}



int insertarpersonas(personas lista[MAXPERSONA2], int tam, personas p) {
	if (tam >=MAXPERSONA2) {
			return tam;
		}

		lista[tam]=p;
		tam++;
		return tam;
}


/**
 * ejercicio6
 */







