#ifndef CASA_H
#define CASA_H
#include "Imovel.h"
#include <string>

using namespace std;

class Casa: public Imovel
{

	public:

		Casa();
		virtual ~Casa();
		Casa(int, int, int, double, double);

		int getPavimento();
		int getQuartos();
		int getBanheiros();
		double getAreaTotal();
		double getAreaConstruida();
		double getValor();
		int getTipoOferta();
		int getTipoImovel();
		std::string getDescricao();

		void setPav(int);
		void setQuartos(int);
		void setBanheiros(int);
		void setAreaTotal(double);
		void setAreaConstruida(double);
		void setValor(double);
		void setTipoOferta(int);
		void setTipoImovel(int);
		void setDescricao(std::string);

    private:

		int numPavimentos;
	    int numQuartos;
	    int numBanheiros;
	    double area_total;
	    double area_construida;
};

#endif // CASA_H
