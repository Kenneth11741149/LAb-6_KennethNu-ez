#include "PlantasMixtas.h"

#include "PlantasPublicas.h"
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

PlantasMixtas::PlantasMixtas(string pnombre, string pyear, string ppais, double pingresos, double pegresos, double pnetwin, bool pfuncionamiento, int pmax, string paseguradoraf, string paseguradora, vector<Cliente*> pclientes):PlantasPublicas(pnombre, pyear,ppais,pingresos,pegresos,pnetwin, pfuncionamiento, pmax, paseguradoraf){
	aseguradora = paseguradora;
	clientes = pclientes;
}

void PlantasMixtas::setAseguradora(string paseguradora){
	aseguradora = paseguradora;
}

void PlantasMixtas::setClientes(vector<Cliente*> pclientes){
	clientes = pclientes;
}

