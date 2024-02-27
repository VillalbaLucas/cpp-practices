#include <iostream>

#include "models.h"

using namespace std;


int main(){
	const int MAX_COMPONENT{50};
	Componente parrafo[MAX_COMPONENT];
	Estadistico estadistico;
	Cola cola;

	cout << isEmpty(cola) << endl;
	encolar(cola, estadistico);
	cout << isEmpty(cola) << endl;

	return 0;
}
