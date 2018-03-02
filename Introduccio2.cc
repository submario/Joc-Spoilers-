#include "Introduccio2.hh"
using namespace std;

Introduccio2::Introduccio2(){}

void Introduccio2::Escriu_intro2(){
	cout << "Com que el joc funciona amb paraules o expressions concretes, hi ha un seguit" << endl << "de directrius que serviran per evitar problemes i confusions: " << endl << endl;
	sleep (3);
	cout << " -Tot text d'entrada anira en minuscules a excepcio de noms propis a no" << endl << "ser que s'especifiqui el contrari" << endl << endl;
	sleep (3);
	cout << " -Tampoc s'haura d'introduir accents ni caracters especials" << endl << endl;
	sleep (3);
	cout << " -Per evitar ambiguetats sempre que hi hagui una pregunta amb mes d'una" << endl << "resposta es donaran totes les opcions possibles." << endl << endl;
	sleep (3);
	cout << "-Les entrades de text amb aquesta estetica '(text)' indicaran descripcions del" << endl << "narrador" << endl << endl;
	sleep (3);
	cout << "-Les entrades de text amb aquesta estetica '<text>' indicaran pensaments del" << endl << "personatge" << endl << endl;
	sleep (3);
	cout << "-Les entrades de text amb aquesta estetica (text)* indicaran possibles opcions a" << endl << "escollir" << endl << endl;
	sleep (3);
	cout << "Un cop aclarit lo basic, jo pots donar inici a la teva aventura." << endl << "Mantingues la calma i que tinguis molta sort... La necessitaras." << endl << endl;
	sleep (3);
}
