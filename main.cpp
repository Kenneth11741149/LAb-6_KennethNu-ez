#include "Cliente.h"
#include "ClienteEmpresarial.h"
#include "ClienteIndividual.h"
#include "ClienteInternacional.h"
#include "ClienteNacional.h"
#include "Plantas.h"
#include "PlantaSencilla.h"
#include "PlantasMixtas.h"
#include "PlantasPrivadas.h"
#include "PlantasPublicas.h"


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
//Variables globales
int ContadorPlantas = 0;
vector<Cliente*> clientes;

//Metodos.
Plantas** InitiatePlantas(Plantas**);
void DeletePlantas(Plantas**);
void createCliente();
void DeleteVector();


int main(){
	Plantas** array; //declaracion del arreglo unidimensional.
	array = InitiatePlantas(array); //inicializacion del arreglo..
	cout << "El lab es tipo 2." << endl;

	char resp = 's';
	while(resp == 'S' || resp == 's'){
		cout << "1. Creacion de Clientes." << endl;
		cout << "2. Creacion de Plantas." << endl;
		cout << "3. Ver el estado financiero del imperio crota." << endl;
		cout << "4. DESTRUIR IMPERIO." << endl;
		int option = 0;
		string inputmain = "";
		stringstream stream;
		cin >> inputmain;
		stream << inputmain;
		stream >> option;

		switch(option){
			case 1:
				createCliente();
				break;
			case 2:
				if(ContadorPlantas > 10){
					cout << "NO SE PUEDE CREAR MAS PLANTAS" << endl;
				}
				break;
			case 3:	
				break;
			case 4:
				DeletePlantas(array);
				DeleteVector();
				break;
			default:
				break;
		} // Fin del switch (option del main.)




		cout << "Desea TERMINAR EL PROGRAMA ? [S/N]" << endl;
		cin >> resp;
	} // Fin del ciclo while de respuesta de usuario.
	DeletePlantas(array);
	DeleteVector();

	return 0;
} //Fin del main.



////////////////
///////////////
Plantas** InitiatePlantas(Plantas** array){
	array = new Plantas*[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = NULL;
	}
	ContadorPlantas = 0;
}

void DeletePlantas(Plantas** array){
	if( ContadorPlantas > 0){	
		for(int i = 0; i < ContadorPlantas; i++){
			array[i] = NULL; //Evita el error de doble
		}
	}
	delete[] array;
} //FIn metodo DElete Plantas


void DeleteVector(){
	clientes.clear();
} //fin metodo delete Vector;


void createCliente(){
	cout << " Que tipo de cliente es: ? " << endl;
	cout << "1.  Cliente Empresarial"<< endl;
	cout << "2. Cliente Individual" << endl;
	int option = 0;
	string input = "";
	cin >> input;
	stringstream stream;
	stream << input;
	stream >> option;
	string name;
	double fondom = 0;
	if(option == 1){
		cout << "Que tipo de cliente empresarial es: " << endl;
		cout << "1. Cliente Empresarial Internacional." << endl;
		cout << "2. Cliente Empresarial Nacional. " << endl;
		string input2 = "";
		int option2 = 0;
		cin >> input2;
		stringstream stream2;
		stream2 << input2;
		stream2 >> option2;
		int popularity = 0;
		string cellphone = "";
		if(option2 == 1){
			string origincountry;
			int sucursales = 0;
			cout << "Ingrese su nombre solamente." << endl;
			cin >> name;
			cout << "Ingrese su fondo monetario." << endl;
			string temporal = "";
			stringstream stream3;
			cin >> temporal;
			stream3 << temporal;
			stream3 >> fondom;
			cout << "Ingrese su popularidad" << endl;
			string temporal2 = "";
			stringstream stream4;
			cin >> temporal2;
			stream4 << temporal2;
			int temporal3 = 0 ;
			stream4 >> temporal3;
			if(temporal3 > 0 && temporal3 < 11){
				popularity = temporal3;
			}
			cout << "Ingrese su numero telefonico" << endl;
			cin >> cellphone;
			cout << "Ingrese su pais de origen" << endl;
			cin >> origincountry;
			cout << "Ingrese el numero de sucursales" << endl;
			string temporal4 = "";
			cin >> temporal4;
			stringstream stream5;
			stream << temporal4;
			stream >> sucursales;
			Cliente* tempclient = new ClienteInternacional(name,fondom,popularity,cellphone,origincountry,sucursales);
			clientes.push_back(tempclient);

		} else if (option2 == 2){
			string RTNCODE = "";
			cout << "Ingrese su nombre solamente" << endl;
			cin >> name;
			cout << "Ingrese su fondo monetario" << endl;
			string otemporal = "";
			stringstream ostream;
			cin >> otemporal;
			ostream << otemporal;
			ostream >> fondom;
			cout << "Ingrese su nivel de popularidad" << endl;
			string otemporal2 = "";
			stringstream ostream2;
			cin >> otemporal2;
			ostream2 << otemporal2;
			int otemporal3 = 0;
			cout << "PROGRAMA NO TERMINADO:) " << endl;

		}//Fin if option2 == 1
	} //Fin if option == 0;

} //FIn del metodo Create CLiente.