#include <iostream>
#include <string>
#include "Dominios.h"

using namespace std;

int main()
{
    Classe cla1("abc");
    CEP cep1(60000001);

    cout << cla1.getValor() << endl;

    try{
        cla1.setValor("CDB");
    }
    catch(invalid_argument &exp){
        cout << exp.what() << endl;
    }


}
