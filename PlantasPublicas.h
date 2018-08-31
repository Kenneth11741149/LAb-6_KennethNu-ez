#ifndef PLANTASPUBLICAS_H
#define PLANTASPUBLICAS_H


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

class PlantasPublicas: public Plantas{
	private: 
		int max;
		string aseguradoraf;
	public:
		PlantasPublicas(string, string, string, double, double, double, bool,int,string);

		int getMax(){
			return max;
		}

		string getAseguradoraf(){
			return aseguradoraf;
		}

		void setMax(int);
		void setAseguradoraf(string);

		string toString(){
			return this -> getNombre();
		}

		~PlantasPublicas(){

		}
};
#endif