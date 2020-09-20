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

bool CodAgencia::validar(string valor){
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

CodAplicacao::CodAplicacao(){
}

CodAplicacao::CodAplicacao(string valor){
    this->valor = valor;
}

void CodAplicacao::validar(string valor){
    if ((valor.size()) != TAMANHO ){
        throw length_error("Tamanho excedido");
    }
    if(valor == "00000"){
        throw invalid_argument("Entrada Invalida");
    }
    try{
        stoi(valor);
    }
    catch(invalid_argument &exp){
     
    }
}

void CodAplicacao::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

string CodAplicacao::getValor(){
    return valor;
}

CodBanco::CodBanco(){
}

CodBanco::CodBanco(string valor){
    this->valor = valor;
}

void CodBanco::validar(string valor){
    if ( tamanhoValor != TAMANHO ){
        throw invalid_argument("Tamanho excedido");
    }
    if((valor == "341") || (valor == "001") || (valor == "237") || (valor == "104") || (valor == "033"));
    else{
        throw invalid_argument("Entrada invalida");
    }
}

void CodBanco::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

string CodBanco::getValor(){
    return valor;
}


Senha::Senha(){ 
}

Senha::Senha(string valor){
    this->valor = valor;
}

void Senha::validar(string valor){
    if( tamanhoValor != TAMANHO){
        throw invalid_argument("Tamanho excedido");
    }
    for (int i = 0; i < tamanhoValor; i++){
        if(valor[i] >= 48 && valor[i] <= 57);
        else{
            throw invalid_argument("Entrada invalida");
        }
        
    }
}

void Senha::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

string Senha::getValor(){
    return valor;
}