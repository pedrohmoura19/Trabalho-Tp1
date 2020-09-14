#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED
#include "Dominios.h"

using namespace std;

class TUCep {
private:
    const int VALOR_VALIDO   = 25341299;
    const int VALOR_INVALIDO = 27143900;

    Cep *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUClasse {
private:
    const string VALOR_VALIDO   = "LCA";
    const string VALOR_INVALIDO = "FII";

    Classe *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};



#endif // TESTES_H_INCLUDED
