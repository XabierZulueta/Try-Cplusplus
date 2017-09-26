#include <string>
#ifndef CLASE1_H
#define CLASE1_H
using namespace std;

class Persona
{
	public:
		Persona();
		~Persona();
		void setNom(string nom);
		string getNom();
		void setAge(int);
		int getAge();
	private:
		string nom;
		int age;
};

#endif
