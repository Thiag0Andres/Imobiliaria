#include "Imovel.h"
#include <iostream>
#include "Terreno.h"

Terreno::Terreno()
{
    area = 0;
    tipoImovel = 3;
}

double Terreno::getArea()
{
    return area;
}

void Terreno::setArea(double area)
{
    if(area < 0 )
        this -> area = 0;
    else
        this -> area = area;
}
string Terreno::toString()
{
    stringstream strong;

    strong<< "Terreno\n" << "Id: " << id << endl
          << "Tipo Oferta: " << tipoOferta << endl
          << "Valor: " << valor << endl
          << "Descricao: " << descricao << endl
          << "Logradouro: " << getEndereco().getLogradouro() << endl
          << "Numero: " << getEndereco().getNumero() << endl
          << "Bairro: " << getEndereco().getBairro() << endl
          << "Cep: " << getEndereco().getCep() << endl
          << "Cidade: " << getEndereco().getCidade() << endl
          << "Area do terreno: " << area << endl;

    return strong.str();
}

/*Imovel* Terreno::CadastroAll(int tipoImovel){

    string logradouro, bairro, cep, cidade;
    int numero;

    Terreno *ter = new Terreno();

    //imovel
    cout << "Imovel para aluguel(1) ou venda(2): ";//implementar com string, talvez
    scanf("%d", &tipoOferta);
    FLUSH;
    cout << "Valor do Imovel: ";
    scanf("%lf", &valor);
    FLUSH;
    cout << "Mais informacoes: ";
    getline(cin, descricao);
    //endereco
    cout << "Digite o logradouro: ";
    getline(cin, logradouro);
    cout << "Digite o numero do imovel: ";
    scanf("%d", &numero);
    FLUSH;
    cout << "Digite o bairro: ";
    getline(cin, bairro);
    cout << "Digite o CEP: ";
    getline(cin, cep);
    cout << "Digite a cidade: ";
    getline(cin, cidade);

    cout << "Digite o tamanho do terreno: ";
    scanf("%lf", &area);
    FLUSH;

    ter->setTipoImovel(3);
    ter->setTipoOferta(tipoOferta);
    ter->setValor(valor);
    ter->setEndereco(logradouro, numero, bairro, cep, cidade);
    ter->setDescricao(descricao);
    ter->setArea(area);
    ter->setId(id);
    id++;

    return ter;
}*/
