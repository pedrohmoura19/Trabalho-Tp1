#include <iostream>
#include <string>

#include "Dominios.h"
#include "testes.h"

using namespace std;

int main(){

    TUCep testecep;
    TUClasse testeclasse;
    TUCodAgencia testeagencia;
    TUCodProduto testeproduto;
    TUData testedata;
    TUNome testenome;
    TUNumero testenumero;
    TUPrazo testeprazo;
    TUTaxa testetaxa;
    TUValorAplicacao testevalor;

    switch(testecep.run()){
        case true : cout << "SUCESSO no teste do CEP" << endl;
                            break;
        case false : cout << "FALHA no teste do CEP" << endl;
                            break;
    }

    switch(testeclasse.run()){
        case true  : cout << "SUCESSO no teste de Classe" << endl;
                            break;
        case false : cout << "FALHA no teste de Classe" << endl;
                            break;

    }

    switch(testeagencia.run()){
        case true  : cout << "SUCESSO no teste de Codigo de Agencia" << endl;
                            break;
        case false : cout << "FALHA no teste de Codigo de Agencia" << endl;
                            break;

    }

    switch(testeproduto.run()){
        case true : cout << "SUCESSO no teste do Codigo de Produto" << endl;
                            break;
        case false : cout << "FALHA no teste do Codigo de Produto" << endl;
                            break;
    }

    switch(testedata.run()){
        case true  : cout << "SUCESSO no teste de Data" << endl;
                            break;
        case false : cout << "FALHA no teste de Data" << endl;
                            break;

    }

    switch(testenome.run()){
        case true : cout << "SUCESSO no teste do Nome" << endl;
                            break;
        case false : cout << "FALHA no teste do Nome" << endl;
                            break;
    }

    switch(testenumero.run()){
        case true : cout << "SUCESSO no teste do Numero" << endl;
                            break;
        case false : cout << "FALHA no teste do Numero" << endl;
                            break;
    }

    switch(testeprazo.run()){
        case true : cout << "SUCESSO no teste do Prazo" << endl;
                            break;
        case false : cout << "FALHA no teste do Prazo" << endl;
                            break;
    }

    switch(testetaxa.run()){
        case true : cout << "SUCESSO no teste da Taxa" << endl;
                            break;
        case false : cout << "FALHA no teste da Taxa" << endl;
                            break;
    }

    switch(testevalor.run()){
        case true : cout << "SUCESSO no teste do Valor de Aplicacao" << endl;
                            break;
        case false : cout << "FALHA no teste do Valor de Aplicacao" << endl;
                            break;
    }

    return 0;

}
