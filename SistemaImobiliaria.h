#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "Imovel.h"
#include <list>

class SistemaImobiliaria{
    public:
        SistemaImobiliaria();
        void CadastraImovel(Imovel *im);
        void DeletaImovel(int indice);
        list<Imovel*> getImoveis();
        list<Imovel*> getDescricaoImoveis(string descricao);//"titulo" do imovel
        list<Imovel*> getImoveisPorTipo(int tipo);
        list<Imovel*> getImoveisParaAlugarPorBairro(int tipoOferta,string bairro);
        list<Imovel*> getImoveisParaVenderPorBairro(int tipoOferta,string bairro);
        list<Imovel*> getImoveisPorBairro(string bairro);
        list<Imovel*> getImoveisPorCidade(string cidade);
        list<Imovel*> getImoveisPorValor(double valor, int flag);
        list<Imovel*> getImoveisPorTipoAnuncio(int tipo);

        void exibe(list<Imovel *> list);

    private:
        list<Imovel*> listaImovel;
};

#endif // SISTEMAIMOBILIARIA_H
