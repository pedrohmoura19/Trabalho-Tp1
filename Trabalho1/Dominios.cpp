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

bool CodAgencia::validar(string valor){
    if ((valor.size()) > LIMITE)
        throw length_error("Tamanho excedido");
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
    if ((valor.size()) > LIMITE)
        throw length_error("Tamanho excedido");
}

void CodProduto::setValor(string valor){
    validar(valor);
    this->valor = valor;

}

string CodProduto::getValor(){
    return valor;
}

