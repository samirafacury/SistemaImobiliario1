#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include <string>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Endereco.h"
#include <iostream>

using namespace std;


class SistemaImobiliaria
{
    public:
        SistemaImobiliaria();
        virtual ~SistemaImobiliaria();

        void CadastraImovel(Imovel a, int);
        void getImoveis();
        void getDescricaoImoveis();
		void getImoveisPorTipo(int);
		void getImoveisParaAlugarPorBairro();
		void getImoveisParaVenderPorBairro();
		void getImoveisPorCidade();

		void DeleteImovel();
		void SalvarArquivos();
		void EditarArquivo();

    protected:

    private:
};

#endif // SISTEMAIMOBILIARIA_H
