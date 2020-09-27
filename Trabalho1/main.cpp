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

    switch(testecep.run()){
        case true : cout << "SUCESSO no teste do CEP" << endl;
                            break;
        case false : cout << "FALHA no teste do CEP" << endl;
                            break;
    }

    switch(testeclasse.run()){
        case true  : cout << "SUCESSO no teste de Classe" << endl;
                            break;
        case false : cout << "FALHA no teste de Classe" << endl;
                            break;
    }

    switch(testecpf.run()){
        case true  : cout << "SUCESSO no teste de CPF" << endl;
                            break;
        case false : cout << "FALHA no teste de CPF" << endl;
                            break;
    }

     switch(testeagencia.run()){
        case true  : cout << "SUCESSO no teste de Codigo de Agencia" << endl;
                            break;
        case false : cout << "FALHA no teste de Codigo de Agencia" << endl;
                            break;

    }

    switch(testeaplicacao.run()){
        case true  : cout << "SUCESSO no teste de Codigo de Aplicaçao" << endl;
                            break;
        case false : cout << "FALHA no teste de Codigo de Aplicacao" << endl;
                            break;

    }

     switch(testebanco.run()){
        case true  : cout << "SUCESSO no teste de Codigo de Banco" << endl;
                            break;
        case false : cout << "FALHA no teste de Codigo de Banco" << endl;
                            break;

    }

    switch(testeproduto.run()){
        case true : cout << "SUCESSO no teste do Codigo de Produto" << endl;
                            break;
        case false : cout << "FALHA no teste do Codigo de Produto" << endl;
                            break;
    }

    switch(testedata.run()){
        case true  : cout << "SUCESSO no teste de Data" << endl;
                            break;
        case false : cout << "FALHA no teste de Data" << endl;
                            break;

    }

     switch(testeemissor.run()){
        case true  : cout << "SUCESSO no teste de Emissor" << endl;
                            break;
        case false : cout << "FALHA no teste de Emissor" << endl;
                            break;

    }

     switch(testeendereco.run()){
        case true  : cout << "SUCESSO no teste de Endereco" << endl;
                            break;
        case false : cout << "FALHA no teste de Endereco" << endl;
                            break;

    }

     switch(testehorario.run()){
        case true  : cout << "SUCESSO no teste de Horario" << endl;
                            break;
        case false : cout << "FALHA no teste de Horario" << endl;
                            break;

    }


    switch(testenome.run()){
        case true : cout << "SUCESSO no teste do Nome" << endl;
                            break;
        case false : cout << "FALHA no teste do Nome" << endl;
                            break;
    }

    switch(testenumero.run()){
        case true : cout << "SUCESSO no teste do Numero" << endl;
                            break;
        case false : cout << "FALHA no teste do Numero" << endl;
                            break;
    }

    switch(testeprazo.run()){
        case true : cout << "SUCESSO no teste do Prazo" << endl;
                            break;
        case false : cout << "FALHA no teste do Prazo" << endl;
                            break;
    }

     switch(testesenha.run()){
        case true  : cout << "SUCESSO no teste de Senha" << endl;
                            break;
        case false : cout << "FALHA no teste de Senha" << endl;
                            break;
    }


    switch(testetaxa.run()){
        case true : cout << "SUCESSO no teste da Taxa" << endl;
                            break;
        case false : cout << "FALHA no teste da Taxa" << endl;
                            break;
    }

    switch(testevalor.run()){
        case true : cout << "SUCESSO no teste do Valor de Aplicacao" << endl;
                            break;
        case false : cout << "FALHA no teste do Valor de Aplicacao" << endl;
                            break;
    }

     switch(testeminimo.run()){
        case true  : cout << "SUCESSO no teste de Valor Minimo" << endl;
                            break;
        case false : cout << "FALHA no teste de Valor Minimo" << endl;
                            break;

    }


    return 0;

}
