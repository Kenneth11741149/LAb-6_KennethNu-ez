#include "ClienteEmpresarial.h"
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


ClienteEmpresarial::ClienteEmpresarial(string pnombre, double pfondomonetario, int ppopularidad, string pnumerotelefonico):Cliente(pnombre,pfondomonetario){
	popularidad = ppopularidad;
	numerotelefonico = pnumerotelefonico;
}

int ClienteEmpresarial::getPopularidad(){
	return popularidad;
}

string ClienteEmpresarial::getNumerotelefonico(){
	return numerotelefonico;
}

void ClienteEmpresarial::setPopularidad(int ppopularidad){
	popularidad = ppopularidad;
}

void ClienteEmpresarial::setNumerotelefonico(string pnumerotelefonico){
	numerotelefonico = pnumerotelefonico;
}

string ClienteEmpresarial::toString(){
	return this -> getNombre();
}

ClienteEmpresarial::~ClienteEmpresarial(){
	
}