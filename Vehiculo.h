#include <string>
#ifndef VEHICULO_H
#define VEHICULO_H
using namespace std;
class Vehiculo
{
	public:
		Vehiculo();
		~Vehiculo();
		void setMatricula(string);
		string getMatricula();
		void setMarque(string);
		string getMarque();
	protected:
	private:
		string marque;
		string matricula;
};

#endif
