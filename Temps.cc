#include "Temps.hh"

Temps::Temps(){}

Temps::Inicia_temps(){
	dies.push_back("dilluns");
	dies.push_back("dimarts");
	dies.push_back("dimecres");
	dies.push_back("dijous");
	dies.push_back("divendres");
	dies.push_back("dissabte");
	dies.push_back("diumenge");
	h = mati;
	dia = dies[0];
}

Temps::Trajecte(string& distancia){
	if(distancia == "curta"){
		Suma_temps(10);
	}
	else if(distancia == "mitja"){
		Suma_temps(30);
	}
	else if(distancia == "llarga"){
		Suma_temps(60);
	}
}

Temps::Suma_temps(const int& afegir){
	min += afegir;
	while (min >= 60){
		min -= 60;
		h += 1;
	}
	if (h = 24){
		Suma_dia();
	}
	
}

Temps::Suma_dia(){
	if (dia == "diumenge") dia = "dilluns";
	else{
		for (int i = 1; i <= 7; i++){
			if (dia == dies[i]) dia = dies[i+1];
		}
	}
	if (dia != "dissabte" and dia != "diumenge"){
		h = mati;
	}
	else h = mati_finde;
}


