#include "Dominios.h"
#include <string>

CEP::CEP(){
}

CEP::CEP(int valor){
    this->valor = valor;
}

bool CEP::validar(int valor){
    if (valor>LIMITE)
        return false;
    else return true;
}

void CEP::setValor(int valor){
    this->valor = valor;
}

int CEP::getValor(){
    return valor;
}


CodAgencia::CodAgencia(){
}

CodAgencia::CodAgencia(string valor){
    this->valor = valor;
}

bool CodAgencia::validar(string valor){
    if ( TamanhoValor > LIMITE )
        return false;
    else return true;
}

void CodAgencia::setValor(string valor){
    if (validar(valor) == true)
        this->valor = valor;

}

string CodAgencia::getValor(){
    return valor;
}
