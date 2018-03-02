#ifndef _TEMPS_HH
#define _TEMPS_HH

using namespace std;
#include <iostream>
#include <vector>;

class Temps {
private:
	string dia;
	int h, min;
	const int mati = 8;
	const int nit = 21;
	const int mati_finde = 12;
	const int nit_finde = 3;
	vector<string> dies;	// cal inicialitzarlos

public:
	Temps();
	void Inicia_temps();	
	void Trajecte(string& distancia);
	void Suma_temps(const int& afegir);
	void Suma_dia();
};
#endif
