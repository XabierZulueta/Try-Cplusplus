
#include "Adulto.h"
#include "Vehiculo.h"
using namespace std;

Adulto::Adulto()
{

}

Adulto::~Adulto()
{
}

void Adulto::setVoiture(Vehiculo* veh){
	voiture = veh;
}

Vehiculo* Adulto::getVoiture(){
	return voiture;
}
