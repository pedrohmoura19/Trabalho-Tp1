#include <iostream>
#include <string>

#include "Dominios.h"
#include "testes.h"

using namespace std;

int main(){

    TUCep testecep;
    TUClasse testeclasse;

    switch(testecep.run()){
        case true : cout << "SUCESSO no teste do CEP" << endl;
                            break;
        case false : cout << "FALHA no teste do CEP" << endl;
                            break;
    }

    switch(testeclasse.run()){
        case true  : cout << "SUCESSO no teste de classe" << endl;
                            break;
        case false : cout << "FALHA no teste de classe" << endl;
                            break;

    }
    return 0;

}
