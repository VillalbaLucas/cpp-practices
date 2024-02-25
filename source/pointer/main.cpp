#include <iostream>
#include <string>

#include "pointer.h"

using namespace std;

int main()
{
	string a("Hello"), b("World!");

	cout << combine(a, b, append) << endl;
	cout << combine(a, b, invertAppend) << endl;
	return 0;
}
