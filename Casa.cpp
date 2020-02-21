#include <iostream>
#include "Casa.h"
#include "Terreno.h"

Casa::Casa(){
    //inicialização atributos da classe casa
    numPavimentos = 0;
    numQuartos = 0;
    areaTerreno = 0;
    areaConstruida = 0;
    tipoImovel = 1;
}

int Casa::getNumPavimentos()
{
    return numPavimentos;
}

int Casa::getNumQuartos()
{
    return numQuartos;
}

double Casa::getAreaTerreno()
{
    return areaTerreno;
}

double Casa::getAreaContruida()
{
    return areaConstruida;
}

void Casa::setNumPavimentos(int numPavimentos)
{
    if(numPavimentos<0)
        this -> numPavimentos = 0;
    else
        this -> numPavimentos = numPavimentos;
}

void Casa::setNumQuartos(int numQuartos)
{
    if(numQuartos<0)
        this -> numQuartos = 0;
    else
        this -> numQuartos = numQuartos;
}

void Casa::setAreaTerreno(double areaTerreno)
{
    if(areaTerreno<0)
        this -> areaTerreno= 0;
    else
        this -> areaTerreno=areaTerreno;
}

void Casa::setAreaContruida(double areaConstruida)
{
    if(areaConstruida<0)
        this -> areaConstruida=0;
    else
        this -> areaConstruida=areaConstruida;
}

string Casa::toString()
{
    stringstream strong;

    strong<< "Casa\n" << "Id: " << id << endl
          << "Tipo Oferta: " << tipoOferta << endl
          << "Valor: " << valor << endl
          << "Descricao: " << descricao << endl
          << "Logradouro: " << getEndereco().getLogradouro() << endl
          << "Numero: " << getEndereco().getNumero() << endl
          << "Bairro: " << getEndereco().getBairro() << endl
          << "Cep: " << getEndereco().getCep() << endl
          << "Cidade: " << getEndereco().getCidade() << endl
          << "Numero de Pavimentos: " << numPavimentos << endl
          << "Numero de Quartos: " << numQuartos << endl
          << "Area do terreno: " << areaTerreno << endl
          << "Area construida: " << areaConstruida << endl;

    return strong.str();
}

/*Imovel* Casa::CadastroAll(int tipoImovel){

    string logradouro, bairro, cep, cidade;
    int numero;

    Casa *cs = new Casa();

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

    cout << "Digite o numero de pavimentos: ";
    scanf("%d", &numPavimentos);
    FLUSH;
    cout << "Digite o numero de quartos: ";
    scanf("%d", &numQuartos);
    FLUSH;
    cout << "Digite a area do terreno: ";
    scanf("%lf", &areaTerreno);
    FLUSH;
    cout << "Digite a area construida: ";
    scanf("%lf", &areaConstruida);
    FLUSH;

    cs->setTipoImovel(1);
    cs->setTipoOferta(tipoOferta);
    cs->setValor(valor);
    cs->setEndereco(logradouro, numero, bairro, cep, cidade);
    cs->setDescricao(descricao);
    cs->setNumPavimentos(numPavimentos);
    cs->setNumQuartos(numQuartos);
    cs->setAreaTerreno(areaTerreno);
    cs->setAreaContruida(areaConstruida);
    cs->setId(id);
    id++;

    return cs;
}*/


