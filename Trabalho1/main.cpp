#include <iostream>
#include <string>
#include "Dominios.h"

using namespace std;

int main()
{
    Classe cla1("abc");
    CEP cep1(60000001);

    cout << cep1.getValor() << endl;

    try{
        cep1.setValor(2);
    }
    catch(invalid_argument &exp){
        cout << exp.what() << endl;
    }


}
