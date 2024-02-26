#ifndef MODELS_H
#define MODELS_H

#include <string>

using namespace std;

const int TOPE_TEXTO{10}; //suponiendo textos no mayores a 10
const int TOPE_ORACIONES{100}; //con un texto con maximo 100 oraciones

struct Oracion{
	int ordinal;
	string contenido;
};

struct Texto{
	Oracion oraciones[TOPE_ORACIONES];
};

struct Pila{
	Texto texto[TOPE_TEXTO];
	int tope{-1};
};

Texto pop(Pila& pila){
	if(pila.tope > -1){
		pila.tope--;
		return pila.texto[pila.tope+1];
	}
}

void push(Pila& pila, Texto texto){
	if(pila.tope < TOPE_TEXTO)
		pila.texto[++pila.tope] = texto;
}

#endif