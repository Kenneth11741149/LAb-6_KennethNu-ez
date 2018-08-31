#include "ClienteIndividual.h"
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

ClienteIndividual::ClienteIndividual(string pnombre, double pfondomonetario, string pid, string pgradoestudio, bool pgobierno):Cliente(pnombre, pfondomonetario){
	id = pid;
	gradoestudio = pgradoestudio;
	gobierno = pgobierno;
}

string ClienteIndividual::getId(){
	return id;
}

string ClienteIndividual::getGradoestudio(){
	return gradoestudio;
}

bool ClienteIndividual::getGobierno(){
	return gobierno;
}

void ClienteIndividual::setId(string pid){
	id = pid;
}

void ClienteIndividual::setGradoestudio(string pgradoestudio){
	gradoestudio = pgradoestudio;
}

void ClienteIndividual::setGobierno(bool pgobierno){
	gobierno = pgobierno;
}

string ClienteIndividual::toString(){
	return id;
}

ClienteIndividual::~ClienteIndividual(){

}