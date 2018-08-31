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

Plantas::Plantas(string pnombre, string pyear, string ppais, double pingresos, double pegresos, double pnetwin, bool pfuncionamiento){
	nombre = pnombre;
	year = pyear;
	pais = ppais;
	ingresos = pingresos;	
	egresos = pegresos;
	netwin = pnetwin;
	funcionamiento = pfuncionamiento;
}

/*string Plantas::getNombre(){
	return nombre;
}*/

void Plantas::setNombre(string pnombre){
	nombre = pnombre;
}

void Plantas::setYear(string pyear){
	year = pyear;
}

void Plantas::setPais(string ppais){
	pais = ppais;
}

void Plantas::setIngresos(double pingresos){
	ingresos = pingresos;
}

void Plantas::setEgresos(double pegresos){
	egresos = pegresos;
}

void Plantas::setNetwin(double pnetwin){
	netwin = pnetwin;
}


string Plantas::toString(){
	return nombre;
}

