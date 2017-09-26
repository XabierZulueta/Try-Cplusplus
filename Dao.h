#ifndef DAO_H
#define DAO_H
#include <iostream>
#include "Clase1.h"
#include <list>
#include <string>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <iostream>
#include <fstream>
using namespace std;

class Dao
{
	public:
		Dao();
		void menu();
		list<Persona> getListaPersonas();
		void setListaPersona(list<Persona> lista);
		void anadirPersona();
		list<Persona>::iterator chercherIndividu(string);
		void supprimerIndividu(	list<Persona>::iterator);
		void lister();
		void actualiser(list<Persona>::iterator);
		void leerFichero();
		void escribirFichero();
	protected:
	private:
		list<Persona> personas;
};

#endif
