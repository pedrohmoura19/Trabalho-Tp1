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

class TUCodAplicacao {
private:
    const string VALOR_VALIDO   = "15032";
    const string VALOR_INVALIDO = "00000";

    CodAplicacao *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUCodBanco {
private:
    const string VALOR_VALIDO   = "001";
    const string VALOR_INVALIDO = "000";

    CodBanco *codigo;

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

class TUCpf {
private:
    const string VALOR_VALIDO   = "167.247.570-88";
    const string VALOR_INVALIDO = "167.247.572-88";

    Cpf *codigo;

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
    const string VALOR_VALIDO   = "31/03/2040";
    const string VALOR_INVALIDO = "31/04/2027";

    Data *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUEmissor {
private:
    const string VALOR_VALIDO   = "Cesario Alvim";
    const string VALOR_INVALIDO = "Aecio neves";

    Emissor *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUEndereco {
private:
    const string VALOR_VALIDO   = "Cesario Alvim";
    const string VALOR_INVALIDO = "Barao branco rio";

    Endereco *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};

class TUHorario {
private:
    const string VALOR_VALIDO   = "15:50";
    const string VALOR_INVALIDO = "10:45";

    Horario *codigo;

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

class TUNumero {
private:
    const string VALOR_VALIDO   = "819889-8";
    const string VALOR_INVALIDO = "995389-7";

    Numero *codigo;

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

class TUSenha {
private:
    const string VALOR_VALIDO   = "123456";
    const string VALOR_INVALIDO = "111112";

    Senha *codigo;

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

class TUValorMinimo {
private:
    const int VALOR_VALIDO   = 10000;
    const int VALOR_INVALIDO = 72;

    ValorMinimo *codigo;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    bool run();
};



#endif // TESTES_H_INCLUDED
