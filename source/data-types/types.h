#ifndef TYPES_H
#define TYPES_H

#include <string>
// Tipos de datos enteros:

short corto{};
unsigned short conrto_positivo{};

int entero{};
unsigned int entero_positivo{};

long largo{};
unsigned long largo_positivo{};
long long largo_xl{};
unsigned long long largo_xxl{};

// Tipos de datos flotantes:

// precision simple
float flotante{};
// mayor precision que float
double doble{};
long double doble_xl{};

// Tipo boolean
bool boolean{};

// Tipo caracter
char caracter{};

// Tipo cadena

std::string cadena("cadena");
std::string cadena_vacia;

/*Structs
este tipo de dato rellena la memoria con un multiplo
del tipo de dato mas grande especificado en ella.
ej: edad=4bytes
	peso=4bytes
	estudiante=1byte
Por lo cual sumara 3bytes para que el campo estudiante sea un multiplo
y el total sera [struct persona=12bytes]
Esto se conoce como alineamiento de memoria y optimiza el acceso a ella.
*/
struct Persona
{
	int edad{};
	float peso{};
	bool estudiante{};
} persona;

#endif