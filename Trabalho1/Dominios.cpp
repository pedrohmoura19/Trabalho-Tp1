#include "Dominios.h"
#include <string>

Cep::Cep(){
}

Cep::Cep(int valor){
    validar(valor);
    this->cep = valor;
}

void Cep::validar(int valor){
    if((LIMITE_MIN_SP1 <= valor) && (valor <= LIMITE_MAX_SP1));
    else if ((LIMITE_MIN_SP2 <= valor) && (valor <= LIMITE_MAX_SP2));
    else if((LIMITE_MIN_RJ <= valor) && (valor <= LIMITE_MAX_RJ));
    else if((LIMITE_MIN_BSB <= valor) && (valor <= LIMITE_MAX_BSB));
    else if((LIMITE_MIN_SLV <= valor) && (valor <= LIMITE_MAX_SLV));
    else if((LIMITE_MIN_FORT <= valor) && (valor <= LIMITE_MAX_FORT));
    else
        throw invalid_argument("CEP invalido");

}

void Cep::setCep(int valor){
    validar(valor);
    this->cep = valor;
}

int Cep::getCep(){
    return cep;
}


Classe::Classe(){
}

Classe::Classe(string classe){
    validar(classe);
    this->classe = classe;
}

void Classe::validar(string classe){
    if( (classe.size()) > LIMITE )
        throw length_error("Tamanho excedido");
    if( (classe == "LCA") || (classe == "CDB") || (classe == "LC") || (classe == "LCI") || (classe == "LF") );
    else
        throw invalid_argument("Entrada invalida");
}

void Classe::setClasse(string classe){
    validar(classe);
    this->classe = classe;
}

string Classe::getClasse(){
    return classe;
}


CodAgencia::CodAgencia(){
}

CodAgencia::CodAgencia(string valor){
    validar(valor);
    this->valor = valor;
}

void CodAgencia::validar(string valor){
    if ( (valor.size()) != FORMATO )
        throw invalid_argument("Codigo invalido");
    try{
        stoi(valor);
    }
    catch(invalid_argument &exp){
        throw invalid_argument("Codigo invalido");
    }
    if(stoi(valor) == 0)
        throw invalid_argument("Codigo invalido");
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
        throw invalid_argument("Codigo invalido");
    }
    if(stoi(valor) == 0)
        throw invalid_argument("Codigo invalido");
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
    if ((valor[2] != '/')||(valor[5] != '/') ||(valor.size() != FORMATO))
        throw invalid_argument("Deve se inserir a entrada em formato DD/MM/AAAA");
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

Nome::Nome(string nome){
    this->nome = nome;
}

void Nome::validar(string nome){
    int letras = 0;
    if ((nome.size()) < LIMITE_MIN || (nome.size()) > LIMITE_MAX )
        throw length_error("O nome deve ter entre 5 e 30 caracteres");

    for(int i=0;i < nome.size();i++){
        if(isalpha(nome[i]))
           letras++;

        if( isalpha(nome[i]) || nome[i] == ' ');
        else
            throw invalid_argument("O nome deve conter apenas letras");

        if( i != 0 && nome[i] == ' ' && nome[i-1] == ' ')
            throw invalid_argument("Nao eh permitido espacos em sequencia");
    }
}

void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;

}

string Nome::getNome(){
    return nome;
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
        throw invalid_argument("Valor de aplicacao deve ser de 0 a 1000000 reais");
}

void ValorAplicacao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}

int ValorAplicacao::getValor(){
    return valor;
}




