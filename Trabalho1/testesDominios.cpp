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

/////////////Metodos da classe TUCpf//////////////
void TUCpf::setUp(){
    codigo = new Cpf();
    estado = true;
}

void TUCpf::tearDown(){
    delete codigo;
}

void TUCpf::testarCenarioSucesso(){
    try{
        codigo->setCpf(VALOR_VALIDO);
        if(codigo->getCpf() != VALOR_VALIDO){
            cout << "Erro ao dar get na Cpf" << endl;
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        cout << "Valor valido tratado como invalido" << endl;
        estado = false;
    }

}

void TUCpf::testarCenarioFalha(){
    try{
        codigo->setCpf(VALOR_INVALIDO);
        cout << "Valor invalido de Cpf tratado como valido" << endl;
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUCpf::run(){
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

/////////////Metodos da classe TUCodAplicacao//////////////
void TUCodAplicacao::setUp(){
    codigo = new CodAplicacao();
    estado = true;
}

void TUCodAplicacao::tearDown(){
    delete codigo;
}

void TUCodAplicacao::testarCenarioSucesso(){
    try{
        codigo->setAplicacao(VALOR_VALIDO);
        if(codigo->getAplicacao() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUCodAplicacao::testarCenarioFalha(){
    try{
        codigo->setAplicacao(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUCodAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/////////////Metodos da classe TUCodBanco//////////////
void TUCodBanco::setUp(){
    codigo = new CodBanco();
    estado = true;
}

void TUCodBanco::tearDown(){
    delete codigo;
}

void TUCodBanco::testarCenarioSucesso(){
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

void TUCodBanco::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUCodBanco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



/////////////Metodos da classe TUCodProduto//////////////
void TUCodProduto::setUp(){
    codigo = new CodProduto();
    estado = true;
}

void TUCodProduto::tearDown(){
    delete codigo;
}

void TUCodProduto::testarCenarioSucesso(){
    try{
        codigo->setProduto(VALOR_VALIDO);
        if(codigo->getProduto() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUCodProduto::testarCenarioFalha(){
    try{
        codigo->setProduto(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUCodProduto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


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

/////////////Metodos da classe TUEmissor//////////////
void TUEmissor::setUp(){
    codigo = new Emissor();
    estado = true;
}

void TUEmissor::tearDown(){
    delete codigo;
}

void TUEmissor::testarCenarioSucesso(){
    try{
        codigo->setEmissor(VALOR_VALIDO);
        if(codigo->getEmissor() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUEmissor::testarCenarioFalha(){
    try{
        codigo->setEmissor(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUEmissor::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


/////////////Metodos da classe TUEndereco//////////////
void TUEndereco::setUp(){
    codigo = new Endereco();
    estado = true;
}

void TUEndereco::tearDown(){
    delete codigo;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        codigo->setEndereco(VALOR_VALIDO);
        if(codigo->getEndereco() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUEndereco::testarCenarioFalha(){
    try{
        codigo->setEndereco(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


/////////////Metodos da classe TUHorario//////////////
void TUHorario::setUp(){
    codigo = new Horario();
    estado = true;
}

void TUHorario::tearDown(){
    delete codigo;
}

void TUHorario::testarCenarioSucesso(){
    try{
        codigo->setHorario(VALOR_VALIDO);
        if(codigo->getHorario() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUHorario::testarCenarioFalha(){
    try{
        codigo->setHorario(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUHorario::run(){
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

/////////////Metodos da classe TUNumero//////////////
void TUNumero::setUp(){
    codigo = new Numero();
    estado = true;
}

void TUNumero::tearDown(){
    delete codigo;
}

void TUNumero::testarCenarioSucesso(){
    try{
        codigo->setNumero(VALOR_VALIDO);
        if(codigo->getNumero() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUNumero::testarCenarioFalha(){
    try{
        codigo->setNumero(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUNumero::run(){
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

/////////////Metodos da classe TUSenha//////////////
void TUSenha::setUp(){
    codigo = new Senha();
    estado = true;
}

void TUSenha::tearDown(){
    delete codigo;
}

void TUSenha::testarCenarioSucesso(){
    try{
        codigo->setSenha(VALOR_VALIDO);
        if(codigo->getSenha() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUSenha::testarCenarioFalha(){
    try{
        codigo->setSenha(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUSenha::run(){
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

/////////////Metodos da classe TUValorMinimo//////////////
void TUValorMinimo::setUp(){
    codigo = new ValorMinimo();
    estado = true;
}

void TUValorMinimo::tearDown(){
    delete codigo;
}

void TUValorMinimo::testarCenarioSucesso(){
    try{
        codigo->setValorMinimo(VALOR_VALIDO);
        if(codigo->getValorMinimo() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }

}

void TUValorMinimo::testarCenarioFalha(){
    try{
        codigo->setValorMinimo(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUValorMinimo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
