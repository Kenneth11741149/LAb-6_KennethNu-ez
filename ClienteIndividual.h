#ifndef CLIENTEINDIVIDUAL_H
#define CLIENTEINDIVIDUAL_H
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

class ClienteIndividual:public Cliente{
	private:
		string id;
		string gradoestudio;
		bool gobierno;
	public:
		ClienteIndividual(string,double,string,string,bool);

		string getId();
		string getGradoestudio();
		bool getGobierno();

		void setId(string);
		void setGradoestudio(string);
		void setGobierno(bool);

		string toString();


		~ClienteIndividual();
};
#endif