#include "types.h"
#include "../utils/print.h"

using namespace std;

int main()
{
	println("-----Enteros-----");
	printAll("Int size:", sizeof(entero), "bytes");
	printAll("Unsigned Int size:", sizeof(entero_positivo), "bytes");
	printAll("Long size:", sizeof(largo), "bytes");
	printAll("Unsigned Long size:", sizeof(largo_positivo), "bytes");
	printAll("Long Long size:", sizeof(largo_xl), "bytes");
	printAll("Unsigned Long Long size:", sizeof(largo_xxl), "bytes");
	println("\n-----Flotantes------");
	printAll("Float size:", sizeof(flotante), "bytes");
	printAll("Double size:", sizeof(doble), "bytes");
	printAll("Long Double size:", sizeof(doble_xl), "bytes");
	println("\n-----Booleanos-----");
	printAll("Bool size:", sizeof(boolean), "bytes");
	println("\n-----Caracter-----");
	printAll("Char size:", sizeof(caracter), "bytes");
	println("\n-----String-----");
	printAll("String size:", sizeof(cadena_vacia), "bytes");
	println("\n-----Struct-----");
	println("Explicacion del peso en el archivo de cabecera types.h");
	printAll("Struc size:", sizeof(persona), "bytes");
	return 0;
}
