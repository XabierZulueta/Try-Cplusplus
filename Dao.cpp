#include "Dao.h"
Dao::Dao()
{
}

void Dao::menu(){
	int option;
	string nom;
	leerFichero();
	while(option!=6){
		cout<<"1. Introduire un novel individu."<<endl;
		cout<<"2. Supprimer un individu."<<endl;
		cout<<"3. Liste de tous les individus."<<endl;
		cout<<"4. Liste vide."<<endl;
		cout<<"5. Actualiser un indiividu"<<endl;
		cout<<"6. Sortir."<<endl;
		cin>>option;
		system("CLS");
		switch(option){
			case 1:
				anadirPersona();
				system("CLS");
				break;
			case 2:
				cout<<"Introduce el nombre de la persona a buscar: ";
				cin>>nom;
				if(chercherIndividu(nom)==personas.end())
					cout<<"Esa persona no se encuentra registrada."<<endl;
				else{
					supprimerIndividu(chercherIndividu(nom));
				}
				system("CLS");
				break;
			case 3:
				lister();
				break;
			case 4:
				personas.clear();
				system("CLS");
				break;
			case 5:
				cout<<"Introduce el nombre de la persona a buscar: ";
				cin>>nom;
				if(chercherIndividu(nom)==personas.end())
					cout<<"Esa persona no se encuentra registrada."<<endl;
				else{
					actualiser(chercherIndividu(nom));
				}
				system("CLS");
				break;
			case 6:
				cout<<personas.size();
				escribirFichero();
				cout<<"Au revoir"<<endl;
				break;
			default:
				cout<<"Ce n'est pas une option"<<endl;
				break;
		}
	}
}

list<Persona> Dao::getListaPersonas(){
	return personas;
}

void Dao::setListaPersona(list<Persona> lista){
	personas = lista;
}

void Dao::anadirPersona(){
	Persona* persona = new Persona();
	string nom;
	int age;
	cout<<"Nombre de la persona: ";
	cin>>nom;
	cout<<"Edad de la persona: ";
	cin>>age;
	persona->setNom(nom);
	persona->setAge(age);
	personas.push_back(*persona);
}

list<Persona>::iterator Dao::chercherIndividu(string nom){
	list<Persona>::iterator result = personas.begin();
	//result = find(personas.begin(), personas.end(), persona);
	while(result!=personas.end()){
		if(result->getNom()==nom){
			return result;
		}
		result++;
	}
	if(result==personas.end()){

		return result;
	}
	return result;
}

void Dao::supprimerIndividu(list<Persona>::iterator persona){
	personas.erase(persona);
}

void Dao::lister(){
	list<Persona>::iterator p = personas.begin();
	while(p!=personas.end()){
		cout<<p->getNom()<<" "<<p->getAge()<<endl;
		p++;
	}
}

void Dao::actualiser(list<Persona>::iterator persona){
	string nuevo;
	cout<<"Nuevo nombre: ";
	cin>>nuevo;
	persona->setNom(nuevo);
}

void Dao::escribirFichero(){
	 ofstream outfile;
	 int i=0;
   outfile.open("personas.txt");
	list<Persona>::iterator p = personas.begin();
	while(p!=personas.end()){
		if((i+1)==personas.size())
		outfile<<p->getNom()<<" "<<p->getAge();
		else
		outfile<<p->getNom()<<" "<<p->getAge()<<endl;
		p++;
		i++;
	}
	outfile.close();
}

void Dao::leerFichero(){
	ifstream file;
	file.open("personas.txt");
	string line, nom;
	int age;
/*	while (std::getline(file, line))
    {
    	Persona * persona= new Persona();
    	persona->setNom(line);
        personas.push_back(*persona);
    }*/
    if(ifstream("personas.txt")){
	    file.seekg(0, ios::end);  
		if (file.tellg() != 0) {  //Chequeo si el fichero tiene contenido.  
			while(!file.eof()){
				Persona * persona= new Persona();
				file >> nom;
				file >> age;
				persona->setNom(nom);
				persona->setAge(age);
				personas.push_back(*persona);
			} 
		}	
	}
	file.close();
}
