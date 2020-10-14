#include "entidades.h"

void Produto::setProduto(const CodProduto &codigo){
    this->codigo = codigo;
}

CodProduto Produto::getProduto(){
    return codigo;
}

void Produto::setClasse(const Classe &classe){
    this->classe = classe;
}

Classe Produto::getClasse(){
    return classe;
}

void Produto::setEmissor(const Emissor &emissor){
    this->emissor = emissor;
}

Emissor Produto::getEmissor(){
    return emissor;
}

void Produto::setPrazo(const Prazo &prazo){
    this->prazo = prazo;
}

Prazo Produto::getPrazo(){
    return prazo;
}

void Produto::setData(const Data &vencimento){
    this->vencimento = vencimento;
}

Data Produto::getData(){
    return vencimento;
}

void Produto::setTaxa(const Taxa &taxa){
    this->taxa = taxa;
}

Taxa Produto::getTaxa(){
    return taxa;
}

void Produto::setHorario(const Horario &horario){
    this->horario = horario;
}

Horario Produto::getHorario(){
    return horario;
}

void Produto::setValorMinimo(const ValorMinimo &valor){
    this->valor = valor;
}

ValorMinimo Produto::getValorMinimo(){
    return valor;
}



//Metodos da Classe Usuario

void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}

Nome Usuario::getNome(){
    return nome;
}

void Usuario::setEndereco(const Endereco &endereco){
    this->endereco = endereco;
}

Endereco Usuario::getEndereco() const{
    return endereco;
}

void Usuario::setCep(const Cep &cep){
    this->cep = cep;
}

Cep Usuario::getCep(){
    return cep;
}

void Usuario::setCpf(const Cpf &cpf){
    this->cpf = cpf;
}

Cpf Usuario::getCpf(){
    return cpf;
}

void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}

Senha Usuario::getSenha(){
    return senha;
}

