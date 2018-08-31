#ifndef CLIENTE_H
#define CLIENTE_H

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

class Cliente{
	private:
		string nombre;
		double fondomonetario;
	public:
		Cliente();
		Cliente(string,double);

		string getNombre();
		double getFondomonetario();

		void setNombre(string);
		void setFondomonetario(double);

		string toString();

		~Cliente();
};
#endif