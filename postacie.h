#include <iostream>

using namespace std;
class postacie
{	
	public:
   	int id_klasy;
	string imie,profesja;  
	int sila,zrecznosc,zywotnosc,energia,obrona,zloto,obrazenia;
	float zycie_max,mana_max;
	postacie():id_klasy(0),imie("Brak"),profesja("Brak"),sila(0),zrecznosc(0),zywotnosc(0),energia(0),obrona(0),zycie_max(0),mana_max(0),zloto(0),obrazenia(0){};
	
    void tworzenie_klasy_postaci();
	void zapis_postaci();
		
};





