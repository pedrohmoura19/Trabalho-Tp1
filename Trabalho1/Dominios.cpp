#include "Dominios.h"
#include <string>

CEP::CEP(){
}

CEP::CEP(int valor){
    this->valor = valor;
}

void CEP::validar(int valor){
    if ((LIMITE_MIN_FORT > valor) || (valor > LIMITE_MAX_FORT))
        throw invalid_argument("CEP invalido");
}

void CEP::setValor(int valor){
    validar(valor);
    this->valor = valor;
}

int CEP::getValor(){
    return valor;
}


Classe::Classe(){
}

Classe::Classe(string valor){
    this->valor = valor;
}

void Classe::validar(string valor){
    if( (valor.size()) > LIMITE )
        throw length_error("Tamanho excedido");
    if( (valor == "LCA") || (valor == "CDB") || (valor == "LC") || (valor == "LCI") || (valor == "LF") );
    else
        throw invalid_argument("Entrada invalida");
}

void Classe::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

string Classe::getValor(){
    return valor;
}


CodAgencia::CodAgencia(){
}

CodAgencia::CodAgencia(string valor){
    this->valor = valor;
}

void CodAgencia::validar(string valor){
    if ((valor.size()) != FORMATO )
        throw length_error("Tamanho excedido");
    try{
        stoi(valor);
    }
    catch(invalid_argument &exp){
     ;
    }
}

void CodAgencia::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

string CodAgencia::getValor(){
    return valor;
}


CodProduto::CodProduto(){
}

CodProduto::CodProduto(string valor){
    this->valor = valor;
}

void CodProduto::validar(string valor){
    if ((valor.size()) != FORMATO)
        throw length_error("Tamanho excedido");
    try{
        stoi(valor);
    }
    catch(invalid_argument &exp){
     ;
    }
}

void CodProduto::setValor(string valor){
    validar(valor);
    this->valor = valor;

}

string CodProduto::getValor(){
    return valor;
}


Data::Data(){
}

Data::Data(string valor){
    this->valor = valor;
}

void Data::validar(string valor){
    if ((valor.size()) != FORMATO)
        throw length_error("Tamanho excedido");
    try{
        stoi(valor);
    }
    catch(invalid_argument &exp){
     ;
    }
}

void Data::setValor(string valor){
    validar(valor);
    this->valor = valor;

}

string Data::getValor(){
    return valor;
}


Nome::Nome(){
}

Nome::Nome(string valor){
    this->valor = valor;
}

void Nome::validar(string valor){
    if ((valor.size()) < LIMITE_MIN || (valor.size()) > LIMITE_MAX )
        throw length_error("Tamanho incorreto");
    try{
        stoi(valor);
    }
    catch(invalid_argument &exp){
     ;
    }
}

void Nome::setValor(string valor){
    validar(valor);
    this->valor = valor;

}

string Nome::getValor(){
    return valor;
}


Prazo::Prazo(){
}

Prazo::Prazo(int valor){
    this->valor = valor;
}

void Prazo::validar(int valor){
    if ((valor == 6 ) || (valor == 12) || (valor == 18) || (valor == 24) || (valor == 30)|| (valor == 36)
        || (valor == 42) || (valor == 48) || (valor == 54) || (valor == 60) || (valor == 66) || (valor == 72));
    else
        throw invalid_argument("Tamanho incorreto");

}

void Prazo::setValor(int valor){
    validar(valor);
    this->valor = valor;

}

int Prazo::getValor(){
    return valor;
}


Taxa::Taxa(){
}

Taxa::Taxa(int valor){
    this->valor = valor;
}

void Taxa::validar(int valor){
    if ((LIMITE_MIN > valor) || (valor > LIMITE_MAX))
        throw invalid_argument("Taxa invalida");
}

void Taxa::setValor(int valor){
    validar(valor);
    this->valor = valor;
}

int Taxa::getValor(){
    return valor;
}


ValorAplicacao::ValorAplicacao(){
}

ValorAplicacao::ValorAplicacao(int valor){
    this->valor = valor;
}

void ValorAplicacao::validar(int valor){
    if ((LIMITE_MIN > valor) || (valor > LIMITE_MAX))
        throw invalid_argument("Valor invalida");
}

void ValorAplicacao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}

int ValorAplicacao::getValor(){
    return valor;
}




