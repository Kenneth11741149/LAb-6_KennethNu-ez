#ifndef CLIENTEINTERNACIONAL_H
#define CLIENTEINTERNACIONAL_H
#include "ClienteEmpresarial.h"

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

class ClienteInternacional:public ClienteEmpresarial{
	private:
		string origen;
		int sucursales;
	public:
		ClienteInternacional();
		ClienteInternacional(string, double, int, string, string, int);

		string getOrigen();
		int getSucursales();

		void setOrigen(string);
		void setSucursales(int);

		string toString();
};
#endif