#ifndef CLIENTENACIONAL_H
#define CLIENTENACIONAL_H

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

class ClienteNacional:public ClienteEmpresarial{
	private:
		string codigoRTN;

	public:
		ClienteNacional(string, double, int,string,string);

		string getCodigoRTN();

		void setCodigoRTN(string);

		string toString();

};
#endif