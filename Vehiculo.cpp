#include "Vehiculo.h"

Vehiculo::Vehiculo()
{
}

Vehiculo::~Vehiculo()
{
}
void Vehiculo::setMatricula(string mat){
	matricula=mat;
}
string Vehiculo::getMatricula(){
	return matricula;
}
string Vehiculo::getMarque(){
	return marque;
}
void Vehiculo::setMarque(string marca){
	marque = marca;
}
