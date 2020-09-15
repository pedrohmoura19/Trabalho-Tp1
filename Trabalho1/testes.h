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

class TUCodAgencia {
private:
    const string VALOR_VALIDO   = "1503";
    const string VALOR_INVALIDO = "0000";

    CodAgencia *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUCodProduto {
private:
    const string VALOR_VALIDO   = "256";
    const string VALOR_INVALIDO = "4546";

    CodProduto *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUData {
private:
    const string VALOR_VALIDO   = "25/02/2010";
    const string VALOR_INVALIDO = "01/03/1970";

    Data *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUNome {
private:
    const string VALOR_VALIDO   = "Jorge Aquino Silva";
    const string VALOR_INVALIDO = "Joao saldanha";

    Nome *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUPrazo {
private:
    const int VALOR_VALIDO   = 48;
    const int VALOR_INVALIDO = 15;

    Prazo *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUTaxa {
private:
    const int VALOR_VALIDO   = 95;
    const int VALOR_INVALIDO = 300;

    Taxa *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUValorAplicacao {
private:
    const int VALOR_VALIDO   = 200000;
    const int VALOR_INVALIDO = 2000000;

    ValorAplicacao *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};




#endif // TESTES_H_INCLUDED
