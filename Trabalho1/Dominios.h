#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <string>

using namespace std;

class CEP{
    private:
        static const int LIMITE = 60999999;
        int valor;
        bool validar(int valor);

    public:
        CEP();
        CEP(int);
        void setValor(int);
        int getValor();
};

class Classe{
};

class CodAgencia{
    private:
        static const int LIMITE = 4;
        string valor;
        int TamanhoValor = valor.size();
        bool validar(string valor);

    public:
        CodAgencia();
        CodAgencia(string);
        void setValor(string);
        string getValor();
};

class Taxa{
    private:
        static const int LIMITE = 200;
        int valor;
        bool validar(int valor);

    public:
        Taxa();
        Taxa(int);
        void setValor(int);
        int getValor();

};

class ValorAplicacao{
    private:
        static const int LIMITE = 1000000;
        int valor;
        bool validar(int valor);

    public:
        ValorAplicacao();
        ValorAplicacao(int);
        void setValor(int);
        int getValor();
};



#endif // DOMINIOS_H_INCLUDED
