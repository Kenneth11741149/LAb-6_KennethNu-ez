#ifndef PLANTASENCILLA_H
#define PLANTASENCILLA_H
#include "PlantasPublicas.h"
#include "Cliente.h"

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


class PlantaSencilla:public PlantasPublicas{
	private:
		string aseguradora;
		vector<Cliente*> clientes;
	public:
		PlantaSencilla(string, string, string, double, double, double, bool,int,string, string, vector<Cliente*> );

		string getAseguradora(){
			return aseguradora;
		}
		vector<Cliente*> getClientes(){
			return clientes;
		}

		void setAseguradora(string);
		void setClientes(vector<Cliente*>);

		~PlantaSencilla(){

		}


};
#endif