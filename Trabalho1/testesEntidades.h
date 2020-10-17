#ifndef TESTESENTIDADES_H_INCLUDED
#define TESTESENTIDADES_H_INCLUDED
#include <string>
#include "entidades.h"
#include "Dominios.h"


class TUProduto{
 private:
    const string VALOR_VALIDO_CODIGO = "015";
    const string VALOR_VALIDO_CLASSE = "LCA";
    const string VALOR_VALIDO_EMISSOR = "Casa De Investimentos Sentroa";
    const static int VALOR_VALIDO_PRAZO = 12;
    const string VALOR_VALIDO_VENCIMENTO = "07/04/2032";
    const static int VALOR_VALIDO_TAXA = 15;
    const string VALOR_VALIDO_HORARIO = "14:33";
    const static int VALOR_VALIDO_VALOR = 5000;

    Produto *produto;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

 public:
    bool run();
};

class TUUsuario{
 private:
    const string VALOR_VALIDO_NOME = "Joao Saldanha Santos";
    const string VALOR_VALIDO_ENDERECO = "Rua Sorgadinho Casa";
    const static int VALOR_VALIDO_CEP = 70252200;
    const string VALOR_VALIDO_CPF = "020.950.771-30";
    const string VALOR_VALIDO_SENHA = "456782";

    Usuario *usuario;

    bool estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

 public:
     bool run();
};



#endif // TESTESENTIDADES_H_INCLUDED
