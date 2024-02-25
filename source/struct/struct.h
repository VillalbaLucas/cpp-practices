#ifndef STRUCT_H
#define STRUCT_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Alumno
{
	string name{"default"};
	int edad{1};
	int dni{0};
} clase[5];

void printStruct(const Alumno &alumno)
{
	cout << "{" << endl;
	cout << " name: " << alumno.name << endl;
	cout << " edad: " << alumno.edad << endl;
	cout << " dni: " << setw(8) << setfill('0') << alumno.dni << endl;
	cout << "}" << endl;
}

void iteratorPrintStruct(Alumno alumnos[])
{
	for (size_t i = 0; i < 5; i++)
		printStruct(alumnos[i]);
}

#endif