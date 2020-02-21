#ifndef CASA_H
#define CASA_H
#include "Imovel.h"
#include <iostream>

class Casa : public Imovel{
    private:
        int numPavimentos;
        int numQuartos;
        double areaTerreno;
        double areaConstruida;

        //Imovel cadastro;

    public:
        Casa();

        int getNumPavimentos();
        int getNumQuartos();
        double getAreaTerreno();
        double getAreaContruida();

        void setNumPavimentos(int numPavimentos);
        void setNumQuartos(int numQuartos);
        void setAreaTerreno(double areaTerreno);
        void setAreaContruida(double areaConstruida);

        string toString();
        //Imovel* CadastroAll(int tipoImovel);

};

#endif // CASA_H
