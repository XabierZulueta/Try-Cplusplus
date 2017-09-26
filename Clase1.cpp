#include <string>

#include "Clase1.h"
using namespace std;

Persona::Persona(){

}

Persona::~Persona(){
	if(nom.size()>0)
	nom="";
}

void Persona::setNom(string nuevo){
	nom = nuevo;
}

string Persona::getNom(){
	return nom;
}

void Persona::setAge(int num){
	age = num;
}

int Persona::getAge(){
	return age;
}
