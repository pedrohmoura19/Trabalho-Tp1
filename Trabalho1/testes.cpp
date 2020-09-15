#include <iostream>
#include <string>
#include "testes.h"

using namespace std;

/////////////Metodos da classe TUCep//////////////
void TUCep::setUp(){
    codigo = new Cep();
    estado = true;
}

void TUCep::tearDown(){
    delete codigo;
}

void TUCep::testarCenarioSucesso(){
    try{
        codigo->setCep(VALOR_VALIDO);
        if(codigo->getCep() != VALOR_VALIDO){
            cout << "Erro ao dar get no CEP" << endl;
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        cout << "Valor valido tratado como invalido" << endl;
        estado = false;
    }

}

void TUCep::testarCenarioFalha(){
    try{
        codigo->setCep(VALOR_INVALIDO);
        cout << "Valor invalido de Cep tratado como valido" << endl;
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUCep::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/////////////Metodos da classe TUClasse//////////////
void TUClasse::setUp(){
    codigo = new Classe();
    estado = true;
}

void TUClasse::tearDown(){
    delete codigo;
}

void TUClasse::testarCenarioSucesso(){
    try{
        codigo->setClasse(VALOR_VALIDO);
        if(codigo->getClasse() != VALOR_VALIDO){
            cout << "Erro ao dar get na Classe" << endl;
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        cout << "Valor valido tratado como invalido" << endl;
        estado = false;
    }

}

void TUClasse::testarCenarioFalha(){
    try{
        codigo->setClasse(VALOR_INVALIDO);
        cout << "Valor invalido de Classe tratado como valido" << endl;
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/////////////Metodos da classe TUCodAgencia//////////////
