#include "Velocitattext.hh"

Velocitattext::Velocitattext(){}

int Velocitattext::ConsultaVelocitat(){
	return x;
};

void Velocitattext::Escriu(int &x, string& tipus){
	cout << "La velocitat del text ha estat seleccionada a " << tipus << ". Aixi es com es veura la" << endl << "transicio entre textos:" << endl;
	sleep (x);
	cout << "Text 1" << endl;
	sleep (x);
	cout << "Text 2" << endl;
	sleep (x);
	cout << "Text 3. Aquest es un text mes llarg perque tinguis en compte que hi haura" << endl << "dialegs que seran mes llargs que altres i t'ha de donar temps a llegir-ho tot" << endl;
	sleep (x);
	cout << "Text 4" << endl << endl;
	sleep (x);
	/* TODO (#1#): Afegir com es podra cridar a la funcio per 
	               canviar velocitat text */
	cout << "Es aquesta la velocitat d'espera que vols? (recorda que la podras cambiar en" << endl << "qualsevol moment)" << endl;
}

void Velocitattext::Estableixvelocitat(){
	bool escollit = false;
	string tempo;
	while (!escollit){
		cout << endl << "Selecciona el temps d'espera entre un dialeg i el seguent:" << endl << "- lenta" << endl << "- mitja" << endl << "- rapida" << endl << endl;
		cin >> tempo;
		cout << endl;
		sleep (1);
		if (tempo == "lenta"){
			x = 7;
			Escriu(x, tempo);
			bool eleccio = false;
			string bolea;
			while (!eleccio){
				cin >> bolea;
				if (bolea == "si"){
					eleccio = true;
					escollit = true;
				}
				else if (bolea == "no"){
					eleccio = true;
				}
				else cout << "No s'ha detectat resposta. Try again" << endl;
			}	
		}
		else if(tempo == "mitja"){
			x = 5;
			Escriu(x, tempo);
			bool eleccio = false;
			string bolea;
			while (!eleccio){
				cin >> bolea;
				if (bolea == "si"){
					eleccio = true;
					escollit = true;
				}
				else if (bolea == "no"){
					eleccio = true;
				}
				else cout << "No s'ha detectat respost. Try again" << endl;
			}	
		}
		else if (tempo == "rapida"){
			x = 3;
			Escriu(x, tempo);
			bool eleccio = false;
			string bolea;
			while (!eleccio){
				cin >> bolea;
				if (bolea == "si"){
					eleccio = true;
					escollit = true;
				}
				else if (bolea == "no"){
					eleccio = true;
				}
				else cout << endl << "No s'ha detectat respost. Try again" << endl;
			}	
		}
		else{
			cout << "No s'ha detectat resposta, torna a fer la teva eleccio" << endl;
			sleep (1);
		}
	}
	sleep (x);
	cout << "Entesos. Velocitat seleccionada a " << tempo << "." << endl;
}
