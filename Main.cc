#include <iostream>
#include "Introduccio.hh"
#include "Introduccio2.hh"
#include "Selecciopersonatge.hh"
#include "Seleccioacompanyant.hh"
using namespace std;


int main(){
	Introduccio a;
	a.Escriu_intro();
	Introduccio2 a2;
	a2.Escriu_intro2();
	string protagonista;
	Selecciopersonatge per;
	protagonista = per.Escull();
	string secundari;
	Seleccioacompanyant acomp;
	secundari = acomp.Selecciona(protagonista);
}
