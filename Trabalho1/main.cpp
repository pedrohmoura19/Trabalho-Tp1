#include <iostream>
#include <string>

#include "Dominios.h"
#include "testesEntidades.h"

using namespace std;

int main(){

    TUProduto testeproduto;
    TUUsuario testeusuario;

    //if(testeproduto.run() == true){
    //    cout << "SUCESSO no teste do Produto" << endl;
    //}else if(testecep.run() == false){
    //    cout << "FALHA no teste do Produto" << endl;
    //}

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
