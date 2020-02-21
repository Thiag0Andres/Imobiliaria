#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"
#include <iostream>
#include <sstream>
#include <stdio.h>

#define FLUSH fflush(stdin)
#define PAUSE system("pause")



using namespace std;

class Imovel{
    public:
        int tipoImovel; //casa, apartamento, terreno
        int tipoOferta; //Venda, aluguel
        double valor;
        Endereco endereco;
        string descricao;
        int id;

    public:
        Imovel();

        int getTipoImovel();
        double getValor();
        int getTipoOferta();
        Endereco getEndereco();
        string getDescricao();
        int getId();

        void setTipoImovel(int tipoImovel);
        void setTipoOferta(int tipoOferta);
        void setValor(double valor);
        void setEndereco(string logradouro, int numero, string bairro, string cep, string cidade);
        void setDescricao(string descricao);
        void setId(int id);

        virtual void EditaImovel();
        virtual string toString();
        //virtual Imovel* CadastroAll(int tipoImovel);
};

#endif // IMOVEL_H

