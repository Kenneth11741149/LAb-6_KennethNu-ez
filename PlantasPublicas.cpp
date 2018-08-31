#include "PlantasPublicas.h"

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

PlantasPublicas::PlantasPublicas(string pnombre, string pyear, string ppais, double pingresos, double pegresos, double pnetwin, bool pfuncionamiento, int pmax, string paseguradoraf):Plantas(pnombre, pyear, ppais, pingresos, pegresos, pnetwin, pfuncionamiento){
	max = pmax;
	aseguradoraf = paseguradoraf;
}

void PlantasPublicas::setMax(int pmax){
	max = pmax;
}

void PlantasPublicas::setAseguradoraf(string paseguradoraf){
	aseguradoraf = paseguradoraf;
}