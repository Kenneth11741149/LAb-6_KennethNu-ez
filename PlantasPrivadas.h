#ifndef PLANTASPRIVADAS_H
#define PLANTASPRIVADAS_H
#include "Cliente.h"
#include "Plantas.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <sstream>
using std::stringstream;

#include <vector>
using std::vector;

#include <string>
using std::string;
class PlantasPrivadas: public Plantas{
	private:
		string banco;
		Cliente* cliente;	
	public:
		PlantasPrivadas(string, string, string, double, double, double, bool,string, Cliente*);

		string getBanco(){
			return banco;
		}

		Cliente* getCliente(){
			return cliente;
		}

		void setBanco(string);
		void setCliente(Cliente*);

		~PlantasPrivadas(){
			delete cliente;
		}
};
#endif