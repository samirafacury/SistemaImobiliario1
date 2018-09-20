#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
#include <iostream>

using namespace std;

class Endereco
{
    public:
        Endereco();
        virtual ~Endereco();
		Endereco(std::string, std::string, std::string, std::string, int, int);

		std::string getLogradouro();
		std::string getBairro();
		std::string getCidade();
		std::string getEstado();
		int getCEP();
		int getNumero();

		void setLogradouro(std::string);
		void setBairro(std::string);
		void setCidade(std::string);
		void setEstado(std::string);
		void setCEP(int);
		void setNumero(int);

    private:

        std::string logradouro;
    	std::string bairro;
    	std::string cidade;
    	std::string estado;
    	int CEP;
    	int numero;
};

#endif // ENDERECO_H
