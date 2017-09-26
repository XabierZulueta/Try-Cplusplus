#include "Clase1.h"
#include "Vehiculo.h"
#ifndef ADULTO_H
#define ADULTO_H


using namespace std;
class Adulto : public Persona
{
	public:
		Adulto();
		~Adulto();
		void setVoiture(Vehiculo*);
		Vehiculo* getVoiture();
	private:
		Vehiculo* voiture;
};

#endif
