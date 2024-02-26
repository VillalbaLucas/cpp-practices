#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <cmath>

Texto generarTextoOriginal(Pila &pila, int tl);
int oracionesCortas(Pila &pila, int n, int tl);
void imprimirTexto(Texto &texto, int tl);

void bubbleSort(Oracion oraciones[], int tl);
void swap(Oracion &a, Oracion &b);

/*
	Es de complejidad log(n) ya que con 100 oraciones esta funcion solo tomara los 2 a la k indices por lo
	que funcionara para solo 10 indices de estas oraciones
*/
void imprimirTexto(Texto &texto, int tl){
	int i{0},index = pow(2, i);

	while (index < tl){
		cout << "index: " << index << " texto: " << texto.oraciones[index].contenido << endl;
		i++;
		index = pow(2, i);
	}
}

int oracionesCortas(Pila &pila, int n, int tl){
	int count{0};
	Texto texto = pop(pila);

	for (int i = 0; i < tl; i++){
		if (texto.oraciones[i].contenido.size() < n)
			count++;
	}
	return count;
}

Texto generarTextoOriginal(Pila &pila, int tl){
	Texto texto_pila = pop(pila);
	bubbleSort(texto_pila.oraciones, tl);
	return texto_pila;
}
void bubbleSort(Oracion oraciones[], int tl){

	while (tl > 0){
		for (int i = 0; i < tl - 1; i++){
			if (oraciones[i].ordinal > oraciones[i + 1].ordinal)
				swap(oraciones[i], oraciones[i + 1]);
		}
		tl--;
	}
}
// si no se pasa por refrencia las oraciones no se intercambiam
void swap(Oracion &a, Oracion &b){
	Oracion aux = a;
	a = b;
	b = aux;
}
//Funcion para imprimir las oraciones en main
void print_texto(const Texto& texto, int tl_oraciones){
	for (int i = 0; i < tl_oraciones; i++)
	 	cout << texto.oraciones[i].ordinal <<": "<<texto.oraciones[i].contenido << endl; 
}

#endif