#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"
#include <string>

using namespace std;

class Terreno:public Imovel
{
    public:
        Terreno();
        virtual ~Terreno();
		Terreno(double);

		double getValor();
		int getTipoOferta();
		int getTipoImovel();
		std::string getDescricao();

		void setValor(double);
		void setTipoOferta(int);
		void setTipoImovel(int);
		void setDescricao(std::string);

    private:

        double area;
};

#endif // TERRENO_H
