#ifndef MODELS_H
#define MODELS_H

#include <string>

using namespace std;
const int MAX_ESTADISTICOS{50};

struct Componente{
	string cadena;
	bool esCP;
};

struct Estadistico{
	string palabra;
	int apariciones;
};

struct Cola{
	Estadistico estadisticos[MAX_ESTADISTICOS];
	int front{-1};
	int end{-1};
};

bool isFull(Cola& cola){
	return (cola.end+1) % MAX_ESTADISTICOS == cola.front;
}

bool isEmpty(Cola& cola){
	return cola.front == -1;
}

void desencolar(Cola& cola){
	if(isEmpty(cola)){
		cout << "Cola vacia" << endl;
		return;
	}
	if(cola.front == cola.end){
		cola.front = cola.end = -1;
	}else{
		cola.front = (cola.front+1)%MAX_ESTADISTICOS;
	}


}
void encolar(Cola& cola, Estadistico estadistica){
	if(isFull(cola)){
		cout << "Cola llnea" << endl;
		return;
	}
	if(isEmpty(cola)){
		cola.front = cola.end = 0;
	}else{
		cola.end = (cola.end+1) % MAX_ESTADISTICOS;
	}
	cola.estadisticos[cola.end] = estadistica;
}

Estadistico pop(Cola& cola){
	if(isEmpty(cola)){
		cout << "Cola vacia" << endl;
	}
	return cola.estadisticos[cola.front];
}

#endif