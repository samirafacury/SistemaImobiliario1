#include "Casa.h"
#define CASA 1

using namespace std;

#define CASA 1

Casa::Casa(int numPavimentos, int numQuartos, int numBanheiros, double area_total, double area_construida){

	this -> numPavimentos = numPavimentos ;
	this -> numQuartos = numQuartos ;
	this -> numBanheiros = numBanheiros;
	this -> area_total = area_total;
	this -> area_construida = area_construida;

    tipoImovel = CASA; //1
}

Casa::Casa(){

	numPavimentos=0;
	numQuartos=0;
	numBanheiros=0;
	area_total=0;
	area_construida=0;
	tipoImovel = CASA;

}

int Casa::getPavimento(){

	return numPavimentos;

}
int Casa::getQuartos(){

	return numQuartos;
}

int Casa::getBanheiros(){

	return numBanheiros;

}
double Casa::getAreaTotal(){

	return area_total;

}

double Casa::getAreaConstruida(){
	return area_construida;
}

double Casa::getValor(){


}

int Casa::getTipoOferta(){

}

int Casa::getTipoImovel(){


}
std::string Casa::getDescricao(){


}

void Casa::setPav(int){

	this->numPavimentos = numPavimentos;

}

void Casa::setQuartos(int){


	this -> numQuartos= numQuartos;

}
void Casa::setBanheiros(int){

	this -> numBanheiros= numBanheiros;

}
void Casa::setAreaTotal(double){

	this -> area_total= area_total;

}
void Casa::setAreaConstruida(double){

	this -> area_construida = area_construida;

}
void Casa::setValor(double){

}
void Casa::setTipoOferta(int){

}
void Casa::setTipoImovel(int){

}
void Casa::setDescricao(std::string){

}

Casa::~Casa()
{
    //dtor
}
