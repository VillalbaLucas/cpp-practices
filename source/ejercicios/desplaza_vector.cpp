#include <iostream>

using namespace std;

void desplazar_vector(int *vector, int tl, int des){
	int aux[tl];

	for (int i = 0; i < tl; i++)
		aux[(i + des) % tl] = vector[i];
	for (int i = 0; i < tl; i++)
		vector[i] = aux[i];
}

print_vector(int *vector, int tl){
	for (int i = 0; i < tl; i++)
		cout << vector[i] << ",";
	cout << endl;
}

int main()
{
	const int TM = 1000;
	int tl{9}, desplazar;
	int vector[TM]{1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout << "Ingrese los lugares a desplazar: ";
	cin >> desplazar;

	print_vector(vector, tl);
	desplazar_vector(vector, tl, desplazar);
	print_vector(vector, tl);

	return 0;
}
