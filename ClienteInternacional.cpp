#include "ClienteInternacional.h"

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

ClienteInternacional::ClienteInternacional(string pnombre, double pfondomonetario, int ppopularidad, string pnumerotelefonico,string porigen, int psucursales):ClienteEmpresarial(pnombre, pfondomonetario, ppopularidad, pnumerotelefonico){
	origen = porigen;
	sucursales = psucursales;
}

string ClienteInternacional::getOrigen(){
	return origen;
}

int ClienteInternacional::getSucursales(){
	return sucursales;
}

void ClienteInternacional::setOrigen(string porigen){
	origen = porigen;
}

void ClienteInternacional::setSucursales(int psucursales){
	sucursales = psucursales;
}

string ClienteInternacional::toString(){
	return origen;
}