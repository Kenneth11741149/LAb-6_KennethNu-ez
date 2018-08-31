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

Cliente::Cliente(){

}

Cliente::Cliente(string pnombre, double pfondomonetario){
	nombre = pnombre;
	fondomonetario = pfondomonetario;
}

string Cliente::getNombre(){
	return nombre;
}

double Cliente::getFondomonetario(){
	return fondomonetario;
}

void Cliente::setNombre(string pnombre){
	nombre = pnombre;
}

void Cliente::setFondomonetario(double pfondomonetario){
	fondomonetario = pfondomonetario;
}

string Cliente::toString(){
	return nombre;
}

Cliente::~Cliente(){

}