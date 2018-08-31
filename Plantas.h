#ifndef PLANTAS_H
#define PLANTAS_H

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

class Plantas{
	private:
		string nombre;
		string year;
		string pais;
		double ingresos;
		double egresos;
		double netwin;
		bool funcionamiento;
	public:
		Plantas();
		Plantas(string, string, string, double, double, double, bool);

		string getNombre(){
			return nombre;
		}

		string getYear(){
			return year;
		}

		string getPais(){
			return pais;
		}
		double getIngresos(){
			return ingresos;
		}
		double getEgresos(){
			return egresos;
		}
		double getNetwin(){
			return netwin;
		}
		bool getFuncionamiento(){
			return funcionamiento;
		}

		void setNombre(string);
		void setYear(string);
		void setPais(string);
		void setIngresos(double);
		void setEgresos(double);
		void setNetwin(double);
		void setFuncionamiento(bool);

		string toString();

		~Plantas(){
			
		}
};
#endif