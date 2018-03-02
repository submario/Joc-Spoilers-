#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <unistd.h>
using namespace std;

class Velocitattext{
private:
	int x;

public:
	Velocitattext();
	int ConsultaVelocitat();
	void Escriu(int& x, string& tipus);
	void Estableixvelocitat();
};
