#include <iostream>
#include <cmath>

#include "models.h"
#include "functions.h"

using namespace std;

int main(){

	Pila pila;
	Texto texto_bienvenida, texto_ordenamiento;

	int tl_oraciones{3};
	Oracion oraciones[TOPE_ORACIONES];
	oraciones[0] = {7, "paradigmas"};
	oraciones[1] = {2, "Bienvenidos"};
	oraciones[2] = {4, "a la materia"};

	for (size_t i = 0; i < tl_oraciones; i++)
		texto_bienvenida.oraciones[i] = oraciones[i];

	texto_ordenamiento = {texto_bienvenida};
	texto_ordenamiento.oraciones[0].contenido = "1- Metodo burbuja ";
	texto_ordenamiento.oraciones[1].contenido = "--Metodos de ordenamiento--";
	texto_ordenamiento.oraciones[2].contenido = "Algunos metodos para ordenar arrays";

	push(pila, texto_ordenamiento); // texto[0]
	push(pila, texto_bienvenida);	// texto[1]

	cout << "--------C)Ordenamiento segun ordinal--------" << endl;
	cout << "Texto en la pila:" << endl;
	print_texto(pila.texto[1], tl_oraciones);
	//   texto_bienvenida              texto_bienvenida       3
	Texto texto_ordenado = generarTextoOriginal(pila, tl_oraciones);
	cout << "Texto ordenado:" << endl;
	print_texto(texto_ordenado, tl_oraciones);

	cout << "--------D)Oraciones mas cortas que N--------" << endl;
	//  						texto_ordenamiento	N     3
	cout << "Oraciones: " << oracionesCortas(pila, 20, tl_oraciones) << endl;

	cout << "--------E)Imprimir texto en 2 a la k " << endl;
	imprimirTexto(texto_bienvenida, tl_oraciones);
	return 0;
}

