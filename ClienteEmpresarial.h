#ifndef CLIENTEEMPRESARIAL_H
#define CLIENTEEMPRESARIAL_H

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

class ClienteEmpresarial:public Cliente{
	private:
		int popularidad;
		string numerotelefonico;
	public:
		
		ClienteEmpresarial(string, double, int,string);

		int getPopularidad();
		string getNumerotelefonico();

		void setPopularidad(int);
		void setNumerotelefonico(string);

		string toString();

		~ClienteEmpresarial();
};
#endif