#include <iostream>

using namespace std;

const int TM{100};

ingresar(int matriz[][TM], int tl)
{
	if (tl < 3)
		return -1;

	int col, row;
	for (int i = 0; i < tl * tl; i++)
	{
		row = i / tl;
		col = i % tl;
		cout << "matriz[" << row << "][" << col << "]: ";
		cin >> matriz[row][col];
		cout << endl;
	}
}

print_matriz(int matriz[][TM], int tl)
{
	int row, col;
	for (int i = 0; i < tl * tl; i++)
	{
		row = i / tl;
		col = i % tl;
		cout << matriz[row][col] << ", ";
		if (col == 2)
			cout << endl;
	}
}
bool impar(int a)
{
	return a % 2 != 0;
}

int primer_imp(int matriz[][TM], int tl){
	int i{0}, primer{0}, row, col;

	while (!impar(primer)){
		row = i / tl;
		col = i % tl;
		if (impar(matriz[row][col]))
			primer = matriz[row][col];
		i++;
	}
	return primer;
}
int primer_par(int matriz[][TM], int tl){
	int i{0}, row, col;
	int par{-1};
	while (impar(par)){
		row = i / tl;
		col = i % tl;
		if (!impar(matriz[row][col]))
			par = matriz[row][col];
		i++;
	}
	return par;
}

int mayor_diferencia(int matriz[][TM], int tl){
	int row, col;
	int menor_imp = primer_imp(matriz, tl);
	int mayor_par = primer_par(matriz, tl);

	for (int i = 0; i < tl * tl; i++){
		row = i / tl;
		col = i % tl;
		if (impar(matriz[row][col]) && matriz[row][col] < menor_imp)
			menor_imp = matriz[row][col];
		if (!impar(matriz[row][col]) && matriz[row][col] > mayor_par)
			mayor_par = matriz[row][col];
	}
	return abs(mayor_par - menor_imp);
}

int main(){
	int tl{3};
	int matriz[TM][TM]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	// cout << "Tamanio de la matriz cuadrada: ";
	// cin >> tl;
	// ingresar(matriz, tl);
	print_matriz(matriz, tl);
	cout << "Resta de menor impar con  mayor par: " << mayor_diferencia(matriz, tl) << endl;
	return 0;
}
