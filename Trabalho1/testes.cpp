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
void TUCodAgencia::setUp(){
    codigo = new CodAgencia();
    estado = true;
}

void TUCodAgencia::tearDown(){
    delete codigo;
}

void TUCodAgencia::testarCenarioSucesso(){
    try{
        codigo->setAgencia(VALOR_VALIDO);
        if(codigo->getAgencia() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUCodAgencia::testarCenarioFalha(){
    try{
        codigo->setAgencia(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUCodAgencia::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


/////////////Metodos da classe TUCodProduto//////////////


/////////////Metodos da classe TUData//////////////
void TUData::setUp(){
    codigo = new Data();
    estado = true;
}

void TUData::tearDown(){
    delete codigo;
}

void TUData::testarCenarioSucesso(){
    try{
        codigo->setData(VALOR_VALIDO);
        if(codigo->getData() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUData::testarCenarioFalha(){
    try{
        codigo->setData(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


/////////////Metodos da classe TUNome//////////////
void TUNome::setUp(){
    codigo = new Nome();
    estado = true;
}

void TUNome::tearDown(){
    delete codigo;
}

void TUNome::testarCenarioSucesso(){
    try{
        codigo->setNome(VALOR_VALIDO);
        if(codigo->getNome() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUNome::testarCenarioFalha(){
    try{
        codigo->setNome(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/////////////Metodos da classe TUPrazo//////////////
void TUPrazo::setUp(){
    codigo = new Prazo();
    estado = true;
}

void TUPrazo::tearDown(){
    delete codigo;
}

void TUPrazo::testarCenarioSucesso(){
    try{
        codigo->setPrazo(VALOR_VALIDO);
        if(codigo->getPrazo() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUPrazo::testarCenarioFalha(){
    try{
        codigo->setPrazo(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUPrazo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/////////////Metodos da classe TUTaxa//////////////
void TUTaxa::setUp(){
    codigo = new Taxa();
    estado = true;
}

void TUTaxa::tearDown(){
    delete codigo;
}

void TUTaxa::testarCenarioSucesso(){
    try{
        codigo->setTaxa(VALOR_VALIDO);
        if(codigo->getTaxa() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUTaxa::testarCenarioFalha(){
    try{
        codigo->setTaxa(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUTaxa::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/////////////Metodos da classe TUValorAplicacao//////////////
void TUValorAplicacao::setUp(){
    codigo = new ValorAplicacao();
    estado = true;
}

void TUValorAplicacao::tearDown(){
    delete codigo;
}

void TUValorAplicacao::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if(codigo->getValor() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUValorAplicacao::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUValorAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
