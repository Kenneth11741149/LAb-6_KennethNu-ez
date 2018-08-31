#include "ClienteNacional.h"

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

ClienteNacional::ClienteNacional(string pnombre, double pfondomonetario, int ppopularidad, string pnumerotelefonico, string pcodigoRTN):ClienteEmpresarial(pnombre, pfondomonetario, ppopularidad, pnumerotelefonico){
	codigoRTN = pcodigoRTN;
}

string ClienteNacional::getCodigoRTN(){
	return codigoRTN;
}

void ClienteNacional::setCodigoRTN(string pcodigoRTN){
	codigoRTN = pcodigoRTN;
}

string ClienteNacional::toString(){
	return codigoRTN;
}