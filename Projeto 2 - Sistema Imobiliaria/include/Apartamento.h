#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"
#include <string>

using namespace std;

class Apartamento: public Imovel{

    public:
        Apartamento();
        virtual ~Apartamento();
		Apartamento(int, int, int, int, double, double, std::string);

		std::string getPosicao();
		double getArea();
		double getCondominio();
		int getQuartos();
		int getBanheiros();
		int getAndar();
		int getGaragem();
		double getValor();
		int getTipoOferta();
		int getTipoImovel();
		std::string getDescricao();

		void setPosicao(std::string);
		void setArea(double);
		void setCondominio(double);
		void setQuartos(int);
		void setBanheiros(int);
		void setAndar(int);
		void setGaragem(int);
		void setValor(double);
		void setTipoOferta(int);
		void setTipoImovel(int);
		void setDescricao(std::string);

    private:

        std::string posicao;
		double area;
	    double condominio;
	    int numQuartos;
	    int numBanheiros;
	    int andar;
	    int garagem;
};

#endif // APARTAMENTO_H
