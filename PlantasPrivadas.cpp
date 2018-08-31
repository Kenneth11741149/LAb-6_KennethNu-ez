#include "PlantasPrivadas.h"
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

PlantasPrivadas::PlantasPrivadas(string pnombre, string pyear, string ppais, double pingresos, double pegresos, double pnetwin, bool pfuncionamiento, string pbanco, Cliente* pcliente):Plantas(pnombre, pyear, ppais, pingresos, pegresos, pnetwin, pfuncionamiento){
	banco = pbanco;
	cliente = pcliente;
}

void PlantasPrivadas::setBanco(string pbanco){
	banco = pbanco;
}

void PlantasPrivadas::setCliente(Cliente* pcliente){
	cliente = pcliente;
}