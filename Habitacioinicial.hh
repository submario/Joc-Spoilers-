#include <iostream>
#include <string>
using namespace std;

class Habitacioinicial{
private:
	string nom_hab;
	
public:
	Habitacioinicial();
	string ConsultarLloc() const;
	void Consultarobjectes() const;
	void Consultarpersones() const;
	void Consultapenes() const;
};
