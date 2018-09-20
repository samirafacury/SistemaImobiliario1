#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include <iostream>
#include "Endereco.h"

using namespace std;

class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();

        double getValor();
		int getTipoOferta();
		int getTipoImovel();
		std::string getDescricao();
		Endereco getEndereco();

		void setValor(double);
		void setTipoOferta(int);
		void setTipoImovel(int);
		void setDescricao(std::string);
		void setEndereco(Endereco d);

    protected:

        int tipoOferta;
		double valor;
		int tipoImovel;
		std::string descricao();
		Endereco d;
};

#endif // IMOVEL_H
