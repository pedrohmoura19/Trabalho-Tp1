#include <iostream>
#include <string>

#include "Dominios.h"
#include "testes.h"

using namespace std;

int main(){

    TUCep testecep;
    TUClasse testeclasse;
    TUCpf testecpf;
    TUCodAgencia testeagencia;
    TUCodAplicacao testeaplicacao;
    TUCodBanco testebanco;
    TUCodProduto testeproduto;
    TUData testedata;
    TUEmissor testeemissor;
    TUEndereco testeendereco;
    TUHorario testehorario;
    TUNome testenome;
    TUNumero testenumero;
    TUPrazo testeprazo;
    TUSenha testesenha;
    TUTaxa testetaxa;
    TUValorAplicacao testevalor;
    TUValorMinimo testeminimo;

    if(testecep.run() == true){
        cout << "SUCESSO no teste do CEP" << endl;
    }else if(testecep.run() == false){
        cout << "FALHA no teste do CEP" << endl;
    }

    if(testeclasse.run() == true ){
        cout << "SUCESSO no teste de Classe" << endl;
    }else if(testeclasse.run() == false){
        cout << "FALHA no teste de Classe" << endl;
    }

    if(testecpf.run() == true){
        cout << "SUCESSO no teste de CPF" << endl;
    }else if(testecpf.run() == false){
        cout << "FALHA no teste de CPF" << endl;
    }

    if(testeagencia.run() == true ){
        cout << "SUCESSO no teste de Codigo de Agencia" << endl;
    }else if(testeagencia.run() == false){
        cout << "FALHA no teste de Codigo de Agencia" << endl;
    }

    if(testeaplicacao.run() == true ){
        cout << "SUCESSO no teste de Codigo de Aplicaçao" << endl;
    }else if(testeaplicacao.run() == false){
        cout << "FALHA no teste de Codigo de Aplicacao" << endl;
    }

    if(testebanco.run() == true){
        cout << "SUCESSO no teste de Codigo de Banco" << endl;
    }else if(testebanco.run() == false){
        cout << "FALHA no teste de Codigo de Banco" << endl;
    }

    if(testeproduto.run() == true){
        cout << "SUCESSO no teste do Codigo de Produto" << endl;
    }else if(testeproduto.run() == false){
        cout << "FALHA no teste do Codigo de Produto" << endl;
    }

    if(testedata.run() == true){
        cout << "SUCESSO no teste de Data" << endl;
    }else if(testedata.run() == false){
        cout << "FALHA no teste de Data" << endl;
    }

    if(testeemissor.run() == true){
        cout << "SUCESSO no teste de Emissor" << endl;
    }else if(testedata.run() == false){
        cout << "FALHA no teste de Emissor" << endl;
    }

    if(testeendereco.run() == true){
        cout << "SUCESSO no teste de Endereco" << endl;
    }else if(testeendereco.run() == false){
        cout << "FALHA no teste de Endereco" << endl;
    }

    if(testehorario.run() == true){
        cout << "SUCESSO no teste de Horario" << endl;
    }else if(testehorario.run() == false){
        cout << "FALHA no teste de Horario" << endl;
    }


    if(testenome.run() == true ){
        cout << "SUCESSO no teste do Nome" << endl;
    }else if(testenome.run() == false){
        cout << "FALHA no teste do Nome" << endl;
    }

    if(testenumero.run() == true){
        cout << "SUCESSO no teste do Numero" << endl;
    }else if(testenumero.run() == false){
        cout << "FALHA no teste do Numero" << endl;
    }

    if(testeprazo.run() == true){
        cout << "SUCESSO no teste do Prazo" << endl;
    }else if(testeprazo.run() == false){
        cout << "FALHA no teste do Prazo" << endl;
    }

    if(testesenha.run() == true){
        cout << "SUCESSO no teste de Senha" << endl;
    }else if(testesenha.run() == false){
        cout << "FALHA no teste de Senha" << endl;
    }


    if(testetaxa.run() == true){
        cout << "SUCESSO no teste da Taxa" << endl;
    }else if(testetaxa.run() == false){
        cout << "FALHA no teste da Taxa" << endl;
    }

    if(testevalor.run() == true){
        cout << "SUCESSO no teste do Valor de Aplicacao" << endl;
    }else if(testevalor.run() == false){
        cout << "FALHA no teste do Valor de Aplicacao" << endl;
    }

    if(testeminimo.run() == true){
        cout << "SUCESSO no teste de Valor Minimo" << endl;
    }else if(testeminimo.run() == false){
        cout << "FALHA no teste de Valor Minimo" << endl;
    }


    return 0;

}
