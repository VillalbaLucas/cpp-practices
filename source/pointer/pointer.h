#ifndef POINTER_H
#define POINTER_H

#include <iostream>
#include <string>

using namespace std;

string append(string str, string str_2)
{
	return str.append(" ").append(str_2);
}

string invertAppend(string str, string str_2)
{
	return str_2.append(" ").append(str);
}

string combine(string str, string str_2, string (*s)(string a, string b))
{
	return (*s)(str, str_2);
}

#endif