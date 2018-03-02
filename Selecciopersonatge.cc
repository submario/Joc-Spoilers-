#include "Selecciopersonatge.hh"

using namespace std;

typedef vector <string> vec;

Selecciopersonatge::Selecciopersonatge(){}

string Selecciopersonatge::Escull(){
	int x = 2;
	cout << "Selecciona un personatge:" << endl << endl;
	sleep (x);
	cout << "(Atencio, aquesta tria pot ser molt mes irrellevant del que realment sembla)" << endl << endl;
	sleep(3);
	cout << "Aleix" << endl << "Didac" << endl << "Foskito" << endl << "Gabi" << endl << "Mario" << endl << endl; 
	bool escollit = false;
	int comptador = 0;
	string protagonista;
	while (!escollit){
		cin >> protagonista;
		if (protagonista == "Aleix"){
			cout << "Aleix: Aquest personatge destaca per la seva inteligencia, autonomia" << endl << "i capacitat de sudar del sistema guanyant cash des del llit de sa casa." << endl << "Atencio, escollir aquest persontage podria implicar danys severs degut" << endl << "a l'estres de les apostes" << endl << endl;
		}
		if (protagonista == "Didac"){
			cout << "Didac: Sorprenentment aquest personatge destaca per la seva capacitat de" << endl << "matinar excessivament pero no fer res productiu fins la tarda. Presenta una" << endl << "gran tolerancia a l'alcohol i gran devocio als jocs de cartes" << endl << endl;
		}
		if (protagonista == "Foskito"){ // introduir foskito es un popu;
			cout << "Foskito: Aquest personatge presenta un gran domini del bronx de Catalunya aka" << endl << "Mataro; aixi com grans coneixements sobre moures a velocitats modiques sobre un" << endl << "panell de fusta estilitzat amb rodes. A mes, els seu nivell de popularitat is" << endl << "over 9000! " << endl << endl;
		}
		if (protagonista == "Gabi"){
			cout << "Gabi: Aquest personatge destaca per la seva espontaneitat, els seus peculiars" << endl << "horaris alimenticis i la seva predileccio per dir 'cuuuuqui' en qualsevol moment" << endl << endl;
		}
		if (protagonista == "Mario"){
			cout << "Mario: Segur? Nu se, tenint tos els altres personatges i vols escollir aquest?" << endl << "En fi, com vulguis: Aquest personatge no fa us de la figura retorica consistent" << endl << "en el sarcasme, que va. Tampoc fa servir expresions castellanes (Ha suerte" << endl << "primo) ni te muletilles ni trenca la quarta paret en la propia seleccio del seu personatge i ni de lluny se li enva l'olla en cap moment" << endl << endl;
		}
		if (protagonista != "Mario" && protagonista != "Aleix" && protagonista != "Gabi" && protagonista != "Foskito" && protagonista != "Didac"){
			sleep (x);
			cout << endl << "No s'ha detectat resposta" << endl << endl << "Selecciona un personatge:" << endl << endl << "Aleix" << endl << "Didac" << endl << "Foskito" << endl << "Gabi" << endl << "Mario" << endl << endl;
		}			
		sleep (x);
		string resposta;
		if (protagonista == "Foskito"){
			sleep (x);
			cout << "Ho sentim, pero aquest personatge no destaca per la seva capacitat de romandre " << endl << "molta estona (com a la uni) i per tant ha estat desactivat" << endl << endl;
			++comptador;
			sleep (x);
			cout << "Selecciona un personatge:" << endl << endl << "Aleix" << endl << "Didac" << endl << "Foskito" << endl << "Gabi" << endl << "Mario" << endl << endl;
		}
		else if (protagonista == "Mario" || protagonista == "Aleix" || protagonista == "Gabi" || protagonista == "Didac"){
			cout << "Estas segur que aquest es el personatge que vols?" << endl << endl;
			sleep (x);
			cout << "no / no, pero ni zorra de com va el joc i aquest em val (si)" << endl << endl;
			cin >> resposta;
			cout << endl;
			sleep (x);
			if (resposta == "no"){
			++comptador;
			sleep (x);
			if (comptador == 4) {
				sleep (x);
				cout << endl << "Que, et pensaves que podies llegir totes les descripcions dels personatges" << endl << "sense que em burles de tu? Mal. Pd: BCN rules!" << endl << endl;
				sleep (x);
			}
			cout << "Selecciona un personatge:" << endl << "Aleix" << endl << "Didac" << endl << "Foskito" << endl << "Gabi" << endl << "Mario" << endl << endl; 
			}
			else { if (resposta == "si"){
				escollit = true;
				}
				else{	
					cout << "no s'ha detectat resposta" << endl << endl;
					sleep (x);
					cout << "Estas segur que aquest es el pesonatge que vols?" << endl << endl;
					cin >> resposta;
					cout << endl;
					if (resposta == "si") escollit = true;
					else cout << "Selecciona un personatge:" << endl << endl << "Aleix" << endl << "Didac" << endl << "Foskito" << endl << "Gabi" << endl << "Mario" << endl << endl;
				}
			}
		}
		
	}
	cout << endl << endl << endl;
	return protagonista;
}
