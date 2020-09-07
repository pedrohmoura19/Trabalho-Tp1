#include <iostream>
#include <string>
#include "Dominios.h"

using namespace std;

int main()
{
    CEP cep(123);
   cout << cep.getValor() << endl;

   CodAgencia agen("2333");
   cout << agen.getValor() << endl;

}
