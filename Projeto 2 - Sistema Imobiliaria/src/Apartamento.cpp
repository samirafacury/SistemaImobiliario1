#include "Apartamento.h"


Apartamento::Apartamento(int, int, int, int, double, double, std::string){

    this -> posicao = posicao;
    this -> area = area;
    this -> condominio = condominio;
    this -> numQuartos = numQuartos;
    this -> numBanheiros = numBanheiros;
    this -> andar = andar;
    this -> garagem = garagem;

}
Apartamento::Apartamento(){

    posicao = "";
    area = 0;
    condominio = 0;
    numQuartos = 0;
    numBanheiros;
    andar= 0;
    garagem = 0;

}

std::string Apartamento::getPosicao(){
    return posicao;
}
double Apartamento::getArea(){
    return area;
}
double Apartamento::getCondominio(){
    return condominio;
}
int Apartamento::getQuartos(){
    return numQuartos;
}
int Apartamento::getBanheiros(){
    return numBanheiros;
}
int Apartamento::getAndar(){
    return andar;
}
int Apartamento::getGaragem(){
    return garagem;
}
double Apartamento:: getValor(){

}
int Apartamento::getTipoOferta(){

}
int Apartamento::getTipoImovel(){

}
std::string Apartamento::getDescricao(){

}

void Apartamento:: setPosicao(std::string posicao){

    this -> posicao = posicao;

}

void Apartamento::setArea(double area){

    this -> area = area;

}

void Apartamento::setCondominio(double condominio){

    this -> condominio = condominio;

}

void Apartamento::setQuartos(int numQuartos){

    this -> numQuartos = numQuartos;

}
void Apartamento::setBanheiros(int numBanheiros){

    this -> numBanheiros = numBanheiros;

}

void Apartamento::setAndar(int andar){

    this -> andar = andar;

}
void Apartamento::setGaragem(int garagem){

    this -> garagem = garagem;

}

void Apartamento::setValor(double){

}
void Apartamento::setTipoOferta(int){

}
void Apartamento::setTipoImovel(int){

}
void Apartamento::setDescricao(std::string){

}

Apartamento::~Apartamento()
{
    //dtor
}
