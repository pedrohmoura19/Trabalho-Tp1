#include <iostream>
#include <string>

#include "Dominios.h"
#include "entidades.h"
#include "testesEntidades.h"

using namespace std;

int main(){

    TUAplicacao testeaplicacao;
    TUConta testeconta;
    TUProduto testeproduto;
    TUUsuario testeusuario;

    if(testeaplicacao.run() == true){
        cout << "SUCESSO no teste da Aplicacao" << endl;
    }else if(testeaplicacao.run() == false){
        cout << "FALHA no teste da Aplicacao" << endl;
    }

    if(testeconta.run() == true){
        cout << "SUCESSO no teste da Conta" << endl;
    }else if(testeconta.run() == false){
        cout << "FALHA no teste da Conta" << endl;
    }

    if(testeproduto.run() == true){
        cout << "SUCESSO no teste do Produto" << endl;
    }else if(testeproduto.run() == false){
        cout << "FALHA no teste do Produto" << endl;
    }

    if(testeusuario.run() == true ){
        cout << "SUCESSO no teste de Usuario" << endl;
    }else if(testeusuario.run() == false){
        cout << "FALHA no teste de Usuario" << endl;
    }

    //if(testecpf.run() == true){
    //    cout << "SUCESSO no teste de CPF" << endl;
    //}else if(testecpf.run() == false){
    //    cout << "FALHA no teste de CPF" << endl;
    //}

    //if(testeagencia.run() == true ){
    //    cout << "SUCESSO no teste de Codigo de Agencia" << endl;
    //}else if(testeagencia.run() == false){
    //    cout << "FALHA no teste de Codigo de Agencia" << endl;
    //}



    return 0;

}
