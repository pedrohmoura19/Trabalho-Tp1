#include <iostream>
#include <string>

#include "Dominios.h"
#include "testes.h"

using namespace std;

int main(){

    TUCep testecep;
    TUClasse testeclasse;
    TUCodAgencia testeagencia;
    TUData testedata;

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

    switch(testedata.run()){
        case true  : cout << "SUCESSO no teste de Data" << endl;
                            break;
        case false : cout << "FALHA no teste de Data" << endl;
                            break;

    }
    return 0;

}
